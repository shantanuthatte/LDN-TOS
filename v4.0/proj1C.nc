/*
 * Authors:        Michael Stewart, Shabana Sangli, Shantanu, Thatte
 * Date:           March 24, 2013
 * Version:        2.4
 * 
 * Description: 
 *
 * $CHANGE LOG / NEEDED UPDATES$
 *----------------------------------------------------------------------------------
 * 
 * VERSION 2.2
 *
 * MFS 4.6.2013    Need to modify the Q primitive getQ so that the packet isn't fully
 *                 removed from the Q until the packet was successfully rcvd by the 
 *                 destination address.
 *
 * MFS 4.6.2013    The seeding of the random number generator doesn't appear to work
 *
 * MFS 4.6.2013    The functions processQuery_response and processPacket need to be 
 *                 coded.  Currently these are just stubbed out.
 *
 * VERSION 2.3     
 *
 * MFS 4.6.2013    loading the Q looks like it is working but this still needs to be 
 *                 more thoroughly tested as well as the other Q primitives.
 *
 * MFS 4.6.2013    We need to measure how much time the Q spends full vs. how much
 *                 time it spends not full.
 *              
 *                 We need to add error count / error printouts  and other trace code
 *                 to see how well the code is performing.
 *
 * MFS 4.7.2013    Coded the sendWait funtion which should be called before every
 *                 send.  It will wait until the previous send is completed.  
 *                 We may need to develop a shortcut out of the sendWait if for
 *                 some reason a send hangs.
 *
 *                 NEEDED : We need to implement a radiosleep to put the radio to
 *                          sleep during its OFF cycle.
 *
 * VERSION 2.4
 *
 * VERSION 3.0
 *
 * MFS 4.11.2013  Version 2.4 became somewhat stable.  Only tested on 2 motes but it runs with
 *                a hang until testing was stopped.  However, not a lot of packets are getting
 *                through; like 30 or so before packets quit being generated.
 *
 * VERSION 3.1
 *
 * VERSION 3.2    4.14.2013 MFS
 *
 *
 *----------------------------------------------------------------------------------
 */



#include "printf.h"
#include "Timer.h"
#include "proj1.h"
#include "AM.h"

//#define TRACE_RCV_PKT

module proj1C {
  
  uses {
    interface Boot;
    interface SplitControl as RadioControl;
    interface Packet;
    interface AMPacket;
    interface AMSend as qCmdSnd;
    interface AMSend as qRspSnd;
    interface AMSend as qPktSnd;
    interface Receive;
    interface Timer<TMilli> as LclTime;
    interface Timer<TMilli> as PeriodTimer;
    interface Timer<TMilli> as QTimer;
    interface Timer<TMilli> as PktTimer;
    //    interface Read<uint16_t>;
    interface Leds;
    interface ActiveMessageAddress;
    interface ParameterInit<uint16_t> as Seed;
    interface Random;
  }
}


implementation {
  state_t     gState;        // Stores the general state of the mote, counts, timer periods, 
  message_t   gSndMsg;
  message_t   gRcvMsg;
  message_t   gQcmd_msg;
  message_t   gQrsp_msg;
  message_t   gQpkt_msg;
  lmsg_t      rmsg;

  bool        gQcmd_snd_busy = FALSE;
  bool        gQrsp_snd_busy = FALSE;
  bool        gQpkt_snd_busy = FALSE;
  bool        gRcv_busy = FALSE;

  bool        gNew_period = FALSE;

  msg_q_t     gQ;            // the Q which stores all created and received messages.


  /*********************** Start OF helper functions *************************/

  
  /*
   * Function:     sendFail
   *
   * Description:  called if the send should fail
   *
   */

  void sendFail( lmsg_t *lmsg  ) {
    gState.send_fail_err++;
    //    printf( "error, send failed Type: %-2x Src: %-2d Dst: %-2d - snd fail err %-5d | %-5d\n",
    //	    lmsg->type, lmsg->src_addr, lmsg->dst_addr, gState.send_fail_err, gState.send_cnt );
    //    printfflush( );
  }


  // Use LEDs to report various status issues.
  void report_problem() { call Leds.led0Toggle(); }




  /*********************** END OF helper functions ***************************/
    



  /******************** Start OF Q primitives functions **********************/ 

  /*
   * Function:     initQ
   *
   * Description:  Initialize the Q
   *
   */

  void initQ( msg_q_t *q ) {
    int i;

    q->size = 0;                        // the Q currently has nothing in it
    q->removed_cnt = 0;
    q->loaded_cnt = 0;

    for (i=0; i<Q_LEN; i++) {
      q->load_ts[i] = 0;                // indicates that nothing is loaded at msg buffer location i
    }

    for (i=0; i<N_NODES; i++) {
      q->seq[i] = 0;
      q->dst_cnt[i] = 0;
    }
  }


  /*
   * Function:     loadQ
   *
   * Description:  Load a message_t structure into the Q into the first location
   *               available.  Also, set the time at the corresponding index in
   *               the load_time array.  This indicates not only the time that
   *               the message was loaded but also that the Q buffer has a 
   *               message in it at this index.
   *
   * Return:       TRUE: Q was loaded with a message
   *               FALSE: Q Was not loaded with a message
   */ 

  bool loadQ( msg_q_t *q, lmsg_t *m ) {
    int  i;
    bool q_loaded = FALSE;

    for (i=0; i<Q_LEN; i++) {           // Traverse the q looking for an empty node
      
      if (!q->load_ts[i]) {
	break;                          // We have reached a 0 in the load time array, nothing is loaded here
      }
    }

    if (i < Q_LEN) {                    // have not traversed entire Q without finding an empty node, Q is full
      q->size++;                        // increment the q size by 1
      q->load_ts[i] = call LclTime.getNow( ); // set the timestamp of when Q was loaded.
      memcpy( (lmsg_t *) &q->pkt[i], m, sizeof( lmsg_t ) );
      q->dst_cnt[q->pkt[i].dst_addr-1]++;
      q->loaded_cnt++;
      q_loaded = TRUE;

      #ifdef TRACE_LOAD_Q
      printf( "LD Q: Idx: %-3d  Type: %-2x  Src: %-2d Dst: %-2d Seq: %-4d\n", i, q->pkt[i].type, 
              q->pkt[i].src_addr, q->pkt[i].dst_addr, q->pkt[i].seq );
      printfflush( );
      #endif
    }

    return( q_loaded );                 // return TRUE if Q was loaded, FALSE if Q wasn't loaded
  }


  /******************** END OF Q primitives functions ************************/ 



  /********************** Start OF Process functions *************************/


  /*
   * Function :     processQuery_cmd
   * 
   * Description :  
   *
   */

  void processQuery_cmd( msg_q_t *q, lmsg_t *m ) {
    lmsg_t  *lmsg;

    lmsg = (lmsg_t *) call qRspSnd.getPayload( &gQrsp_msg, sizeof( lmsg_t ) );

    lmsg->type = QUERY_Q_RSP;           // set type to the query Q response
    lmsg->src_addr = gState.id;         // set the source address to this motes ID
    lmsg->dst_addr = m->src_addr;       // set the destination address to the sender of the command
    lmsg->seq = q->size;                // put the current size of the Q into the sequency # field

    if (call qRspSnd.send( lmsg->dst_addr, &gQrsp_msg, sizeof( lmsg_t ) ) == SUCCESS) {
      gQrsp_snd_busy = TRUE;
      call Leds.led1On( );
    }

    else {
      sendFail( lmsg );
    }
  } 


  /*
   * Function :     processQuery_response
   * 
   * Description :  
   */

  task void processQuery_response( ) {
    int     i = 0;
    int     n = 0;
    lmsg_t  *lmsg;
    int     cnt = 0;

    gState.q_size[rmsg.src_addr-1] = rmsg.seq;
  
    if (abs( rmsg.seq - gQ.size ) < M) {

      // if the difference between the Qs is greater than some threshold M
      // then send all packets destined for that source

      while (i < Q_LEN) {
      
	if ((gQ.load_ts[i]) &&
	    ((gQ.pkt[i].dst_addr == rmsg.src_addr) ||
	    (n < (M / 2))))  {
        
	  lmsg = (lmsg_t *) call qPktSnd.getPayload( &gQpkt_msg, sizeof( lmsg_t ) );
	  memcpy( lmsg, (lmsg_t *) &gQ.pkt[i], sizeof( lmsg_t ) );

	  if (gQ.pkt[i].dst_addr != rmsg.src_addr) n++;

	  if (gNew_period) gNew_period = FALSE;

	  while ((gQpkt_snd_busy) & (!gNew_period)) {
	    cnt++;

	    if (cnt > 20000) break;
	  }
	
	  if (call qPktSnd.send( rmsg.src_addr, &gQpkt_msg, sizeof( lmsg_t ) ) == SUCCESS) {
	    gQpkt_snd_busy = TRUE;
	    call Leds.led1On( );

	    gQ.dst_cnt[lmsg->dst_addr-1]--;
	    gQ.size--;                    // decrement the Q size
	    gQ.removed_cnt++;
	    gQ.load_ts[i] = 0;            // pulling

	    gState.tx_dst_cnt[lmsg->dst_addr-1]++;

	    /*
printf( "SEND: Type:%-2x To:%-2d Src: %-2d Dst: %-2d Seq: %-4d\n",
        lmsg->type, rmsg.src_addr, lmsg->src_addr, lmsg->dst_addr, lmsg->seq );
	printfflush( );*/

	  }

	   else {
	     report_problem( );
	     sendFail( lmsg  );
	  }
	}

	i++;
      }
    }
  }


  /*
   * Function :     processPacket
   * 
   * Description :  
   */

  task void processPacket( ) {

    gState.rcv_dst_cnt[rmsg.dst_addr-1]++;

    if (rmsg.dst_addr == gState.id) {      // the packet was destined for this mote, process (delete) it
    }

    else {

      if (!loadQ( &gQ, &rmsg )) {
	gState.q_full_err++;
      }
    }
  }

  /********************** END OF Process functions ***************************/


  /*
   * Function :     Boot.booted
   *
   * Description :  
   */

  event void Boot.booted() {
    int i;

    gState.id = call ActiveMessageAddress.amAddress( );
    gState.group = call ActiveMessageAddress.amGroup( );

    initQ( &gQ );

    // March 31st  MFS  Currently, the random seed doesn't appear to be working

    call Seed.init( gState.id );

    gState.period = (call Random.rand16( ) % DUTY_CYCLE_RANGE) + MIN_PERIOD;
    gState.query_period = gState.period / 10;
    gState.not_duty_cycle = (call Random.rand16( ) % DUTY_CYCLE_INT);
    gState.pkt_rate = (call Random.rand16( ) % PKT_RATE_RANGE) + MIN_PKT_RATE; 
    gState.period_cnt = 0;
    gState.x_cnt = 0;

    gState.tTimer_cnt = 0;
    gState.qTimer_cnt = 0;
    gState.pktTimer_cnt = 0;
    gState.lclTimer_cnt = 0;
    gState.send_cnt = 0;
    gState.q_cmd_rcv_cnt = 0;
    gState.q_rsp_rcv_cnt = 0;
    gState.pkt_rcv_cnt = 0;
    gState.dflt_rcv_cnt = 0;
    gState.rcv_cnt = 0;

    for (i=0; i<N_NODES; i++) {
      gState.rcv_dst_cnt[i] = 0;
      gState.tx_dst_cnt[i] = 0;
    }

    gState.send_busy_err = 0;
    gState.send_fail_err = 0;
    gState.q_full_err = 0;

    if (call RadioControl.start() != SUCCESS) {
      report_problem();
    }

    call LclTime.startPeriodic( LCL_TIMER_PERIOD );

    printf( "Node %d has booted. Period: %d. ON period: %d Period Cnt: %d Pkt Rate: %d\n", 
             gState.id, gState.period, gState.not_duty_cycle, gState.period_cnt, gState.pkt_rate );
    printfflush( );
  }


  /*
   * Function :     RadioControl.startDone
   *
   * Description :  
   */
  
  event void RadioControl.startDone( error_t error ) {

    if (error == SUCCESS) {
      printf( "Node %d Radio started. Starting period timer with period of %d\n", gState.id, gState.period );
      call PeriodTimer.startPeriodic( gState.period );
    }
  }

  

  /*
   * Function :     RadioControl.stopDone
   *
   * Description :  
   */
  
  event void RadioControl.stopDone( error_t error ) {
  }



  /*
   * Function :     Receive.receive
   *
   * Description :  
   */

  event message_t* Receive.receive(message_t *msg, void *payload, uint8_t len) {
    lmsg_t *lmsg = (lmsg_t *) payload; 
    //    lmsg_t *lmsg = (lmsg_t *) call Packet.getPayload;
 
    gState.rcv_cnt++;

    if (len != sizeof( lmsg_t )) {
      report_problem( );
      return msg;
    }

    if (gRcv_busy) {
      printf( "error: in rcv but Rcv is %d\n", gRcv_busy );
      printfflush( );
      return( msg );
    }

    gState.rx_bytes += sizeof( message_t ) + len;

    gRcv_busy = TRUE;

    call Leds.led2On( );
    memcpy( &rmsg, (lmsg_t *) payload, sizeof( lmsg_t ) );
    call Packet.clear( msg );

    switch (rmsg.type) {               // check the message type

    case QUERY_Q_CMD:                   // send a response message to the src addr node
      gState.q_cmd_rcv_cnt++;
      processQuery_cmd( &gQ, &rmsg );
      break;

    case QUERY_Q_RSP:                   // process the buffer Q size
      gState.q_rsp_rcv_cnt++;
      post processQuery_response( );
      break;

    case PACKET_MSG:
      gState.pkt_rcv_cnt++;

    #ifdef TRACE_RCV_PKT
    printf( "RCVD: Type: %-2x / %-2x Src: %-1d / %-1d Dst: %-1d / %-1d Seq: %-4d / %-4d\n",
	    rmsg.type, lmsg->type,  rmsg.src_addr, lmsg->src_addr, 
            rmsg.dst_addr, lmsg->dst_addr, rmsg.seq, lmsg->seq );
    printfflush( );
    #endif

      post processPacket( );       // process the received packet
      break;

    default:
      gState.dflt_rcv_cnt++;
      break;
    }

    gRcv_busy = FALSE;    
    call Leds.led2Off( );
   
    return( msg );
  }

  
  /*
   * Function :    PeriodTimer.fired
   * 
   * Description:  The period timer goes off every time T.  There are 4 intervals of time T in
   *               a complete period, 3 of which the mote is capable of transmitting and 
   *               receiving.  The fourth, the mote is sleeping.  The sleep interval can
   *               be either interval, 1, 2, 3, or 4 and randomly rotates each complete
   *               period. When the mote is on, the query timer is ON and the packet timer
   *               is ON.
   */

  event void PeriodTimer.fired( ) { 
    call QTimer.stop( );                // ensure that both timers are stopped at start of each interval
    call PktTimer.stop( );

    gState.tTimer_cnt++;
    gNew_period = TRUE;

    if (gState.period_cnt != gState.not_duty_cycle) {

      // This is one of the ON intervals, start the query and packet timers

      if (gState.query_period) call QTimer.startPeriodic( gState.query_period );
      if (gState.pkt_rate) call PktTimer.startPeriodic( gState.pkt_rate );
    }

    gState.period_cnt++;

    if (gState.period_cnt >= DUTY_CYCLE_INT) {
      gState.not_duty_cycle = (call Random.rand16( ) % DUTY_CYCLE_INT);
      gState.period_cnt = 0;
      gState.x_cnt++;

      if (gState.x_cnt >= MAX_X) {
	gState.pkt_rate = 0;
      }
    }
  }
  

  /*
   * Function :     QTimer.fired
   *
   * Description :  
   */
  
  event void QTimer.fired( ) {
    lmsg_t *lmsg;

    lmsg = (lmsg_t *) call qCmdSnd.getPayload( &gQcmd_msg, sizeof( lmsg_t ) );

    lmsg->type = QUERY_Q_CMD;           // set type to the query Q command
    lmsg->src_addr = gState.id;         // set the source address to this motes ID
    lmsg->dst_addr = 0;                 // 0 should be reserved for BROADCAST ADDRESS
 
    gState.qTimer_cnt++;

    if (call qCmdSnd.send( AM_BROADCAST_ADDR, &gQcmd_msg, sizeof( lmsg_t ) ) == SUCCESS) {
      gQcmd_snd_busy = TRUE;
      call Leds.led1On( );
    }

    else {
      sendFail( lmsg );
    }
  }


  /*
   * Function :    PktTimer.fired
   *
   * Description :  
   */

  event void PktTimer.fired( ) {
    lmsg_t  msg;
    uint8_t tmp = gState.id;

    msg.type = PACKET_MSG;              // set type to the query Q command
    msg.src_addr = gState.id;           // set the source address to this motes ID

    while (tmp == gState.id) {

      // call until the node id (destination address) is not this node

      tmp = (call Random.rand16( ) % N_NODES) + 1; // 0 should be reserved for BROADCAST ADDRESS
    }

    msg.dst_addr = tmp;
    msg.seq = gQ.seq[tmp-1]++;
   
    if (!loadQ( &gQ, &msg )) {}
      
    gState.pktTimer_cnt++;
  }


  /*
   * Function :    LclTimer.fired
   *
   * Description :  
   */

  event void LclTime.fired( ) {
    int i;

    gState.lclTimer_cnt++;

    printf( "ID:%-3d |Ti:%4d |To:%4d |Xi:%4d |Xm:%4d |Tp:%4d |Pp:%4d |Qp:%4d |\n", 
            gState.id, gState.period_cnt, gState.not_duty_cycle, gState.x_cnt, MAX_X,
            gState.period, gState.pkt_rate, gState.query_period );

    printf( "TmrCnt |Tc:%4d |Pc:%4d |Qc:%4d |\n", gState.tTimer_cnt, gState.pktTimer_cnt, gState.qTimer_cnt );

    printf( "Rx Typ |Rt:%4d |Rx:%4d |Qq:%4d |Qr:%4d |Qp:%4d |Df:%4d |\n", gState.rx_bytes/(LCL_TIMER_PERIOD/1000), 
            gState.rcv_cnt, gState.q_cmd_rcv_cnt, gState.q_rsp_rcv_cnt, gState.pkt_rcv_cnt, gState.dflt_rcv_cnt );

    gState.rx_bytes = 0;

    printf( "Rx Dst" );

    for (i=0; i<N_NODES; i++) {
      printf( " |Q%1d:%4d", i+1, gState.rcv_dst_cnt[i] );
    }

    printf( " |\n" );

    printf( "Tx Dst" );

    for (i=0; i<N_NODES; i++) {
      printf( " |Q%1d:%4d", i+1, gState.tx_dst_cnt[i] );
    }

    printf( " |\n" );

    printf( "Q Size" );
    gState.q_size[gState.id-1] = gQ.size; // load our Q size into the Q size array

    for (i=0; i<N_NODES; i++) {
      printf( " |Q%1d:%4d", i+1, gState.q_size[i] );
    }

    printf( " |Ld:%4d |Rm:%4d |\n", gQ.loaded_cnt, gQ.removed_cnt );

    printf( "Q  Dst" );
      
    for (i=0; i<N_NODES; i++) {
      printf( " |Q%1d:%4d", i+1, gQ.dst_cnt[i] );
    }

    printf( " |\n" );

    printf( "QSeqID" );

    for (i=0; i<N_NODES; i++) {
      printf( " |Q%1d:%4d", i+1, gQ.seq[i] );
    }

    printf( " |\n" );
    printf( "ERRORs |Tx:%4d |\n", gState.send_fail_err );
    gState.lclTimer_cnt = 0;
    printfflush( );
  }


  /*
   * Function :    AMSend.sendDone
   *
   * Description :  
   */
    
  event void qCmdSnd.sendDone(message_t* msg, error_t error) {
    gQcmd_snd_busy = FALSE;           // the mote is no longer send busy, send is completed
    
    if (error == SUCCESS) {
      //      report_sent();
      call Leds.led1Off( );
    }

    else {
      report_problem();
    }
  }


  /*
   * Function :    AMSend.sendDone
   *
   * Description :  
   */
    
  event void qRspSnd.sendDone(message_t* msg, error_t error) {
    gQrsp_snd_busy = FALSE;           // the mote is no longer send busy, send is completed
    
    if (error == SUCCESS) {
      //      report_sent();
      call Leds.led1Off( );
    }

    else {
      report_problem();
    }
  }


  /*
   * Function :    AMSend.sendDone
   *
   * Description :  
   */
    
  event void qPktSnd.sendDone(message_t* msg, error_t error) {
    gQpkt_snd_busy = FALSE;           // the mote is no longer send busy, send is completed
    
    if (error == SUCCESS) {
      //      report_sent();
      call Leds.led1Off( );
    }

    else {
      report_problem();
    }
  }


  async event void ActiveMessageAddress.changed( ) {
  }

}

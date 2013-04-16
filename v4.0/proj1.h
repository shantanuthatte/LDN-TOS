/*
 * Authors   :   Michael Stewart, Shabana Sangli & Shantanu Thatte
 * Date      :   February 9, 2013
 */


#ifndef PROJ1_H
#define PROJ1_H

#ifndef CC1K_DEF_PRESET
#define CC1K_DEF_PRESET (CC1K_915_998_MHZ)
#endif

#include "AM.h"

enum {
  N_NODES = 5,               // the number of nodes in our WSN for project 1
  MAX_X = 100,
  N_SEND_WAIT = 1,         // wait for the send busy to clear 2000 times before giving up
  M = 10,                    // the Q difference threshold
  DUTY_CYCLE_RANGE = 5000,   // the range of the duty cycle peroids (msecs)  between motes
  MIN_PERIOD = 3000,         // the minimum duty cycle time period in milliseconds
  DUTY_CYCLE_INT = 4,        // the duty cycle interval, the number of duty cycle periods
                             // in a complete duty cycle interval
  DUTY_CYCLE = 3,            // the duty cycle, each node is ON for this many 
                             // duty cycle periods before being turned OFF for
                             // (DUTY_CYCLE_INT - DUTY_CYCLE) periods.
  PKT_RATE_RANGE = 300,      // The range of packet generation per period
  MIN_PKT_RATE = 33,         // The minimum packet generation rate per period
  QUERY_INT = 100,           // query time interval, the time between neighboring node
                             // buffer size during the duty cycle
  LCL_TIMER_PERIOD=3000,
  //  Q_THRESHOLD = 10,          // queue threshold number indicating when and how many 
                             // packets to transmit to a neighboring node (Nj) such that
                             // |Q(i) - Q(j)| < M for all Pj and M/2 for all P!=j
  //  PKT_GEN_INT = 10,          // packet generation interval, the number of duty cycle
                             // intervals during which packets are generated.  The total
                             // amount of time spent generating packets is equal to:
                             // (DUTY_CYCLE_INT * DUTY_CYCLE_PERIOD * PKT_GEN_INT)
  //  L_MSG_BUFFSIZE = 1,        // the number of bytes allowed on the message buffer
  Q_LEN = 156,              // the length of the 
  AM_PROJ_1 = 0x20,          // unique identifier for AMSend and Receive packet communication

  // following are command message types that are sent with all messages back and forth to motes
  // that indicate to the receiving motes what the message is and what the mote should do as
  // a response to receiving the message.  There can be a maximum of 256 message types.

  QUERY_Q_CMD = 0x10,        // indicates to the receiving mote to respond to the snd_addr with
                             // its buffer size (number of packets in its buffer Q)
  QUERY_Q_RSP = 0x7F,        // this is the response to the QUERY_Q_CMD which contains the size
                             // of the buffer Q
  PACKET_MSG = 0x20,         // indicates that the payload data contains a simple packet. The 
                             // packet may or may not be destined for the receiving mote.  Check
                             // the dst_adddr field in the lmsg_t (the payload data).
};


typedef nx_struct {
  nx_uint16_t   period;      // Samping period.  Different for each mote
  nx_uint16_t   query_period;//
  nx_uint8_t    pkt_rate;    // The rate at which packets are generated.  Diff for each mote
  
  nx_am_addr_t  id;          // Mote id of sending mote.
  nx_am_group_t group;       // Mote group id
  nx_uint8_t    not_duty_cycle;  // The period when the mote is OFF.  Different for each mote
 
  nx_uint16_t   period_cnt  ;// The number of periods that have occured.
  nx_uint16_t   x_cnt;       //
  nx_uint16_t   tTimer_cnt;  // the number of times the Period (T) timer has fired
  nx_uint16_t   qTimer_cnt;  // the number of times the Q timer has fired
  nx_uint16_t   pktTimer_cnt;// the number of times the Pkt timer has fired
  nx_uint16_t   lclTimer_cnt;// the number of times the Local timer has fired
  nx_uint16_t   send_cnt;    // the number of successful sends (a successful receive not necessary)
  nx_uint16_t   q_cmd_rcv_cnt;
  nx_uint16_t   q_rsp_rcv_cnt;
  nx_uint16_t   pkt_rcv_cnt;
  nx_uint16_t   dflt_rcv_cnt;
  nx_uint16_t   rcv_cnt;
  nx_uint16_t   rx_bytes;
  nx_uint16_t   tx_bytes;
  nx_uint16_t   rcv_dst_cnt[N_NODES];
  nx_uint16_t   tx_dst_cnt[N_NODES];
  nx_uint16_t   send_busy_err; // tried to send while waiting on the previous send to complete
  nx_uint16_t   send_fail_err; // the send didn't return with a SUCCESS
  nx_uint16_t   q_full_err;  // the number of times the Q was full upon loading
  nx_uint8_t    send_busy;   // indicates if the mote is in the process of sending a message
  nx_uint8_t    rcv_busy;
  nx_uint8_t    q_size[N_NODES];
} state_t;


typedef nx_struct {
  nx_uint8_t    type;        // the local message type
  nx_am_addr_t  src_addr;    // the address of the source mote, creator of the packet
  nx_am_addr_t  dst_addr;    // the address of the destination mote
  nx_uint16_t   seq;// a sequence packet counter for testing purposes
} lmsg_t;




typedef nx_struct {
  nx_uint8_t    dst_cnt[N_NODES];  // a count of the packets based on destination
  nx_uint16_t   size;              // the current size of the Q
  nx_uint16_t   loaded_cnt;
  nx_uint16_t   removed_cnt;
  nx_uint16_t   seq[N_NODES];      // current sequency number for each destination node
  nx_uint16_t   load_ts[Q_LEN];    // the time that the msg at index i was loaded into the Q
                                   // their is not a message in the Q at this index
  lmsg_t        pkt[Q_LEN];
} msg_q_t;



  

#endif

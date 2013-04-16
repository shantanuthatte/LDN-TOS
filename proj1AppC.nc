/*
 * 
 */


configuration proj1AppC { }

implementation {
  
  components proj1C, MainC, ActiveMessageC, RandomMlcgC, RandomC, LedsC;
  components ActiveMessageAddressC;
  components new TimerMilliC() as LclTime;
  components new TimerMilliC() as PeriodTimer;
  components new TimerMilliC() as QTimer;
  components new TimerMilliC() as PktTimer;
  //  components new DemoSensorC() as Sensor;
  components new AMSenderC( AM_PROJ_1 );
  components new AMReceiverC( AM_PROJ_1 );

  proj1C.Boot -> MainC;
  proj1C.RadioControl -> ActiveMessageC;
  proj1C.Packet -> AMSenderC;
  proj1C.AMPacket -> AMSenderC;
  proj1C.AMSend -> AMSenderC;
  proj1C.Receive -> AMReceiverC;
  proj1C.LclTime -> LclTime;
  proj1C.PeriodTimer -> PeriodTimer;
  proj1C.QTimer -> QTimer;
  proj1C.PktTimer -> PktTimer;
  //  proj1C.Read -> Sensor;
  proj1C.Leds -> LedsC;
  proj1C.ActiveMessageAddress -> ActiveMessageAddressC;
  proj1C.Seed -> RandomMlcgC.SeedInit;
  proj1C.Random -> RandomC; 
}

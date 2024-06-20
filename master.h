#include "canfestival.h"
#include "data.h"
#include <unistd.h>
 #include <stdio.h>
 #include <stdint.h>
#include <QMutex>
 
 INTEGER8 InitCANdevice( char* bus, UNS32 baudrate, UNS8 node );
 
 void MasterNode_heartbeatError(CO_Data* d, UNS8);
 
 UNS8 MasterNode_canSend(Message *);
 
 void MasterNode_initialisation(CO_Data* d);
 void MasterNode_preOperational(CO_Data* d);
 void MasterNode_operational(CO_Data* d);
 void MasterNode_stopped(CO_Data* d);
 
 void MasterNode_post_sync(CO_Data* d);
 void MasterNode_post_TPDO(CO_Data* d);
 void MasterNode_storeODSubIndex(CO_Data* d, UNS16 wIndex, UNS8 bSubindex);
 void MasterNode_post_emcy(CO_Data* d, UNS8 nodeID, UNS16 errCode, UNS8 errReg);

 void canopen_send_sdo(uint16_t message_sdo[]);
 void ReadDeviceEntry(uint16_t message_sdo[]);

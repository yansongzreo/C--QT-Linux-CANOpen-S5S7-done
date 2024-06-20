 #include "canfestival_master.h"
   #include "master.h"
#include "mainwindow.h"
#include "sharedvariables.h"
   
   
   static UNS8 masterNodeID = 0;  
  
   void InitNode(CO_Data* d, UNS32 id)
   {
       /* Defining the node Id */
      setNodeId(&Master_Data, masterNodeID);
      /* CAN init */
      setState(&Master_Data, Initialisation);
  }
  
  void Exit(CO_Data* d, UNS32 id)
  {
      setState(&Master_Data, Stopped);
  }
  
 INTEGER8 InitCANdevice(char * bus, UNS32 baudrate, UNS8 node )
 { 
     char busName[2];
     char baudRate[7];
     s_BOARD board;
 
 
     sprintf(baudRate, "%uK", baudrate);
      board.busname = bus;
      board.baudrate = baudRate;
 
      masterNodeID = node;
  
      Master_Data.heartbeatError = MasterNode_heartbeatError;
      Master_Data.initialisation = MasterNode_initialisation;
     Master_Data.preOperational = MasterNode_preOperational;
      Master_Data.operational = MasterNode_operational;
      Master_Data.stopped = MasterNode_stopped;
      Master_Data.post_sync = MasterNode_post_sync;
     Master_Data.post_TPDO = MasterNode_post_TPDO;
      Master_Data.storeODSubIndex = MasterNode_storeODSubIndex;
      Master_Data.post_emcy = MasterNode_post_emcy;
      
      TimerInit();
      if(!canOpen(&board, &Master_Data))
       {
           printf("\n\aInitCANdevice() CAN bus %s opening error, baudrate=%s\n",board.busname, board.baudrate);
           return -1;
       }
    InitNode(&Master_Data,node);
    stopSYNC(&Master_Data);//stop sync stop pdosend stoppdo recv

 
     printf("\nInitCANdevice(), canOpen() OK, starting timer loop...\n");

     //InitNode(&Master_Data,node);
      /* Start timer thread */
    /* StartTimerLoop(&InitNode);
      
     pause();
     printf("\nFinishing.\n");

     StopTimerLoop(&Exit);*/
      return 0;
 }
  
 void MasterNode_heartbeatError(CO_Data* d, UNS8 heartbeatID)
 {
      printf("MasterNode_heartbeatError %d\n", heartbeatID);
 }
 
 void MasterNode_initialisation(CO_Data* d )
 {
     printf("MasterNode_initialisation\n");
 }
 

 void MasterNode_preOperational(CO_Data* d)
 {
     printf("MasterNode_preOperational\n");
 
     setState(d, Operational);
 }
 
 void MasterNode_operational(CO_Data* d)
 {
    printf("MasterNode_operational\n");
 }

void MasterNode_stopped(CO_Data* d)
 {
     printf("MasterNode_stopped\n");
 }

 void MasterNode_post_sync(CO_Data* d)
 {
     printf("MasterNode_post_sync\n");
 }
 
 void MasterNode_post_TPDO(CO_Data* d)
 {
     printf("MasterNode_post_TPDO\n");
 }

 void MasterNode_storeODSubIndex(CO_Data* d, UNS16 wIndex, UNS8 bSubindex)
 {
     /*TODO : 
      * - call getODEntry for index and subindex, 
     * - save content to file, database, flash, nvram, ...
      * 
      * To ease flash organisation, index of variable to store
     * can be established by scanning d->objdict[d->ObjdictSize]
      * for variables to store.
      * 
     * */
     printf("MasterNode_storeODSubIndex : %4.4x %2.2xh\n", wIndex,  bSubindex);
 }
 
void MasterNode_post_emcy(CO_Data* d, UNS8 nodeID, UNS16 errCode, UNS8 errReg)
{
     printf("Slave received EMCY message. Node: %2.2xh  ErrorCode: %4.4x  ErrorRegister: %2.2xh\n", nodeID, errCode, errReg);
 }

void CheckWriteSDO(CO_Data* d, UNS8 nodeid)
{
    UNS32 abortCode;

    if(getWriteResultNetworkDict(&Master_Data, nodeid, &abortCode) != SDO_FINISHED)
        printf("\nResult : Failed in getting information for slave %2.2x, AbortCode :%4.4x \n", nodeid, abortCode);
    else
        printf("\nSend data OK\n");

    /* Finalize last SDO transfer with this node */
    closeSDOtransfer(&Master_Data, nodeid, SDO_CLIENT);
}
void canopen_send_sdo(uint16_t message_sdo[])
{

    uint32_t abortCode=0;
    int8_t      nodeID=0;          /* ID       */
    uint16_t    index=0;           /* ????????????     */
    uint8_t     subIndex=0;        /* ??????????????????   */
    uint8_t     dataType=uint8;    /* ????бу????????б└???????? ??????????????????иибь??ии????иж??????????ии??????????uint8??буб└????????????иж????????бз */
    uint32_t    count;           /* ????бу??????иж?????????? */
    uint8_t     data[4] = {0,0,0,0};

    nodeID=(int8_t)(message_sdo[0]&0x7f);
    index=(uint16_t)((message_sdo[3]<<8)+message_sdo[2]);
    subIndex=(uint8_t)(message_sdo[4]);
    for(uint8_t i=0; i<4; i++)
    {
        //printf("%d\n", message_sdo[5+i]);
        data[0+i]=(uint8_t)(message_sdo[5+i] & 0xff);
    }
    //????бш????????????иж??????????ии????????????????????бу
    if  (0x2F ==message_sdo[1])
        count=1;
    else if (0x2B ==message_sdo[1])
        count=2;
    else if (0x27 ==message_sdo[1])
        count=3;
    else if (0x23 ==message_sdo[1])
        count=4;

    printf("##################################\n");
    printf("#### Write SDO                ####\n");
    printf("##################################\n");
    printf("NodeId   : %2.2x\n", nodeID);
    printf("Index    : %4.4x\n", index);
    printf("SubIndex : %2.2x\n", subIndex);
    printf("Size     : %2.2x\n", count);
    printf("Data     : %2.2x %2.2x %2.2x %2.2x\n", data[0],data[1],data[2],data[3]);
writeNetworkDictCallBack(&Master_Data, nodeID, index, subIndex, count, 0, &data, CheckWriteSDO, 0);
    //d; nodeId; index; subIndex; count; dataType; data[4]; useBlockMode;
    //writeNetworkDictCallBack(&Master_Data, nodeID, index, subIndex, count, dataType, &data, 0);
    //writeNetworkDict(&Master_Data, nodeID, index, subIndex, count, dataType, &data, 0);
    //delay_ms(10);   // 2023-03-19??бд??????
    /*usleep(10000);
    while(getWriteResultNetworkDict(&Master_Data, nodeID, &abortCode) == SDO_UPLOAD_IN_PROGRESS)
    {
    }*/
 }

extern void readSDO(UNS32 data);

/* Callback function that check the read SDO demand */
void CheckReadSDO(CO_Data* d, UNS8 nodeid)
{
    UNS32 abortCode;
    UNS32 data=0;
    UNS32 size=64;

    if(getReadResultNetworkDict(&Master_Data, nodeid, &data, &size, &abortCode) != SDO_FINISHED)
	{printf("\nResult : Failed in getting information for slave %2.2x, AbortCode :%4.4x \n", nodeid, abortCode);
     readValue = -1;
	}
	else
    {
        printf("\nResult : %x\n", data);
        readSDO(data);     //?????????data??mainwindow???
    }
    /* Finalize last SDO transfer with this node */
    closeSDOtransfer(&Master_Data, nodeid, SDO_CLIENT);
}



/* Read a slave node object dictionary entry */
void ReadDeviceEntry(uint16_t message_sdo[])
{
    int ret=0;
    int nodeid;
    int index;
    int subindex;
    int datatype = 0;

    //printf("        ex : rsdo#42,1018,01\n");
    //ret = sscanf(sdo, "rsdo#%2x,%4x,%2x", &nodeid, &index, &subindex);
    nodeid=(int8_t)(message_sdo[0]&0x7f);
    index=(uint16_t)((message_sdo[3]<<8)+message_sdo[2]);
    //
    subindex=(uint8_t)(message_sdo[4]);


    printf("##################################\n");
    printf("#### Read SDO                 ####\n");
    printf("##################################\n");
    printf("NodeId   : %2.2x\n", nodeid);
    printf("Index    : %4.4x\n", index);
    printf("SubIndex : %2.2x\n", subindex);

    readNetworkDictCallback(&Master_Data, nodeid,index, subindex, datatype, CheckReadSDO, 0);

}

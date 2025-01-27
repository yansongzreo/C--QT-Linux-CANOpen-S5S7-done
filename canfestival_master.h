/* File generated by gen_cfile.py. Should not be modified. */

#ifndef __canfestival_master_H
#define __canfestival_master_H

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 Master_valueRangeTest (UNS8 typeValue, void * value);
const indextable * Master_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);

/* Master node data struct */
extern CO_Data Master_Data;
extern UNS16 Controlword;		/* Mapped at index 0x6040, subindex 0x00*/
extern UNS16 Statusword;		/* Mapped at index 0x6041, subindex 0x00*/
extern INTEGER8 Modes_of_operation;		/* Mapped at index 0x6060, subindex 0x00*/
extern INTEGER8 Modes_of_operation_display;		/* Mapped at index 0x6061, subindex 0x00*/
extern INTEGER32 Position_actual_value;		/* Mapped at index 0x6064, subindex 0x00*/
extern INTEGER32 Velocity_actual_value;		/* Mapped at index 0x606C, subindex 0x00*/
extern INTEGER32 Target_position;		/* Mapped at index 0x607A, subindex 0x00*/
extern UNS32 Profile_velocity;		/* Mapped at index 0x6081, subindex 0x00*/
extern UNS32 Profile_acceleration;		/* Mapped at index 0x6083, subindex 0x00*/
extern INTEGER32 Target_velocity;		/* Mapped at index 0x60FF, subindex 0x00*/

#endif // MASTER_H







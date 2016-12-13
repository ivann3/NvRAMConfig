/**
 * @Author: arvelm 
 *
 * @Data: 2016-11-16
 *
 * @Details: Refer to "Customization in NvRAM .pdf"
 *
 * Add the header file which describes the defination of its record:
 * "data structure", "record size", "record numbers"
 */

#ifndef _CFG_CUSTOM_BATTERY_FILE_H
#define _CFG_CUSTOM_BATTERY_FILE_H

typedef struct
{
	unsigned char info[2];
}File_CUSTOM_BATTERY_Struct;

#define CFG_FILE_CUSTOM_BATTERY_REC_SIZE    sizeof(File_CUSTOM_BATTERY_Struct)
#define CFG_FILE_CUSTOM_BATTERY_REC_TOTAL   1

#endif

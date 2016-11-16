#ifndef _CFG_BURNIN_FILE_H
#define _CFG_BURNIN_FILE_H

typedef struct
{
	unsigned int Array[1];
}File_Burnin_Struct;

#define CFG_FILE_BURNIN_REC_SIZE    sizeof(File_Burnin_Struct)
#define CFG_FILE_BURNIN_REC_TOTAL   1

#endif

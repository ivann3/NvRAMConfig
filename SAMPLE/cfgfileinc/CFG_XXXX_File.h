#ifndef _CFG_XXXX_FILE_H
#define _CFG_XXXX_FILE_H

typedef struct
{
	//这里定义存储结构体的类型File_XXXX_Struct XXXX  名字自取，比如我要存入一个MMI测试标准位，用一个int表示
	unsigned int Array[1];
}File_XXXX_Struct;

#define CFG_FILE_XXXX_REC_SIZE    sizeof(File_XXXX_Struct) //这里得到每个File_XXXX_Struct的大小
#define CFG_FILE_XXXX_REC_TOTAL   1//这里应该是指的只需要1个这样的机构体

#endif

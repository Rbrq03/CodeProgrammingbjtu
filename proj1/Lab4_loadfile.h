#ifndef _LAB4_LOADFILE_H_
#define _LAB4_LOADFILE_H_
#include"Lab4_data.h"

int **StoreDataWithArray(int &record_num);
void StoreDataWithPointerArray(int &record_num, int *pointerArray[]);
DATAITEM *StoreDataWithStruct(int &record_num);
TripleNode *StoreDataWithLinkList(int &record_num);

#endif
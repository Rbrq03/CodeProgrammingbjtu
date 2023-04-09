#ifndef _LAB4_VIEW_H_
#define _LAB4_VIEW_H_

#include"Lab4_data.h"

void DisplayArray(int record_num, int **array);
void DisplayStruct(int record_num, DATAITEM *array);
void DisplayPointerArray(int record_num, int *array[]);
void DisplayLinkList(int record_num, TripleNode *linklist);

#endif
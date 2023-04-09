#ifndef _LAB4_SORT_H_
#define _LAB4_SORT_H_

#include"Lab4_data.h"

void sortArray(int **Array, int record_num);
void sortStructArray(DATAITEM *structArray, int record_num);
void sortPointerArray(int *pointerArray[], int record_num);
void sortLinkList(TripleNode *linkList, int record_num);
void sortLinkList1(TripleNode *linkList, int recoed_num);

#endif
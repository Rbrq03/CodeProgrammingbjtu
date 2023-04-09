#include"Lab4_view.h"
#include<stdio.h>
#include<stdlib.h>

void DisplayArray(int record_num, int **array)
{
    printf("%d\n", record_num);
    for(int i = 0; i < record_num; i++)
    {
        printf("%d %d %d\n", array[i][0], array[i][1], array[i][2]);
    }
    return ;
}


void DisplayStruct(int record_num, DATAITEM *array)
{
    printf("%d\n", record_num);
    for(int i = 0; i < record_num; i++)
    {
        printf("%d %d %d\n", array[i].item1, array[i].item2, array[i].item3);
    }
    return ;
}


void DisplayPointerArray(int record_num, int *array[])
{
    printf("%d\n", record_num);
    for(int i = 0; i < record_num; i++)
    {
        printf("%d %d %d\n", array[i][0], array[i][1], array[i][2]);
    }
    return ;
}


void DisplayLinkList(int record_num, TripleNode *linklist)
{
    printf("%d\n", record_num);
    linklist = linklist->nextTripleNode;
    for(int i = 0; i < record_num; i++)
    {
        printf("%d %d %d\n", linklist->data1, linklist->data2, linklist->data3);
        linklist = linklist->nextTripleNode;
    }
    return ;
}
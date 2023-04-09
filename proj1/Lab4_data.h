#ifndef _LAB4_DATA_H_
#define _LAB4_DATA_H_

#define MAX_ARRAY_LEN 500000

typedef struct CONF
{
    int mode;
}CONF;

typedef struct DATAITEM
{
    int item1, item2, item3;
}DATAITEM;

typedef struct TripleNode
{
    int data1, data2, data3;
    TripleNode *nextTripleNode;
}TripleNode;


#endif
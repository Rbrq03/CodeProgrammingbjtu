#include"Lab4_sort.h"
#include<stdlib.h>
#define inf 1000000

int cmpArray(const void *a, const void *b)
{
    int *aTriple = *(int **)a;
    int *bTriple = *(int **)b;

    return aTriple[2] - bTriple[2];
}

void sortArray(int **Array, int record_num)
{
    qsort(Array, record_num, sizeof(int *), cmpArray);
    return ;
}


int cmpStruct(const void *a, const void *b)
{
    return ((DATAITEM *)a)->item3 - ((DATAITEM *)b)->item3;
}


void sortStructArray(DATAITEM *structArray, int record_num)
{
    qsort(structArray, record_num, sizeof(DATAITEM), cmpStruct);
    return;
}


int cmpPointerArray(const void *a, const void *b)
{
    int *aTriple = *(int **)a;
    int *bTriple = *(int **)b;

    return aTriple[2] - bTriple[2];   
}


void sortPointerArray(int *pointerArray[], int record_num)
{
    qsort(pointerArray, record_num, sizeof(int *), cmpPointerArray);
    return;
}


void sortLinkList(TripleNode *linkList, int record_num)
{
    for(int i = 0; i < record_num; i++)
    {
        int min = inf;
        TripleNode *q = linkList;
        for(int j = 0; j <= record_num - i ; j++)
        {
            if(q->nextTripleNode->data3 < min)
            {
                TripleNode *p = q->nextTripleNode;
                min = p->data3;
                
                q->nextTripleNode = p->nextTripleNode;
                p->nextTripleNode = linkList->nextTripleNode;
                linkList->nextTripleNode = p;
            }
            else
                q = q->nextTripleNode;
        }

        linkList = linkList->nextTripleNode;
    }
}


void sortLinkList1(TripleNode *linkLits, int record_num)
{
    TripleNode *q, *temp;
    for(int i = 0; i < record_num - 1; i++)
    {
        
        if(linkLits->nextTripleNode->data3 < linkLits->data3)
        {
            temp = linkLits;
            linkLits = linkLits->nextTripleNode;
            linkLits->nextTripleNode = temp;
        }

        q = linkLits->nextTripleNode;

        for(int j = 1; j < record_num - 1; j++)
        {
            if(q->nextTripleNode->data3 < q->data3)
            {
                temp = q;
                q = q->nextTripleNode;
                q->nextTripleNode = temp;
            }
            
            q = q->nextTripleNode;
        }
    }
        
}
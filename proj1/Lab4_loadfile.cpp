#include"Lab4_loadfile.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int **StoreDataWithArray(int &record_num)
{
    char *fileSavePath = (char *)malloc(sizeof(char) * 1000);
    char *fileName = (char *)malloc(sizeof(char) * 1000);

    FILE *fp = fopen("../lab3/conf.ini", "r");
    fscanf(fp, "%s\n%s", fileSavePath, fileName);
    strcat(fileSavePath, fileName);
    fclose(fp);

    fp = fopen(fileSavePath, "r");
    fscanf(fp, "%d", &record_num);

    int **result = (int **)malloc(sizeof(int *) * record_num);
    for(int i = 0; i < record_num; i++)
    {
        result[i] = (int *)malloc(sizeof(int) * 3);
        fscanf(fp, "%d %d %d", &result[i][0], &result[i][1], &result[i][2]);
    }

    return result;

}


void StoreDataWithPointerArray(int &record_num, int *pointerArray[])
{
    char *fileSavePath = (char *)malloc(sizeof(char) * 1000);
    char *fileName = (char *)malloc(sizeof(char) * 1000);

    FILE *fp = fopen("../lab3/conf.ini", "r");
    fscanf(fp, "%s\n%s", fileSavePath, fileName);
    strcat(fileSavePath, fileName);
    fclose(fp);

    fp = fopen(fileSavePath, "r");
    fscanf(fp, "%d", &record_num);

    for(int i = 0; i < record_num; i++)
    {
        pointerArray[i] = (int *)malloc(sizeof(int) * 3);
        fscanf(fp, "%d %d %d", &pointerArray[i][0], &pointerArray[i][1], &pointerArray[i][2]);
    }

    return ;
}


DATAITEM *StoreDataWithStruct(int &record_num)
{
    char *fileSavePath = (char *)malloc(sizeof(char) * 1000);
    char *fileName = (char *)malloc(sizeof(char) * 1000);

    FILE *fp = fopen("../lab3/conf.ini", "r");
    fscanf(fp, "%s\n%s", fileSavePath, fileName);
    strcat(fileSavePath, fileName);
    fclose(fp);

    fp = fopen(fileSavePath, "r");
    fscanf(fp, "%d", &record_num);

    DATAITEM *result = (DATAITEM *)malloc(sizeof(DATAITEM) * record_num);
    for(int i = 0; i < record_num; i++)
    {
        fscanf(fp, "%d %d %d", &result[i].item1, &result[i].item2, &result[i].item3);
    }

    return result;
}


TripleNode *StoreDataWithLinkList(int &record_num)
{
    char *fileSavePath = (char *)malloc(sizeof(char) * 1000);
    char *fileName = (char *)malloc(sizeof(char) * 1000);

    FILE *fp = fopen("../lab3/conf.ini", "r");
    fscanf(fp, "%s\n%s", fileSavePath, fileName);
    strcat(fileSavePath, fileName);
    fclose(fp);

    fp = fopen(fileSavePath, "r");
    fscanf(fp, "%d", &record_num);

    TripleNode *head = (TripleNode *)malloc(sizeof(TripleNode));
    head->nextTripleNode = NULL;
    TripleNode *q = head;

    for(int i = 0 ; i < record_num; i++)
    {
        TripleNode *p = (TripleNode *)malloc(sizeof(TripleNode));
        fscanf(fp, "%d %d %d", &p->data1, &p->data2, &p->data3);
        q->nextTripleNode = p;
        p->nextTripleNode = NULL;
        q = p;
    }

    return head;
}
/****************************************************\
������Ϣ��
 ������������
��Ȩ������
 ��Ȩ�ɳ�����Ʒ���ѵ��ĳС������
ģ������:
 ������3
ժҪ:
 ʵ��5��ҵ�е�Task3���
����˵��:
 ����������1��������2�ĳ���ͨ���˵�ʹ��
ģ����ʷ:
 2022.09.28�������洴��
 2022.10.03���������޸�
**********************************************************/
#include "task3_fun.h"
#include<iostream>
#include <ctime>
extern int n, i;
/********
*�������ƣ�main
*�������ܣ�ʵ��������1��������2������
*���������int argc,char *argv[]
*����ֵ����
*�汾��Ϣ������������2022.09.28����
********/
int main(int argc, char *argv[]) {
    i = 0;
    char p[MAX];
    char path1[MAX] = {0}, path2[MAX] = {0};
    time_t StartTime, EndTime,startFile,endFile;
    FILE *fp = fopen("conf.ini", "r");
    fscanf(fp,
#include "conf.i"
            , path1, path2
    );
    fclose(fp);
    while (menu()) {
        switch (n) {
            case 1: {
                StartTime = time(NULL);
                char link[10000];
                printf("������Ӣ���ĵ�����");
                scanf("%s", p);
                one(p, path1, path2);
                sprintf(link,"start ../htmlResult/%sHtmlResult.html",p);
                system(link);
                EndTime = time(NULL);
                printf("case 1 total Time:%fs\n", difftime(EndTime, StartTime));
                break;
            }
            case 2: {
                startFile = time(NULL);
                fileopen(path1, path2);
                endFile=time(NULL);
                printf("case 2 total Time :%fs\n", difftime(endFile, startFile));
                break;
            }
        }

    }
    return 0;
}


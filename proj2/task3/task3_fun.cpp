#include"task3_fun.h"
#include<cstring>
#include <iostream>
#include <dirent.h>
int n,i;
/*
*�������ƣ�menu
*�������ܣ�ͨ���˵����ò�ͬ�Ĺ���
*�����������
*����ֵ��0��1��2
*�汾��Ϣ������������2022.09.28����
*/
int menu() {
    printf("HRD���ʵ��5����\n");
    printf("\t1. �Ե���Ӣ���ĵ�����ͳ��\n");
    printf("\t2. ������Ӣ���ĵ�����ͳ��\n");
    printf("\t0. �˳�\n");
    printf("��������Ҫִ�еĳ������");
    scanf("%d", &n);
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    else {
        printf("������������������!");
        return 1;
    }
}
/*
*�������ƣ�one
*�������ܣ�����һ��ʵ��
*���������char *p,char *p1,char *p2
*����ֵ����
*�汾��Ϣ������������2022.09.28����
*/
void one(char *p, char *p1, char *p2) {
    char command[10007];
    sprintf(command, "%s %s 0", p1, p);
    system(command);
    sprintf(command, "%s %s 1", p2, p);
    system(command);
}
/*
*�������ƣ�fileopen
*�������ܣ����ܶ���ʵ��
*���������char* path1,char *path2
*����ֵ��0
*�汾��Ϣ������������2022.09.28����
*/
int fileopen(char *path1, char *path2) {
    char *p = NULL;
    char path[120], p0[100], p1[200], p2[200], link[200];
    FILE *fp;
    struct dirent *ptr;
    DIR *dir = NULL;
    printf("�������ͳ���ĵ�·��:");
    scanf("%s", path);
    dir = opendir(path);
    ptr=readdir(dir);
    ptr=readdir(dir);
    fp = fopen("../htmlResult/Summarizing.html", "w+");
    fprintf(fp,
#include "website_before.i"
            );
    while ((ptr = readdir(dir)) != NULL) {
        p = ptr->d_name;
        printf("p=%s\n", p);
        strcpy(p1, path1);
        strcpy(p2, path2);
        strcpy(p0, path);
        strcat(p0, p);
        int lenp = strlen(p);
        p[lenp - 4] = '\0';
        one(p, p1, p2);
        sprintf(link, "../htmlResult/%sHtmlResult.html", p);
        fprintf(fp, "<a href=\"%s\">file %s_show_on %s.html</a><br>\n", link, p, p);
    }
    fprintf(fp, "</body>\n"
                "</html>\n");
    fclose(fp);
    closedir(dir);
    system("start ../htmlResult/Summarizing.html");
    return 0;
}





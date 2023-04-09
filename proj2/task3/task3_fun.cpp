#include"task3_fun.h"
#include<cstring>
#include <iostream>
#include <dirent.h>
int n,i;
/*
*函数名称：menu
*函数功能：通过菜单调用不同的功能
*输入参数：无
*返回值：0或1或2
*版本信息：由刘梦真于2022.09.28创建
*/
int menu() {
    printf("HRD组的实验5程序\n");
    printf("\t1. 对单个英文文档进行统计\n");
    printf("\t2. 对批量英文文档进行统计\n");
    printf("\t0. 退出\n");
    printf("请输入您要执行的程序序号");
    scanf("%d", &n);
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    else {
        printf("输入有误请重新输入!");
        return 1;
    }
}
/*
*函数名称：one
*函数功能：功能一的实现
*输入参数：char *p,char *p1,char *p2
*返回值：无
*版本信息：由刘梦真于2022.09.28创建
*/
void one(char *p, char *p1, char *p2) {
    char command[10007];
    sprintf(command, "%s %s 0", p1, p);
    system(command);
    sprintf(command, "%s %s 1", p2, p);
    system(command);
}
/*
*函数名称：fileopen
*函数功能：功能二的实现
*输入参数：char* path1,char *path2
*返回值：0
*版本信息：由刘梦真于2022.09.28创建
*/
int fileopen(char *path1, char *path2) {
    char *p = NULL;
    char path[120], p0[100], p1[200], p2[200], link[200];
    FILE *fp;
    struct dirent *ptr;
    DIR *dir = NULL;
    printf("请输入待统计文档路径:");
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





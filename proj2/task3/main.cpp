/****************************************************\
作者信息：
 姓名：刘梦真
版权声明：
 版权由程序设计分组训练某小组所有
模块名称:
 子任务3
摘要:
 实验5作业中的Task3板块
其它说明:
 整合子任务1和子任务2的程序，通过菜单使用
模块历史:
 2022.09.28由刘梦真创建
 2022.10.03由刘梦真修改
**********************************************************/
#include "task3_fun.h"
#include<iostream>
#include <ctime>
extern int n, i;
/********
*函数名称：main
*函数功能：实现子任务1和子任务2的整合
*输入参数：int argc,char *argv[]
*返回值：无
*版本信息：由刘梦真于2022.09.28创建
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
                printf("请输入英文文档名称");
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


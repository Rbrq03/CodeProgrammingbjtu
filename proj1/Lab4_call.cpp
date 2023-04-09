#include"Lab4_call.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>

void CallLab3(int mode)
{
    char *order = (char *)malloc(sizeof(char) * 1000);
    FILE *fp = fopen("./conf.ini", "r");
    char *filepath = (char *)malloc(sizeof(char) * 1000);
    char *filename = (char *)malloc(sizeof(char) * 1000);

    strcpy(order, "./../lab3/Lab3 ");
    if(mode == AUTO_MODE)
    {
        fscanf(fp, "%s\n%s", filepath, filename);
        strcat(order, "50000 ");
        strcat(order, filename);
        system(order);
        return ;
    }

    char *num = (char *)malloc(sizeof(char) * 1000);
    printf("请输入数据条数:");
    scanf("%s", num);
    printf("请输入文件位置");
    strcat(order, num);
    strcat(order, " ");
    strcat(order, filepath);
    system(order);
    
    return ;
}

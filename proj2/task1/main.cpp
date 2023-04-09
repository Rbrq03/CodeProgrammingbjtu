i/****************************************************
作者信息：
 姓名：王德阳
版权声明：
 版权由程序设计分组训练小组所有
模块名称:
 子任务1
摘要:
 实验5作业中的Task1板块
其它说明:
 本模块实现数据统计功能，保存英文单词、字符、数字、空白字符、英文字母和其他字符的个数
aaaaaa**********************************************************/
#include <iostream>
#include <cstring>
int word_count = 0, alpha_count = 0, number_count = 0, blank_count = 0, other_count = 0;
int last_is_alpha = 0;
/*
*函数名称：Count
*函数功能：统计英文单词、字符、数字、空白字符、英文字母和其他字符的个数
*输入参数：无
*返回值：无
*/
void Count(char str[]){
    for (int index = 0; str[index]; index++) {
        if (isalpha(str[index])) {
            if (!last_is_alpha)word_count++;
            last_is_alpha = 1;
            alpha_count++;
        } else if (isdigit(str[index])) {
            last_is_alpha = 0;
            number_count++;
        } else if (isblank(str[index])) {
            last_is_alpha = 0;
            blank_count++;
        } else {
            other_count++;
            last_is_alpha = 0;
        }
    }
    printf("read file stage ends.\n");
}
/*
*函数名称：main
*函数功能：实现文件的读取和写入
*输入参数：无
*返回值：无
*/
int main(int args, char *argv[]) {
    char str[100007];
    printf("------------------------------------task1---------------------------------------\n");
    if (args <= 2) {
        printf("arguments less than 2.\n");
        return -1;
    }
    char *taskpath = (char *)malloc(sizeof(char) * 100);
    strcpy(taskpath, "../data/");
    strcat(taskpath, argv[1]);
    strcat(taskpath, ".txt");
    
    FILE *fp = fopen(taskpath, "r");
    if (fp == nullptr) {
        printf("input file %s can not be read.\n", argv[1]);
        return -1;
    }
    printf("input file %s is opened successfully.\n", argv[1]);
    fread(str, sizeof(char), sizeof str, fp);
    printf("input file %s is read successfully.\n", argv[1]);
    Count(str);
    if(!strcmp(argv[2],"1")){
        printf("word_count:%d\n",word_count);
        printf("alpha_count:%d\n",alpha_count);
        printf("number_count:%d\n",number_count);
        printf("blank_count:%d\n",blank_count);
        printf("other_count:%d\n",other_count);
    }
    
    char *resultPath = (char *)malloc(sizeof(char) * 100);
    strcpy(resultPath, "../txtResult/");
    strcat(resultPath, argv[1]);
    strcat(resultPath, "CountResult.txt");
    
    
    fp = fopen(resultPath, "w");
    if (fp == nullptr) {
        printf("input file %s can not be writen\n", resultPath);
        return -1;
    }
    printf("start writing result to %s\n",resultPath);
    fprintf(fp,

#include "result.i"

            ,word_count,alpha_count,number_count,blank_count,other_count
    );
    printf("write file stage ends.\n");
    printf("program exit.\n");
    printf("-----------------------------------------------------------------------------\n");

    return 0;
}

#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

int word_count = 0, alpha_count = 0, number_count = 0, blank_count = 0, other_count = 0;



void ReadResult(FILE *fp, char* FileName)
{
	
//    if (fp == nullptr) {
//        paaaarintf("input file %s can not be writen\n", FileName);
//        return -1;
//    }
    printf("start reading result from %s.\n", FileName);
    fscanf(fp,

#include "result.i"

            ,&word_count,&alpha_count,&number_count,&blank_count,&other_count
    );
    printf("read file stage ends.\n");
    fclose(fp);
}

void GenerateHtml(FILE *fp, char* FileName, char* mode)
{
	
	printf("start writing result to %s.\n", FileName);
    fprintf(fp,
#include "website.i"
            ,word_count,alpha_count,number_count,blank_count,other_count
    );
    printf("write file stage ends.\n");
	fclose(fp);
    if(strcmp(mode, "1")&&strcmp(mode, "0")) printf("Error: invalid mode.\n");
    
    char *order = (char *)malloc(sizeof(char) * 100);
    strcpy(order, "start ");
    strcat(order, FileName);
    
	if(!strcmp(mode, "0"))
		system(order);
	if(!strcmp(mode, "1"))
		printf("html file has been saved in %s.\n", FileName);
	
    printf("program exit.\n");
    
    printf("-----------------------------------------------------------------------------\n");
    
}

int main(int args, char *argv[]) {
    printf("------------------------------------task2---------------------------------------\n");
    if (args <= 2) {
        printf("arguments less than 2.\n");
        return -1;
    }
    char *task1path, *task2path;
    task1path = (char *)malloc(sizeof(char) * 100);
    task2path = (char *)malloc(sizeof(char) * 100);
    strcpy(task1path, "../txtResult/");
    strcat(task1path, argv[1]);
    strcat(task1path, "CountResult.txt");
    strcpy(task2path, "../htmlResult/");
    strcat(task2path, argv[1]);
    strcat(task2path, "HtmlResult.html");
    printf("%s %s",task1path, task2path);
    FILE *fin = fopen(task1path, "r");
    FILE *fout = fopen(task2path, "w");
    ReadResult(fin, argv[1]);
	GenerateHtml(fout, task2path, argv[2]);
}




//#include <stdio.h>
//#include<string.h>
//
//int main(int argc,char *argv[]) {
//    FILE *fp;
//    printf("-------------task2------------\n");
//    if((fp=fopen("1.html","w+"))!=NULL){
//        fprintf(fp,"<!DOCTYPE html>\n");
//
//    }
//    return 0;
//}

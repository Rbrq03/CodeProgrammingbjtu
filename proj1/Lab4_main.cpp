#include"Lab4_main.h"
#include"Lab4_menu.h"
#include"Lab4_data.h"
#include"Lab4_call.h"
#include"Lab4_conf.h"
#include"Lab4_sort.h"
#include"Lab4_view.h"
#include"Lab4_loadfile.h"
#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<time.h>

using std::cin;
using std::endl;

void run(int argc, char *argv[])
{
    CONF Lab4defaultConfig = LoadDeafultConfig();
    int menuChoice, record_num;

    int **twoDimensionArray = NULL;
    DATAITEM *dataItemArray = NULL;
    int *pointerArray[MAX_ARRAY_LEN];
    TripleNode *linkList = NULL;

    while(true)
    {
        menu();

        cin>>menuChoice;
        switch(menuChoice)
        {
            case 0:
                exit(0);
                break;
            case 1:
                CallLab3(Lab4defaultConfig.mode);
                break;
            case 2:
                twoDimensionArray = StoreDataWithArray(record_num);
                DisplayArray(record_num, twoDimensionArray);
                break;
            case 3:
                dataItemArray = StoreDataWithStruct(record_num);
                DisplayStruct(record_num, dataItemArray);
                break;
            case 4:
                StoreDataWithPointerArray(record_num, pointerArray);
                DisplayPointerArray(record_num, pointerArray);
                break;
            case 5:
                linkList = StoreDataWithLinkList(record_num);
                DisplayLinkList(record_num, linkList);
                break;
            case 6: 
                CallLab3(Lab4defaultConfig.mode);
                twoDimensionArray = StoreDataWithArray(record_num);
                DisplayArray(record_num, twoDimensionArray);
                break;
            case 7:
                CallLab3(Lab4defaultConfig.mode);
                dataItemArray = StoreDataWithStruct(record_num);
                DisplayStruct(record_num, dataItemArray);
                break;
            case 8:
                CallLab3(Lab4defaultConfig.mode);
                StoreDataWithPointerArray(record_num, pointerArray);
                DisplayPointerArray(record_num, pointerArray);
                break;
            case 9:
                CallLab3(Lab4defaultConfig.mode);
                linkList = StoreDataWithLinkList(record_num);
                DisplayLinkList(record_num, linkList);
                break;
            case 10:
                CallLab3(Lab4defaultConfig.mode);
                twoDimensionArray = StoreDataWithArray(record_num);
                sortArray(twoDimensionArray, record_num);
                DisplayArray(record_num, twoDimensionArray);
                break;
            case 11:
                CallLab3(Lab4defaultConfig.mode);
                dataItemArray = StoreDataWithStruct(record_num);
                sortStructArray(dataItemArray, record_num);
                DisplayStruct(record_num, dataItemArray);
                break;
            case 12:
                CallLab3(Lab4defaultConfig.mode);
                StoreDataWithPointerArray(record_num, pointerArray);
                sortPointerArray(pointerArray, record_num);
                DisplayPointerArray(record_num, pointerArray);
                break;
            case 13:
                CallLab3(Lab4defaultConfig.mode);
                linkList = StoreDataWithLinkList(record_num);
                sortLinkList(linkList, record_num);
                DisplayLinkList(record_num, linkList);
                break;
            case 14:
                ModifyConfig(Lab4defaultConfig);
                break;
            default:
                printf("非法的输入,合法的输入位于[0, 14],而您的输入为%d。请再次输入", menuChoice);
                break;
        }
    }

    clock_t start, end;
    // CallLab3(Lab4defaultConfig.mode);
    // twoDimensionArray = StoreDataWithArray(record_num);
    // dataItemArray = StoreDataWithStruct(record_num);
    // StoreDataWithPointerArray(record_num, pointerArray);
    // start = clock();
    // sortArray(twoDimensionArray, record_num);
    // end =  clock();
    // std::cout<<"Two Dimension Array: "<<((double)(end - start) / CLOCKS_PER_SEC)<<std::endl;

    // start = clock();
    // sortStructArray(dataItemArray, record_num);
    // end =  clock();
    // std::cout<<"Struct Array: "<<((double)(end - start) / CLOCKS_PER_SEC)<<std::endl;

    // start = clock();
    // sortPointerArray(pointerArray, record_num);
    // end =  clock();
    // std::cout<<"pointer Array: "<<((double)(end - start) / CLOCKS_PER_SEC)<<std::endl;
    //CallLab3(Lab4defaultConfig.mode);

    // linkList = StoreDataWithLinkList(record_num);
    // start = clock();
    // sortLinkList(linkList, record_num);
    // end = clock();
    // std::cout<<"Linklist inserts: "<<((double)(end - start) / CLOCKS_PER_SEC)<<std::endl;

    // linkList = StoreDataWithLinkList(record_num);
    // printf("1");
    // start = clock();
    // sortLinkList1(linkList, record_num);
    // end = clock();
    // std::cout<<"Linklist pop: "<<((double)(end - start) / CLOCKS_PER_SEC)<<std::endl;

    return;
}
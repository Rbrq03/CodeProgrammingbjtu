#include"Lab4_menu.h"
#include<iostream>

using std::cout;
using std::endl;

void menu()
{
    cout<<"rbrq的实验4程序:"<<endl;
    cout<<"  1.调用实验3程序生成记录文件"<<endl;
    cout<<"  2.读取指定记录文件(二维数组存储方式)"<<endl;
    cout<<"  3.读取指定记录文件(结构体数组存储方式)"<<endl;
    cout<<"  4.读取指定记录文件(指针数组存储方式)"<<endl;
    cout<<"  5.读取指定记录文件(链表存储方式)"<<endl;
    cout<<"  6.调用实验3生成数据记录文件, 同时读取数据记录文件(二维数组方式储存)"<<endl;
    cout<<"  7.调用实验3生成数据记录文件, 同时读取数据记录文件(结构体数组方式储存)"<<endl;
    cout<<"  8.调用实验3生成数据记录文件, 同时读取数据记录文件(指针数组方式储存)"<<endl;
    cout<<"  9.调用实验3生成数据记录文件, 同时读取数据记录文件(链表方式储存)"<<endl;
    cout<<"  10.调用实验3生成数据记录文件, 同时读取数据记录文件并排序(二维数组方式储存)"<<endl;
    cout<<"  11.调用实验3生成数据记录文件, 同时读取数据记录文件并排序(结构体数组方式储存)"<<endl;
    cout<<"  12.调用实验3生成数据记录文件, 同时读取数据记录文件并排序(指针数组方式储存)"<<endl;
    cout<<"  13.调用实验3生成数据记录文件, 同时读取数据记录文件并排序(链表方式储存)"<<endl;
    cout<<"  14.重新设置配置参数值"<<endl;
    cout<<"  0.退出"<<endl;
    cout<<"请输入您要执行的程序序号"<<endl;
}
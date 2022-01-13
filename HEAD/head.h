#ifndef __HEAD_H
#define __HEAD_H
#define MAX 200

#include <iostream>
#include <string>
#include <unistd.h>//ubuntu下保留控制台所需头文件



using namespace std;

void showMenu();    //显示菜单
void select();      //功能选择
void addbook();     //添加图书
void lender_info(); //借出人信息
void BookLender();  //借书登记
void BookComeback();//还书登记
void DeleteBook();  //删除书籍

//书籍结构体
struct book_info
{

    string m_book_name; //书名
    string m_pub_time;  //出版日期
    string m_book_class;//书籍分类
    int m_book_status;  //书籍状态，0为借出，1为在馆
};
//借出人结构体
struct lender
{
    string m_lender_name;   //借出人姓名
    string m_lender_phone;  //借出人电话
};

//管理系统结构体
struct BookManage
{
    struct book_info bookArray[MAX];    //保存的书籍数组
    int m_number;                       //管理系统中书籍数量
};


#endif
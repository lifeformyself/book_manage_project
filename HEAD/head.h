#ifndef __HEAD_H
#define __HEAD_H

#include <iostream>
#include <string>



using namespace std;

void showMenu();    //显示菜单
int select();       //功能选择
void addbook();     //添加图书
void lender_info();   //借出人信息




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



#endif
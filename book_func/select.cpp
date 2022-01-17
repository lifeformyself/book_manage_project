#include "head.h"

void select()
{
	while (1)
	{
		system("cls");
		showMenu();
		cout << "请选择对应功能的标号" << endl;
		int i = 0;
		cin >> i;
		if (cin.fail())
		{
			cout << "请不要输入奇怪的玩意儿" << endl;
			pause();
			continue;
		}
		switch (i)
		{
		case 1:
			addbook();
			break;
			system("cls");
		case 2:
			BookLender();
			break;
			system("cls");
		case 3:
			BookComeback();
			break;
			system("cls");
		case 4:
			DeleteBook();
			break;
			system("cls");
		case 0:
			cout << "欢迎下次使用" << endl;
			pause();//ubuntu下保留控制台指令
			return;
		default:
			cout << "无效的指令" << endl;
			pause();
			break;
			system("cls");
		}
	}
}

/*  存在bug
	按任意建应该返回菜单目录


	进入子项功能后，设计一个保存键，保存并返回上级菜单；设计一个返回键，提示不保存当前操作，不保存用户输入并返回上级菜单
	此功能应在具体函数中实现
	
	按0才是退出 */
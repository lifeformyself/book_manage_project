#include "head.h"

void select()
{
	while (1)
	{
		cout << "请选择对应功能的标号" << endl;
		int i = 0;
		cin >> i;
		switch (i)
		{
		case 1:
			addbook();
			break;
		case 2:
			BookLender();
			break;
		case 3:
			BookComeback();
			break;
		case 4:
			DeleteBook();
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return;
		}
	}
}
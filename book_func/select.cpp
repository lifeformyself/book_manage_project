#include "head.h"

void select()
{
	while (1)
	{
		cout << "��ѡ���Ӧ���ܵı��" << endl;
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
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return;
		}
	}
}
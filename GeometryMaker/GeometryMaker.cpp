//����������

#include "stdafx.h"
#include "maker.h"

//������
int main()
{
	char l,ch;
	do
	{
		cout << "===============================" << endl
			<< "|| ��ӭʹ�ü��������� By Tao ||" << endl
			<< "||  A:����  B:������  C.Բ�� ||" << endl
			<< "||           N.�˳�          ||" << endl
			<< "===============================" << endl;
		cin >> l;
		switch (l)
		{
		case 65:Square(); break; case 97:Square(); break;
		case 66:Triangle(); break; case 98:Triangle();; break;
		case 67:Circle(); break; case 99:Circle(); break;
		default:cout << "����ͼ�����ڿ�����ร�" << endl; break;
		}
	} while (l != 78);
	return 0;
}
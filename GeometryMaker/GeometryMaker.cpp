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
			<< "||  A:����  B:������  N.�˳� ||" << endl
			<< "===============================" << endl;
		cin >> l;
		if (l == 65 || l == 97)
		{Square();}
		else if (l == 66 || l == 98)
		{Triangle();}
		else
		{cout << "����ͼ�����ڿ�����ร�" << endl;}
	} while (l != 78);
	return 0;
}
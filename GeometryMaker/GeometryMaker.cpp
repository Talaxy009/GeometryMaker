//����������

#include "stdafx.h"
#include<iostream>
using namespace std;

void Square();
void Triangle();
//������
int main()
{
	char l;
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
//������������
void Square()
{
	int a = 0, b = 0, c = 0;
	char ch = 89;
	do
	{
		cout << "======================" << endl << "��Ҫ�������α߳����" << endl;
		cin >> a;
		b = a;
		c = a - 2;
		while (b > 0)//����
		{
			cout << "* ";
			b--;
		}
		b = a - 1;
		while (c > 0)//б��
		{
			cout << endl << "* ";
			while (b > 1)
			{
				cout << "  ";
				b--;
			}
			cout << "*";
			b = a - 1;
			c--;
		}
		if (a != 1) { b = a + 1; }//�ױ�
		else { b = a; }
		cout << endl;
		while (b > 1)
		{
			cout << "* ";
			b--;
		}
		cout << endl << "��Ҫ�������ξ�����������" << endl << "��Ҫ����һ����(Y/N)" << endl;
		cin >> ch;
	} while (ch == 89 || ch == 121);
}
//������������
void Triangle()
{
	int a = 0, b = 0, c = 0, d = 1;
	char ch = 89;
	do
	{
		cout << "======================" << endl << "��Ҫ�������ε׳����" << endl;
		cin >> a;
		do
		{
			b = a - d; c = d;
			while (b>0)//��ͷ�Ŀո�
			{
				cout << " ";
				b--;
			}
			while (c>0)//�Ǻ�
			{
				cout << "* ";
				c--;
			}
			cout << endl;
			d++;
		} while (a >= d);
		d = 1;
		cout << "��Ҫ�������ξ�����������" << endl << "��Ҫ����һ����(Y/N)" << endl;
		cin >> ch;
	} while (ch == 89 || ch == 121);

}


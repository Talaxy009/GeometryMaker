//������������

#include "stdafx.h"
void Triangle()
{
	int a = 0, b = 0, c = 0, d = 1;
	char ch = 89, t;
	do
	{
		cout << "======================" << endl << "��Ҫ�������ε׳����" << endl;
		cin >> a;
		cout << "��Ҫʲô���ţ�(��:* @ #)" << endl;
		cin >> t;
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
				cout << t << " ";
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
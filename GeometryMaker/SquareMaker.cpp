//������������

#include "stdafx.h"
void Square()
{
	int a = 0, b = 0, c = 0;
	char ch = 89, t;
	do
	{
		cout << "======================" << endl << "��Ҫ�������α߳����" << endl;
		cin >> a;
		cout << "��Ҫʲô���ţ�(��:* @ #)" << endl;
		cin >> t;
		b = a;
		c = a - 2;
		while (b > 0)//����
		{
			cout << t << " ";
			b--;
		}
		b = a - 1;
		while (c > 0)//б��
		{
			cout << endl << t << " ";
			while (b > 1)
			{
				cout << "  ";
				b--;
			}
			cout << t;
			b = a - 1;
			c--;
		}
		if (a != 1) { b = a + 1; }//�ױ�
		else { b = a; }
		cout << endl;
		while (b > 1)
		{
			cout << t << " ";
			b--;
		}
		cout << endl << "��Ҫ�������ξ�����������" << endl << "��Ҫ����һ����(Y/N)" << endl;
		cin >> ch;
	} while (ch == 89 || ch == 121);
}
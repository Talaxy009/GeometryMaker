//Բ��������

#include "stdafx.h"
void Circle()
{
	int n, nn, x, y, i; double xx;
	char ch = 89, t;
	do
	{
		cout << "======================" << endl << "��Ҫ��Բ�ΰ뾶���" << endl;
		cin >> n;
		cout << "��Ҫʲô���ţ�(��:* @ #)" << endl;
		cin >> t;
		nn = n * 2 + 1;
		char **T = new char *[nn];//���ɿհ׾���
		for (i = 0; i < nn; i++)
		{
			T[i] = new char[2*nn-1];
			for (x = 0; x < 2*nn-1 ; x++)
			{
				T[i][x] = ' ';
			}
		}
		for (i = 0; i < nn; i++)//������
		{
			y = n - i;
			xx = 1.0*sqrt(n*n - y*y);
			x = 2 * (xx + n);
			T[i][x] = t;
			x = (4 * n) - x;
			T[i][x] = t;
		}
		for (i = 0; i < nn; i++)//���
		{
			for (x = 0; x < 2*nn-1; x++)
			{
				cout << T[i][x];
			}
			cout << endl;
		}
		for (i = 0; i < nn; i++)//�ͷ��ڴ�
		{
			delete[]T[i];
		}
		delete[]T;
		cout << "��Ҫ��Բ�ξ�����������" << endl << "��Ҫ����һ����(Y/N)" << endl;
		cin >> ch;
	} while (ch == 89 || ch == 121);
}
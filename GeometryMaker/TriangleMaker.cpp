//������������

#include "stdafx.h"
void Triangle()
{
	int n = 0, i = 0, ii = 0, nn = 1;
	char ch = 89, t;
	do
	{
		cout << "======================" << endl << "��Ҫ�������ε׳����" << endl;
		cin >> n;
		cout << "��Ҫʲô���ţ�(��:* @ #)" << endl;
		cin >> t;
		do
		{
			i = n - nn; ii = nn;
			while (i>0)//��ͷ�Ŀո�
			{
				cout << " ";
				i--;
			}
			while (ii>0)//�Ǻ�
			{
				cout << t << " ";
				ii--;
			}
			cout << endl;
			nn++;
		} while (n >= nn);
		cout << "��Ҫ�������ξ�����������" << endl << "��Ҫ����һ����(Y/N)" << endl;
		cin >> ch;
	} while (ch == 89 || ch == 121);

}
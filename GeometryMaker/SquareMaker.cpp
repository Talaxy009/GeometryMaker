//������������

#include "stdafx.h"
void Square()
{
	int n = 0, i = 0, ii = 0;
	char ch = 89, t;
	do
	{
		cout << "======================" << endl << "��Ҫ�������α߳����" << endl;
		cin >> n;
		cout << "��Ҫʲô���ţ�(��:* @ #)" << endl;
		cin >> t;
		i = n;
		ii = n - 2;
		cout << endl;
		while (i > 0)//����
		{
			cout << t << " ";
			i--;
		}
		i = n - 1;
		while (ii > 0)//б��
		{
			cout << endl << t << " ";
			while (i > 1)
			{
				cout << "  ";
				i--;
			}
			cout << t;
			i = n - 1;
			ii--;
		}
		cout << endl;
		if (n != 1) //�ױ�
		{
			i = n; 
			while (i > 0)
			{
				cout << t << " ";
				i--;
			}
			cout << endl;
		}
		cout << "��Ҫ�������ξ�����������" << endl << "��Ҫ����һ����(Y/N)" << endl;
		cin >> ch;
	} while (ch == 89 || ch == 121);
}
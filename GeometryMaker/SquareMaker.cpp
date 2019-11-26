//正方形生成器

#include "stdafx.h"
void Square()
{
	int n = 0, i = 0, ii = 0;
	char ch = 89, t;
	do
	{
		cout << "======================" << endl << "你要的正方形边长多大？" << endl;
		cin >> n;
		cout << "想要什么符号？(如:* @ #)" << endl;
		cin >> t;
		i = n;
		ii = n - 2;
		cout << endl;
		while (i > 0)//顶边
		{
			cout << t << " ";
			i--;
		}
		i = n - 1;
		while (ii > 0)//斜边
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
		if (n != 1) //底边
		{
			i = n; 
			while (i > 0)
			{
				cout << t << " ";
				i--;
			}
			cout << endl;
		}
		cout << "你要的正方形就在上面啦！" << endl << "还要再来一个吗？(Y/N)" << endl;
		cin >> ch;
	} while (ch == 89 || ch == 121);
}
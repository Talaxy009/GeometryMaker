//正方形生成器

#include "stdafx.h"
void Square()
{
	int a = 0, b = 0, c = 0;
	char ch = 89, t;
	do
	{
		cout << "======================" << endl << "你要的正方形边长多大？" << endl;
		cin >> a;
		cout << "想要什么符号？(如:* @ #)" << endl;
		cin >> t;
		b = a;
		c = a - 2;
		while (b > 0)//顶边
		{
			cout << t << " ";
			b--;
		}
		b = a - 1;
		while (c > 0)//斜边
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
		if (a != 1) { b = a + 1; }//底边
		else { b = a; }
		cout << endl;
		while (b > 1)
		{
			cout << t << " ";
			b--;
		}
		cout << endl << "你要的正方形就在上面啦！" << endl << "还要再来一个吗？(Y/N)" << endl;
		cin >> ch;
	} while (ch == 89 || ch == 121);
}
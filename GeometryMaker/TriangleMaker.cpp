//三角形生成器

#include "stdafx.h"
void Triangle()
{
	int a = 0, b = 0, c = 0, d = 1;
	char ch = 89, t;
	do
	{
		cout << "======================" << endl << "你要的三角形底长多大？" << endl;
		cin >> a;
		cout << "想要什么符号？(如:* @ #)" << endl;
		cin >> t;
		do
		{
			b = a - d; c = d;
			while (b>0)//开头的空格
			{
				cout << " ";
				b--;
			}
			while (c>0)//星号
			{
				cout << t << " ";
				c--;
			}
			cout << endl;
			d++;
		} while (a >= d);
		d = 1;
		cout << "你要的三角形就在上面啦！" << endl << "还要再来一个吗？(Y/N)" << endl;
		cin >> ch;
	} while (ch == 89 || ch == 121);

}
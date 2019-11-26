//三角形生成器

#include "stdafx.h"
void Triangle()
{
	int n = 0, i = 0, ii = 0, nn = 1;
	char ch = 89, t;
	do
	{
		cout << "======================" << endl << "你要的三角形底长多大？" << endl;
		cin >> n;
		cout << "想要什么符号？(如:* @ #)" << endl;
		cin >> t;
		do
		{
			i = n - nn; ii = nn;
			while (i>0)//开头的空格
			{
				cout << " ";
				i--;
			}
			while (ii>0)//星号
			{
				cout << t << " ";
				ii--;
			}
			cout << endl;
			nn++;
		} while (n >= nn);
		cout << "你要的三角形就在上面啦！" << endl << "还要再来一个吗？(Y/N)" << endl;
		cin >> ch;
	} while (ch == 89 || ch == 121);

}
//圆形生成器

#include "stdafx.h"
void Circle()
{
	int n, nn, x, y, i; double xx;
	char ch = 89, t;
	do
	{
		cout << "======================" << endl << "你要的圆形半径多大？" << endl;
		cin >> n;
		cout << "想要什么符号？(如:* @ #)" << endl;
		cin >> t;
		nn = n * 2 + 1;
		char **T = new char *[nn];//生成空白矩阵
		for (i = 0; i < nn; i++)
		{
			T[i] = new char[2*nn-1];
			for (x = 0; x < 2*nn-1 ; x++)
			{
				T[i][x] = ' ';
			}
		}
		for (i = 0; i < nn; i++)//填充矩阵
		{
			y = n - i;
			xx = 1.0*sqrt(n*n - y*y);
			x = 2 * (xx + n);
			T[i][x] = t;
			x = (4 * n) - x;
			T[i][x] = t;
		}
		for (i = 0; i < nn; i++)//输出
		{
			for (x = 0; x < 2*nn-1; x++)
			{
				cout << T[i][x];
			}
			cout << endl;
		}
		for (i = 0; i < nn; i++)//释放内存
		{
			delete[]T[i];
		}
		delete[]T;
		cout << "你要的圆形就在上面啦！" << endl << "还要再来一个吗？(Y/N)" << endl;
		cin >> ch;
	} while (ch == 89 || ch == 121);
}
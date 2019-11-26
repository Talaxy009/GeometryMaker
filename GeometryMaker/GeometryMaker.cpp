//几何生成器

#include "stdafx.h"
#include "maker.h"

//主程序
int main()
{
	char l,ch;
	do
	{
		cout << "===============================" << endl
			<< "|| 欢迎使用几何生成器 By Tao ||" << endl
			<< "||  A:方形  B:三角形  C.圆形 ||" << endl
			<< "||           N.退出          ||" << endl
			<< "===============================" << endl;
		cin >> l;
		switch (l)
		{
		case 65:Square(); break; case 97:Square(); break;
		case 66:Triangle(); break; case 98:Triangle();; break;
		case 67:Circle(); break; case 99:Circle(); break;
		default:cout << "更多图形正在开发中喔！" << endl; break;
		}
	} while (l != 78);
	return 0;
}
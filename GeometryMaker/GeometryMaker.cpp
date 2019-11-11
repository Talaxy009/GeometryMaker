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
			<< "||  A:方形  B:三角形  N.退出 ||" << endl
			<< "===============================" << endl;
		cin >> l;
		if (l == 65 || l == 97)
		{Square();}
		else if (l == 66 || l == 98)
		{Triangle();}
		else
		{cout << "更多图形正在开发中喔！" << endl;}
	} while (l != 78);
	return 0;
}
//几何生成器

#include "stdafx.h"
#include<iostream>
using namespace std;

void Square();
void Triangle();
//主程序
int main()
{
	char l;
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
//正方形生成器
void Square()
{
	int a = 0, b = 0, c = 0;
	char ch = 89;
	do
	{
		cout << "======================" << endl << "你要的正方形边长多大？" << endl;
		cin >> a;
		b = a;
		c = a - 2;
		while (b > 0)//顶边
		{
			cout << "* ";
			b--;
		}
		b = a - 1;
		while (c > 0)//斜边
		{
			cout << endl << "* ";
			while (b > 1)
			{
				cout << "  ";
				b--;
			}
			cout << "*";
			b = a - 1;
			c--;
		}
		if (a != 1) { b = a + 1; }//底边
		else { b = a; }
		cout << endl;
		while (b > 1)
		{
			cout << "* ";
			b--;
		}
		cout << endl << "你要的正方形就在上面啦！" << endl << "还要再来一个吗？(Y/N)" << endl;
		cin >> ch;
	} while (ch == 89 || ch == 121);
}
//三角形生成器
void Triangle()
{
	int a = 0, b = 0, c = 0, d = 1;
	char ch = 89;
	do
	{
		cout << "======================" << endl << "你要的三角形底长多大？" << endl;
		cin >> a;
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
				cout << "* ";
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


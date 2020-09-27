#include "line.h"

///1号线
line_1::line_1(string n, string t) :metro_name(n), metro_transfering(t)//构造
{
	i = 0;
	last = NULL;
	next = NULL;
	//cout << "初始化完成" << endl;
}
void line_1::print()
{ 
	cout << metro_name << "\t\t" << metro_transfering << endl;
}
line_1::~line_1()//析构
{
	cout << "已清空" << endl;
}

///2号线
line_2::line_2(string n, string t) :metro_name(n), metro_transfering(t)//构造
{
	i = 0;
	last = NULL;
	next = NULL;
	//cout << "初始化完成" << endl;
}
void line_2::print()
{
	cout << metro_name << "\t\t" << metro_transfering << endl;
}
line_2::~line_2()//析构
{
	cout << "已清空" << endl;
}

///3号线
line_3::line_3(string n, string t) :metro_name(n), metro_transfering(t)//构造
{
	i = 0;
	last = NULL;
	next = NULL;
	//cout << "初始化完成" << endl;
}
void line_3::print()
{
	cout << metro_name << "\t\t" << metro_transfering << endl;
}
line_3::~line_3()//析构
{
	cout << "已清空" << endl;
}

///4号线
line_4::line_4(string n, string t) :metro_name(n), metro_transfering(t)//构造
{
	i = 0;
	last = NULL;
	next = NULL;
	//cout << "初始化完成" << endl;
}
void line_4::print()
{
	cout << metro_name << "\t\t" << metro_transfering << endl;
}
line_4::~line_4()//析构
{
	cout << "已清空" << endl;
}


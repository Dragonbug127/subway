#include "line.h"

///1����
line_1::line_1(string n, string t) :metro_name(n), metro_transfering(t)//����
{
	i = 0;
	last = NULL;
	next = NULL;
	//cout << "��ʼ�����" << endl;
}
void line_1::print()
{ 
	cout << metro_name << "\t\t" << metro_transfering << endl;
}
line_1::~line_1()//����
{
	cout << "�����" << endl;
}

///2����
line_2::line_2(string n, string t) :metro_name(n), metro_transfering(t)//����
{
	i = 0;
	last = NULL;
	next = NULL;
	//cout << "��ʼ�����" << endl;
}
void line_2::print()
{
	cout << metro_name << "\t\t" << metro_transfering << endl;
}
line_2::~line_2()//����
{
	cout << "�����" << endl;
}

///3����
line_3::line_3(string n, string t) :metro_name(n), metro_transfering(t)//����
{
	i = 0;
	last = NULL;
	next = NULL;
	//cout << "��ʼ�����" << endl;
}
void line_3::print()
{
	cout << metro_name << "\t\t" << metro_transfering << endl;
}
line_3::~line_3()//����
{
	cout << "�����" << endl;
}

///4����
line_4::line_4(string n, string t) :metro_name(n), metro_transfering(t)//����
{
	i = 0;
	last = NULL;
	next = NULL;
	//cout << "��ʼ�����" << endl;
}
void line_4::print()
{
	cout << metro_name << "\t\t" << metro_transfering << endl;
}
line_4::~line_4()//����
{
	cout << "�����" << endl;
}


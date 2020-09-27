
#ifndef DEBUG
#define DEBUG

#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
using namespace std;

class line_1					//1号线数据存储类
{
protected:
	string metro_name;			//站点名
	string metro_transfering;	//可换乘车站
	friend class subway;		//设定友元
public:
	line_1* last;				//上一个节点
	line_1* next;				//下一个节点
	int i;						//计数位

	//int find_m_n(string n);		//站点比较函数
	//int find_m_t(string n);		//换乘站比较函数
	void print();

	line_1(string n, string t);	//构造函数
	~line_1();					//析构函数
};

class line_2					//2号线数据存储类
{
protected:
	string metro_name;			//站点名
	string metro_transfering;	//可换乘车站
	friend class subway;		//设定友元
public:
	line_2* last;				//上一个节点
	line_2* next;				//下一个节点
	int i;						//计数位
	void print();
	line_2(string n, string t);	//构造函数
	~line_2();					//析构函数
};
	
class line_3					//3号线数据存储类
{
protected:
	string metro_name;			//站点名
	string metro_transfering;	//可换乘车站
	friend class subway;		//设定友元
public:
	line_3* last;				//上一个节点
	line_3* next;				//下一个节点
	int i;						//计数位
	void print();
	line_3(string n, string t);	//构造函数
	~line_3();					//析构函数
};

class line_4					//4号线数据存储类
{
protected:
	string metro_name;			//站点名
	string metro_transfering;	//可换乘车站
	friend class subway;		//设定友元
public:
	line_4* last;				//上一个节点
	line_4* next;				//下一个节点
	int i;						//计数位
	void print();
	line_4(string n, string t);	//构造函数
	~line_4();					//析构函数
};

class subway					//总操作类
{
protected:
	line_1* head1; ;				//一号线头指针
	line_2* head2;				//二号线头指针
	line_3* head3;				//三号线头指针
	line_4* head4;				//四号线头指针
	line_1* readLine1();		//读取1
	line_2* readLine2();		//读取2
	line_3* readLine3();		//读取3
	line_4* readLine4();		//读取4
public:
	subway();					//构造函数
	~subway();					//析构函数
	void TheMain();
	int find_subway(string name);//站点查找函数
	//auto find_transfer(auto*p);//换乘查找函数
	string judge_line(int a);	//单独线路返回
	line_1* find_line1(string l, string k);//一号线转乘查找
	line_2* find_line2(string l);//二号线转乘查找
	line_3* find_line3(string l);//三号线转乘查找
	line_4* find_line4(string l);//四号线转乘查找

	void print();				//查看检测
};

#endif // DEBUG

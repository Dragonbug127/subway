#include "line.h"

line_1* subway::readLine1()//读取地铁线站点
{
	/*1号线读取*/
	line_1* h1 = NULL, * l1 = NULL, * l2 = NULL;
	string n;
	string t;
	int c = 0;
	ifstream linefile;	//声明一个文件
	linefile.open("E:/c++/QST/subway/line/1.txt");	//打开对应文件
	while (linefile)
	{
		linefile >> n >> t;	//文件内容保存
		c++;
		if (c == 1)	//第一位时
		{
			h1 = new line_1(n, t);	//初始化空间
			h1->i = (c - 1);	//保存当前位
			l1 = h1;	//保存首位地址
			//cout << n << t << endl;
		}
		else
		{
			l2 = new line_1(n, t);	//初始化空间
			l2->i = (c - 1);	//保存当前位
			l1->next = l2;	//上一位的next指针保存本位
			l2->last = l1;	//本位的last指针保存上一位
			l1 = l2;	//保存本位地址
		}
	}
	if (NULL != l2 ||  NULL != h1)
	{
		l1 = l2->last;	//保存上一位地址
		l2 = l1;		//指针跳回上一位
		l2->next = h1;	//下一位指向头
		h1->last = l2;	//头上一位指向尾
		linefile.close();	//关闭文件
		c = 0;	//清空c
		return h1;
	}
	else
	{
		cout << "读取无效" << endl;
		return 0;
	}
}

line_2* subway::readLine2()//读取地铁线站点
{
	/*2号线读取*/

	line_2* h1 = NULL, * l1 = NULL, * l2 = NULL;
	string n;
	string t;
	int c = 0;
	ifstream linefile;	//声明一个文件
	linefile.open("E:/c++/QST/subway/line/2.txt");	//打开对应文件
	while (linefile)
	{
		linefile >> n >> t;	//文件内容保存
		c++;
		if (c == 1)	//第一位时
		{
			h1 = new line_2(n, t);	//初始化空间
			h1->i = (c - 1);	//保存当前位
			l1 = h1;	//保存首位地址
		}
		else
		{
			l2 = new line_2(n, t);	//初始化空间
			l2->i = (c - 1);	//保存当前位
			l1->next = l2;	//上一位的next指针保存本位
			l2->last = l1;	//本位的last指针保存上一位
			l1 = l2;	//保存本位地址
		}
	}
	if (NULL != l2 || NULL != h1)
	{
		l1 = l2->last;	//保存上一位地址
		l2 = l1;		//指针跳回上一位
		l2->next = h1;	//下一位指向头
		h1->last = l2;	//头上一位指向尾
		linefile.close();	//关闭文件
		c = 0;	//清空c
		return h1;
	}
	else
	{
		cout << "读取无效" << endl;
		return 0;
	}
}

line_3* subway::readLine3()//读取地铁线站点
{
	/*3号线读取*/
	line_3* h1 = NULL, * l1 = NULL, * l2 = NULL;
	string n;
	string t;
	int c = 0;
	ifstream linefile;	//声明一个文件
	linefile.open("E:/c++/QST/subway/line/3.txt");	//打开对应文件
	while (linefile)
	{
		linefile >> n >> t;	//文件内容保存
		c++;
		if (c == 1)	//第一位时
		{
			h1 = new line_3(n, t);	//初始化空间
			h1->i = (c - 1);	//保存当前位
			l1 = h1;	//保存首位地址
			//cout << n << t << endl;
		}
		else
		{
			l2 = new line_3(n, t);	//初始化空间
			l2->i = (c - 1);	//保存当前位
			l1->next = l2;	//上一位的next指针保存本位
			l2->last = l1;	//本位的last指针保存上一位
			l1 = l2;	//保存本位地址
		}
	}
	if (NULL != l2 || NULL != h1)
	{
		l1 = l2->last;	//保存上一位地址
		l2 = l1;		//指针跳回上一位
		l2->next = h1;	//下一位指向头
		h1->last = l2;	//头上一位指向尾
		linefile.close();	//关闭文件
		c = 0;	//清空c
		return h1;
	}
	else
	{
		cout << "读取无效" << endl;
		return 0;
	}
}

line_4* subway::readLine4()//读取地铁线站点
{
	/*4号线读取*/

	line_4* h1 = NULL, * l1 = NULL, * l2 = NULL;
	string n;
	string t;
	int c = 0;
	ifstream linefile;	//声明一个文件
	linefile.open("E:/c++/QST/subway/line/4.txt");	//打开对应文件
	while (linefile)
	{
		linefile >> n >> t;	//文件内容保存
		c++;
		if (c == 1)	//第一位时
		{
			h1 = new line_4(n, t);	//初始化空间
			h1->i = (c - 1);	//保存当前位
			l1 = h1;	//保存首位地址
		}
		else
		{
			l2 = new line_4(n, t);	//初始化空间
			l2->i = (c - 1);	//保存当前位
			l1->next = l2;	//上一位的next指针保存本位
			l2->last = l1;	//本位的last指针保存上一位
			l1 = l2;	//保存本位地址
		}
	}
	if (NULL != l2 || NULL != h1)
	{
		l1 = l2->last;	//保存上一位地址
		l2 = l1;		//指针跳回上一位
		l2->next = h1;	//下一位指向头
		h1->last = l2;	//头上一位指向尾
		linefile.close();	//关闭文件
		c = 0;	//清空c
		return h1;
	}
	else
	{
		cout << "读取无效" << endl;
		return 0;
	}
}

subway::subway()
{
	head1 = readLine1();
	head2 = readLine2();
	head3 = readLine3();
	head4 = readLine4();
}

subway::~subway()
{

}

void subway::print()
{
	int t = 0;
	line_1* h1= head1;
	line_2* h2 =head2;
	line_3* h3= head3;
	line_4* h4= head4;
	cout << "////////////////////1号线////////////////////" << endl;
	for (t = 0; t <= (h1->i); t++)
	{
		h1->print();
		h1 = h1->next;
	}
	cout << "////////////////////2号线////////////////////" << endl;
	for (t = 0; t <= (h2->i); t++)
	{
		h2->print();
		h2 = h2->next;
	}
	cout << "////////////////////3号线////////////////////" << endl;
	for (t = 0; t <= (h3->i); t++)
	{
		h3->print();
		h3 = h3->next;
	}
	cout << "////////////////////4号线////////////////////" << endl;
	for (t = 0; t <= (h4->i); t++)
	{
		h4->print();
		h4 = h4->next;
	}
}

int subway::find_subway(string name)
{
	int t = 0;	//循环记次
	int location = 0; //所在地铁线路
	line_1* h1 = head1;
	line_2* h2 = head2;
	line_3* h3 = head3;
	line_4* h4 = head4;
	for (t = 0; t <= (h1->i); t++)
	{
		if (h1->metro_name == name)
		{
			location = location + 1;
		}
		else
		{
			h1 = h1->next;
		}
	}
	
	for (t = 0; t <= (h2->i); t++)
	{
		if (h2->metro_name == name)
		{
			location = location + 2;
		}
		else
		{
			h2 = h2->next;
		}
	}
	
	for (t = 0; t <= (h3->i); t++)
	{
		if (h3->metro_name == name)
		{
			location = location + 4;
		}
		else
		{
			h3 = h3->next;
		}
	}

	for (t = 0; t <= (h4->i); t++)
	{
		if (h4->metro_name == name)
		{
			location = location + 8;
		}
		else
		{
			h4 = h4->next;
		}
	}
	return location;
}

string subway::judge_line(int t)
{
	string a;
	if ((t & 1) != 0)
		a = "1号线";
	if ((t & (1 << 1)) != 0)
		a = "2号线";
	if ((t & (1 << 2)) != 0)
		a = "3号线";
	if ((t & (1 << 3)) != 0)
		a = "4号线";
	return a;
}

line_1* subway::find_line1(string l, string k)//一号线转乘查找
{
	int t = 0;
	int c = 0;
	double x = 0;
	line_1* h1 = head1;
	line_1* h2 = head1;
	for (t = 0; t <= (h2->i); h2 = h2->next, t++)
	{
		if (h2->metro_name == k)
		{
			c = h2->i;
			//cout << "乘车站位标为" << c << endl;
			break;
		}
	}
	for (t = 0; t <= (h1->i); t++)
	{
		if (h1->metro_transfering == l)
		{
			//cout << "换乘列车" << (h1->metro_transfering) << "换乘点为" << (h1->metro_name) << endl;
			if (x == 0)
			{
				//cout << "换乘点" << (h1->metro_name) << "位标为" << (h1->i) << endl;
				x = sqrt(((h1->i) - c)*((h1->i) - c));
				//cout << "换乘点与乘车点位标差为" << x << endl;
				h2 = h1;
			}
			else
			{				
				if (x > sqrt(((h1->i) - c) * ((h1->i) - c)))
				{
					//cout << "换乘点" << (h1->metro_name) << "位标为" << (h1->i) << endl;
					x = sqrt(((h1->i) - c) * ((h1->i) - c));
					//cout << "换乘点与乘车点位标差为" << x << endl;
					h2 = h1;
				}					
			}
		}
		h1 = h1->next;
	}
	return h2;
}

line_2* subway::find_line2(string l)//二号线转乘查找
{
	int t = 0;
	line_2* h2 = head2;

	for (t = 0; t <= (h2->i); t++)
	{
		if (h2->metro_transfering == l)
		{
			return h2;
		}
		else
		{
			h2 = h2->next;
		}
	}
}

line_3* subway::find_line3(string l)//三号线转乘查找
{
	int t = 0;
	line_3* h3 = head3;

	for (t = 0; t <= (h3->i); t++)
	{
		if (h3->metro_transfering == l)
		{
			return h3;
		}
		else
		{
			h3 = h3->next;
		}
	}
}

line_4* subway::find_line4(string l)//四号线转乘查找
{
	int t = 0;
	line_4* h4 = head4;

	for (t = 0; t <= (h4->i); t++)
	{
		if (h4->metro_transfering == l)
		{
			return h4;
		}
		else
		{
			h4 = h4->next;
		}
	}
}

void subway::TheMain()
{
	int t = 0;

	string subName_s;
	string subName_e;
	
	string a;
	string b;
	while (1)
	{
		cout << "输入起点:";
		cin >> subName_s;
		t = find_subway(subName_s);
		if (t == 0)
		{
			cout << "起点未找到" << endl;
		}
		else
		{
			a = judge_line(t);
			break;
		}
	}
	while (1)
	{
		cout << "输入终点:";
		cin >> subName_e;
		t = find_subway(subName_e);
		if (t == 0)
		{
			cout << "终点未找到" << endl;
		}
		else
		{
			b = judge_line(t);
			break;
		}		
	}
	//cout << "起点位于-" << a << endl;
	//cout << "终点位于-" << b << endl;
	if (a == "1号线")
	{
		cout << "换乘地点:" << find_line1(b, subName_s)->metro_name << endl;//一号线转乘查找
	}
		
	else if (a == "2号线")
	{
		cout << "换乘地点:" << find_line2(b)->metro_name << endl;//一号线转乘查找
	}
	else if (a == "3号线")
	{
		cout << "换乘地点:" << find_line3(b)->metro_name << endl;//一号线转乘查找
	}	
	else
	{
		cout << "换乘地点:" << find_line4(b)->metro_name << endl;//一号线转乘查找
	}
		
	
	
}
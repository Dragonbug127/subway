#include "line.h"

line_1* subway::readLine1()//��ȡ������վ��
{
	/*1���߶�ȡ*/
	line_1* h1 = NULL, * l1 = NULL, * l2 = NULL;
	string n;
	string t;
	int c = 0;
	ifstream linefile;	//����һ���ļ�
	linefile.open("E:/c++/QST/subway/line/1.txt");	//�򿪶�Ӧ�ļ�
	while (linefile)
	{
		linefile >> n >> t;	//�ļ����ݱ���
		c++;
		if (c == 1)	//��һλʱ
		{
			h1 = new line_1(n, t);	//��ʼ���ռ�
			h1->i = (c - 1);	//���浱ǰλ
			l1 = h1;	//������λ��ַ
			//cout << n << t << endl;
		}
		else
		{
			l2 = new line_1(n, t);	//��ʼ���ռ�
			l2->i = (c - 1);	//���浱ǰλ
			l1->next = l2;	//��һλ��nextָ�뱣�汾λ
			l2->last = l1;	//��λ��lastָ�뱣����һλ
			l1 = l2;	//���汾λ��ַ
		}
	}
	if (NULL != l2 ||  NULL != h1)
	{
		l1 = l2->last;	//������һλ��ַ
		l2 = l1;		//ָ��������һλ
		l2->next = h1;	//��һλָ��ͷ
		h1->last = l2;	//ͷ��һλָ��β
		linefile.close();	//�ر��ļ�
		c = 0;	//���c
		return h1;
	}
	else
	{
		cout << "��ȡ��Ч" << endl;
		return 0;
	}
}

line_2* subway::readLine2()//��ȡ������վ��
{
	/*2���߶�ȡ*/

	line_2* h1 = NULL, * l1 = NULL, * l2 = NULL;
	string n;
	string t;
	int c = 0;
	ifstream linefile;	//����һ���ļ�
	linefile.open("E:/c++/QST/subway/line/2.txt");	//�򿪶�Ӧ�ļ�
	while (linefile)
	{
		linefile >> n >> t;	//�ļ����ݱ���
		c++;
		if (c == 1)	//��һλʱ
		{
			h1 = new line_2(n, t);	//��ʼ���ռ�
			h1->i = (c - 1);	//���浱ǰλ
			l1 = h1;	//������λ��ַ
		}
		else
		{
			l2 = new line_2(n, t);	//��ʼ���ռ�
			l2->i = (c - 1);	//���浱ǰλ
			l1->next = l2;	//��һλ��nextָ�뱣�汾λ
			l2->last = l1;	//��λ��lastָ�뱣����һλ
			l1 = l2;	//���汾λ��ַ
		}
	}
	if (NULL != l2 || NULL != h1)
	{
		l1 = l2->last;	//������һλ��ַ
		l2 = l1;		//ָ��������һλ
		l2->next = h1;	//��һλָ��ͷ
		h1->last = l2;	//ͷ��һλָ��β
		linefile.close();	//�ر��ļ�
		c = 0;	//���c
		return h1;
	}
	else
	{
		cout << "��ȡ��Ч" << endl;
		return 0;
	}
}

line_3* subway::readLine3()//��ȡ������վ��
{
	/*3���߶�ȡ*/
	line_3* h1 = NULL, * l1 = NULL, * l2 = NULL;
	string n;
	string t;
	int c = 0;
	ifstream linefile;	//����һ���ļ�
	linefile.open("E:/c++/QST/subway/line/3.txt");	//�򿪶�Ӧ�ļ�
	while (linefile)
	{
		linefile >> n >> t;	//�ļ����ݱ���
		c++;
		if (c == 1)	//��һλʱ
		{
			h1 = new line_3(n, t);	//��ʼ���ռ�
			h1->i = (c - 1);	//���浱ǰλ
			l1 = h1;	//������λ��ַ
			//cout << n << t << endl;
		}
		else
		{
			l2 = new line_3(n, t);	//��ʼ���ռ�
			l2->i = (c - 1);	//���浱ǰλ
			l1->next = l2;	//��һλ��nextָ�뱣�汾λ
			l2->last = l1;	//��λ��lastָ�뱣����һλ
			l1 = l2;	//���汾λ��ַ
		}
	}
	if (NULL != l2 || NULL != h1)
	{
		l1 = l2->last;	//������һλ��ַ
		l2 = l1;		//ָ��������һλ
		l2->next = h1;	//��һλָ��ͷ
		h1->last = l2;	//ͷ��һλָ��β
		linefile.close();	//�ر��ļ�
		c = 0;	//���c
		return h1;
	}
	else
	{
		cout << "��ȡ��Ч" << endl;
		return 0;
	}
}

line_4* subway::readLine4()//��ȡ������վ��
{
	/*4���߶�ȡ*/

	line_4* h1 = NULL, * l1 = NULL, * l2 = NULL;
	string n;
	string t;
	int c = 0;
	ifstream linefile;	//����һ���ļ�
	linefile.open("E:/c++/QST/subway/line/4.txt");	//�򿪶�Ӧ�ļ�
	while (linefile)
	{
		linefile >> n >> t;	//�ļ����ݱ���
		c++;
		if (c == 1)	//��һλʱ
		{
			h1 = new line_4(n, t);	//��ʼ���ռ�
			h1->i = (c - 1);	//���浱ǰλ
			l1 = h1;	//������λ��ַ
		}
		else
		{
			l2 = new line_4(n, t);	//��ʼ���ռ�
			l2->i = (c - 1);	//���浱ǰλ
			l1->next = l2;	//��һλ��nextָ�뱣�汾λ
			l2->last = l1;	//��λ��lastָ�뱣����һλ
			l1 = l2;	//���汾λ��ַ
		}
	}
	if (NULL != l2 || NULL != h1)
	{
		l1 = l2->last;	//������һλ��ַ
		l2 = l1;		//ָ��������һλ
		l2->next = h1;	//��һλָ��ͷ
		h1->last = l2;	//ͷ��һλָ��β
		linefile.close();	//�ر��ļ�
		c = 0;	//���c
		return h1;
	}
	else
	{
		cout << "��ȡ��Ч" << endl;
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
	cout << "////////////////////1����////////////////////" << endl;
	for (t = 0; t <= (h1->i); t++)
	{
		h1->print();
		h1 = h1->next;
	}
	cout << "////////////////////2����////////////////////" << endl;
	for (t = 0; t <= (h2->i); t++)
	{
		h2->print();
		h2 = h2->next;
	}
	cout << "////////////////////3����////////////////////" << endl;
	for (t = 0; t <= (h3->i); t++)
	{
		h3->print();
		h3 = h3->next;
	}
	cout << "////////////////////4����////////////////////" << endl;
	for (t = 0; t <= (h4->i); t++)
	{
		h4->print();
		h4 = h4->next;
	}
}

int subway::find_subway(string name)
{
	int t = 0;	//ѭ���Ǵ�
	int location = 0; //���ڵ�����·
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
		a = "1����";
	if ((t & (1 << 1)) != 0)
		a = "2����";
	if ((t & (1 << 2)) != 0)
		a = "3����";
	if ((t & (1 << 3)) != 0)
		a = "4����";
	return a;
}

line_1* subway::find_line1(string l, string k)//һ����ת�˲���
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
			//cout << "�˳�վλ��Ϊ" << c << endl;
			break;
		}
	}
	for (t = 0; t <= (h1->i); t++)
	{
		if (h1->metro_transfering == l)
		{
			//cout << "�����г�" << (h1->metro_transfering) << "���˵�Ϊ" << (h1->metro_name) << endl;
			if (x == 0)
			{
				//cout << "���˵�" << (h1->metro_name) << "λ��Ϊ" << (h1->i) << endl;
				x = sqrt(((h1->i) - c)*((h1->i) - c));
				//cout << "���˵���˳���λ���Ϊ" << x << endl;
				h2 = h1;
			}
			else
			{				
				if (x > sqrt(((h1->i) - c) * ((h1->i) - c)))
				{
					//cout << "���˵�" << (h1->metro_name) << "λ��Ϊ" << (h1->i) << endl;
					x = sqrt(((h1->i) - c) * ((h1->i) - c));
					//cout << "���˵���˳���λ���Ϊ" << x << endl;
					h2 = h1;
				}					
			}
		}
		h1 = h1->next;
	}
	return h2;
}

line_2* subway::find_line2(string l)//������ת�˲���
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

line_3* subway::find_line3(string l)//������ת�˲���
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

line_4* subway::find_line4(string l)//�ĺ���ת�˲���
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
		cout << "�������:";
		cin >> subName_s;
		t = find_subway(subName_s);
		if (t == 0)
		{
			cout << "���δ�ҵ�" << endl;
		}
		else
		{
			a = judge_line(t);
			break;
		}
	}
	while (1)
	{
		cout << "�����յ�:";
		cin >> subName_e;
		t = find_subway(subName_e);
		if (t == 0)
		{
			cout << "�յ�δ�ҵ�" << endl;
		}
		else
		{
			b = judge_line(t);
			break;
		}		
	}
	//cout << "���λ��-" << a << endl;
	//cout << "�յ�λ��-" << b << endl;
	if (a == "1����")
	{
		cout << "���˵ص�:" << find_line1(b, subName_s)->metro_name << endl;//һ����ת�˲���
	}
		
	else if (a == "2����")
	{
		cout << "���˵ص�:" << find_line2(b)->metro_name << endl;//һ����ת�˲���
	}
	else if (a == "3����")
	{
		cout << "���˵ص�:" << find_line3(b)->metro_name << endl;//һ����ת�˲���
	}	
	else
	{
		cout << "���˵ص�:" << find_line4(b)->metro_name << endl;//һ����ת�˲���
	}
		
	
	
}
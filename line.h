
#ifndef DEBUG
#define DEBUG

#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
using namespace std;

class line_1					//1�������ݴ洢��
{
protected:
	string metro_name;			//վ����
	string metro_transfering;	//�ɻ��˳�վ
	friend class subway;		//�趨��Ԫ
public:
	line_1* last;				//��һ���ڵ�
	line_1* next;				//��һ���ڵ�
	int i;						//����λ

	//int find_m_n(string n);		//վ��ȽϺ���
	//int find_m_t(string n);		//����վ�ȽϺ���
	void print();

	line_1(string n, string t);	//���캯��
	~line_1();					//��������
};

class line_2					//2�������ݴ洢��
{
protected:
	string metro_name;			//վ����
	string metro_transfering;	//�ɻ��˳�վ
	friend class subway;		//�趨��Ԫ
public:
	line_2* last;				//��һ���ڵ�
	line_2* next;				//��һ���ڵ�
	int i;						//����λ
	void print();
	line_2(string n, string t);	//���캯��
	~line_2();					//��������
};
	
class line_3					//3�������ݴ洢��
{
protected:
	string metro_name;			//վ����
	string metro_transfering;	//�ɻ��˳�վ
	friend class subway;		//�趨��Ԫ
public:
	line_3* last;				//��һ���ڵ�
	line_3* next;				//��һ���ڵ�
	int i;						//����λ
	void print();
	line_3(string n, string t);	//���캯��
	~line_3();					//��������
};

class line_4					//4�������ݴ洢��
{
protected:
	string metro_name;			//վ����
	string metro_transfering;	//�ɻ��˳�վ
	friend class subway;		//�趨��Ԫ
public:
	line_4* last;				//��һ���ڵ�
	line_4* next;				//��һ���ڵ�
	int i;						//����λ
	void print();
	line_4(string n, string t);	//���캯��
	~line_4();					//��������
};

class subway					//�ܲ�����
{
protected:
	line_1* head1; ;				//һ����ͷָ��
	line_2* head2;				//������ͷָ��
	line_3* head3;				//������ͷָ��
	line_4* head4;				//�ĺ���ͷָ��
	line_1* readLine1();		//��ȡ1
	line_2* readLine2();		//��ȡ2
	line_3* readLine3();		//��ȡ3
	line_4* readLine4();		//��ȡ4
public:
	subway();					//���캯��
	~subway();					//��������
	void TheMain();
	int find_subway(string name);//վ����Һ���
	//auto find_transfer(auto*p);//���˲��Һ���
	string judge_line(int a);	//������·����
	line_1* find_line1(string l, string k);//һ����ת�˲���
	line_2* find_line2(string l);//������ת�˲���
	line_3* find_line3(string l);//������ת�˲���
	line_4* find_line4(string l);//�ĺ���ת�˲���

	void print();				//�鿴���
};

#endif // DEBUG

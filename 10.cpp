#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};


void structPrn(namecard temp) {
	cout << endl;
	cout << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email;
	cout << endl;
}

void structInput(namecard* pTemp) {
	cout << "�̸��� �Է��ϼ���=>";
	cin >> pTemp->name;
	cout << "������ �Է��ϼ���=>";
	cin >> pTemp->job;
	cout << "����ó�� �Է��ϼ���=>";
	cin >> pTemp->tel;
	cout << "�̸����� �Է��ϼ���=>";
	cin >> pTemp->email;
	cout << endl;
}

void structInput(namecard &temp) {
	cout << "�̸��� �Է��ϼ���=>";
	cin >> temp.name;
	cout << "������ �Է��ϼ���=>";
	cin >> temp.job;
	cout << "����ó�� �Է��ϼ���=>";
	cin >> temp.tel;
	cout << "�̸����� �Է��ϼ���=>";
	cin >> temp.email;
	cout << endl;
}

void structInputPrn88() {
	namecard p, q, w;

	structInput(p);
	structInput(q);
	structInput(w);

	cout << "  �̸�\t ����\t\t ����ó \t �̸���" << endl;;
	cout << "================================================" << endl;

	structPrn(p);
	structPrn(q);
	structPrn(w);
	
	cout << "================================================" << endl;
	cout << endl;
}

union u_data {
	char ch;
	int num;
};

enum COLOR{RED,GREEN,BLUE,WHITE,BLACK};
struct sungjuck {
	char no[8];
	char name[16]; // �й��� �̸�
	int kor, eng, mat, tot; // ����, ���� ���� ����, ����
	double ave; // ���
	//char level; // ����
	//int grade; // ���
};
typedef struct sungjuck SJ;

//struct sungjuck {
//	char no[8];
//	char name[16];
//	int kor;
//	int eng;
//	int mat;
//	int tot;
//	double ave;
//	//char level;
//	//int grade;
//};
//
//typedef struct sungjuck SJ;

//SJ add(char *o, char *a, int k, int e, int m) {
//	SJ tm;
//	strcpy(tm.no,o);
//	strcpy(tm.name, a);
//	tm.kor = k;
//	tm.eng = e;
//	tm.mat = m;
//	tm.tot = tm.kor + tm.eng + tm.mat;
//	tm.ave = tm.tot / 3;
//	return tm;
//
//}
//
//void add(char* o, char* a, int k, int e, int m) {
//	SJ tm;
//	strcpy(tm.no, o);
//	strcpy(tm.name, a);
//	tm.kor = k;
//	tm.eng = e;
//	tm.mat = m;
//	tm.tot = tm.kor + tm.eng + tm.mat;
//	tm.ave = tm.tot / 3;
//
//	cout << "  �й�\t�̸� \t���� \t ���� \t���� \t���� \t���" << endl;;
//
//	cout << "-----------------------------------------------------------" << endl;
//	cout << tm.no << "\t" << tm.name << "\t" << tm.kor << "\t" << tm.eng << "\t" << tm.mat;
//
//	cout << "\t" << tm.tot << "\t" << tm.ave << "\t" << endl;
//}

void main() {
	char qwer;
	cout << "##8-6" << endl;
	namecard x = { "������", "ġ���ǻ�", "356-0868","eldy@naver.com" };
	namecard y = { "������", "�����̳�", "345-0876","onejee@naver.com" };
	namecard* p;
	p = &x;
	cout << "  �̸�\t ����\t\t ����ó \t �̸���" << endl;;
	cout <<"================================================"<< endl;
	cout << (*p).name << "\t" << (*p).job << "\t" << (*p).tel << "\t" << (*p).email << endl;

	p = &y;
	cout << p->name << "\t" << p->job << "\t" << p->tel << "\t" << p->email << endl;
	cout << "================================================" << endl;

	cout << "sizeof(x) =>" << sizeof(x) << endl;
	cout << "sizeof(p) =>" << sizeof(p) << endl;
	

	cout << "����Ϸ��� �ƹ�Ű�� �����ÿ�";
	cin >> qwer;

	cout<< endl;

	cout << "##8-7" << endl;
	namecard a, b, c;

	structInput(&a);
	structInput(&b);
	structInput(&c);

	cout << "  �̸�\t ����\t\t ����ó \t �̸���" << endl;;
	cout << "================================================" << endl;

	structPrn(a);
	structPrn(b);
	structPrn(c);
	cout << endl;
	cout << "================================================" << endl;
	cout << "����Ϸ��� �ƹ�Ű�� �����ÿ�";
	cin >> qwer;
	cout << endl;

	cout << "##8-8" << endl;

	structInputPrn88();
	cout << "����Ϸ��� �ƹ�Ű�� �����ÿ�";
	cin >> qwer;
	cout << endl;

	cout << "##8-9" << endl;
	namecard r[3] = { { "������", "MCSE��������", "418-9876","greentour@naver.com" },
					{ "������", "��������", "551-6986","hk@naver.com" },
					 { "�赿��", "��ȹA���븮", "318-3961","ds@naver.com" } };

	cout << "  �̸�\t ����\t\t ����ó \t �̸���" << endl;;
	cout << "================================================" << endl;

	for (int i = 0; i < 3; i++) {
		cout << r[i].name << "\t" << r[i].job << "\t" << r[i].tel << "\t" << r[i].email << endl;
	}
	cout << "================================================" << endl;
	cout << "����Ϸ��� �ƹ�Ű�� �����ÿ�";
	cin >> qwer;
	cout << endl;

	cout << "##8-10" << endl;
	u_data test;
	cout << " sizeof(u_data)\t: " << sizeof(u_data) << " byte \n";
	cout << " &test	\t: " << (int)&test << endl;
	cout << "&test.ch		\t: " << (int)&test.ch << endl;
	cout << "&test.num\t: " << (int)&test.num << endl;
	cout << "����Ϸ��� �ƹ�Ű�� �����ÿ�";
	cin >> qwer;
	cout << endl;

	cout << "##8-11" << endl;
	u_data test_811;
	test_811.num = 0x12345678;
	cout << " test.ch = " << hex << (int)test_811.ch << endl;
	cout << " test.num = " << hex << test_811.num << endl;
	cout << "����Ϸ��� �ƹ�Ű�� �����ÿ�";
	cin >> qwer;
	cout << endl;

	cout << "##8-12" << endl;
	enum COLOR tes;
	tes = BLUE;
	cout << "test =" << tes<< endl << endl;
	cout << "RED = " << RED << endl;
	cout << "GREEN = " << GREEN << endl;
	cout << "BLUE = " << BLUE << endl;
	cout << "WHITE = " << WHITE << endl;
	cout << "BLACK = " << BLACK << endl;
	cout << endl;

	cout << "##8-13" << endl;
	cout << "test =" << tes << endl << endl;
	cout << "RED = " << RED << endl;
	cout << "GREEN = " << GREEN << endl;
	cout << "BLUE = " << BLUE << endl;
	cout << "WHITE = " << WHITE << endl;
	cout << "BLACK = " << BLACK << endl;
	
	tes = BLUE;
	cout << " test = " << tes << endl << endl;

	switch (tes) {
	case RED:
		cout << " ������ ����" << endl;
		break;
	case GREEN:
		cout << " �ʷϻ� ����" << endl;
		break;
	case BLUE:
		cout << " �Ķ��� ����" << endl;
		break;
	case WHITE:
		cout << " �Ͼ�� ����" << endl;
		break;
	case BLACK:
		cout << " ������ ����" << endl;
		break;
	}
	cout << "����Ϸ��� �ƹ�Ű�� �����ÿ�";
	cin >> qwer;
	cout << endl;

	cout << "##8-14" << endl;

	SJ s = { "2001029", "������", 85, 90, 95 };
	s.tot = s.kor + s.eng + s.mat;
	s.ave = s.tot / 3;

	cout << " �й� \t�̸� \t���� \t���� \t���� \t ���� \t ���"<<endl;
	cout << "------------------------------------------------------"<<endl;
	cout << s.no << "\t" << s.name << "\t" << s.kor << "\t"<< s.eng << "\t" << s.mat <<"\t"<<s.tot<<"\t"<<s.ave<< endl;
	

	cout << "�������� �ƹ�Ű�� �����ÿ�";
	cin >> qwer;
}
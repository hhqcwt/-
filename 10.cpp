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
	cout << "이름을 입력하세요=>";
	cin >> pTemp->name;
	cout << "직업을 입력하세요=>";
	cin >> pTemp->job;
	cout << "연락처를 입력하세요=>";
	cin >> pTemp->tel;
	cout << "이메일을 입력하세요=>";
	cin >> pTemp->email;
	cout << endl;
}

void structInput(namecard &temp) {
	cout << "이름을 입력하세요=>";
	cin >> temp.name;
	cout << "직업을 입력하세요=>";
	cin >> temp.job;
	cout << "연락처를 입력하세요=>";
	cin >> temp.tel;
	cout << "이메일을 입력하세요=>";
	cin >> temp.email;
	cout << endl;
}

void structInputPrn88() {
	namecard p, q, w;

	structInput(p);
	structInput(q);
	structInput(w);

	cout << "  이름\t 직업\t\t 연락처 \t 이메일" << endl;;
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
	char name[16]; // 학번과 이름
	int kor, eng, mat, tot; // 국어, 영어 수학 점수, 총점
	double ave; // 평균
	//char level; // 학점
	//int grade; // 등수
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
//	cout << "  학번\t이름 \t국어 \t 영어 \t수학 \t총점 \t평균" << endl;;
//
//	cout << "-----------------------------------------------------------" << endl;
//	cout << tm.no << "\t" << tm.name << "\t" << tm.kor << "\t" << tm.eng << "\t" << tm.mat;
//
//	cout << "\t" << tm.tot << "\t" << tm.ave << "\t" << endl;
//}

void main() {
	char qwer;
	cout << "##8-6" << endl;
	namecard x = { "전수빈", "치과의사", "356-0868","eldy@naver.com" };
	namecard y = { "전원지", "디자이너", "345-0876","onejee@naver.com" };
	namecard* p;
	p = &x;
	cout << "  이름\t 직업\t\t 연락처 \t 이메일" << endl;;
	cout <<"================================================"<< endl;
	cout << (*p).name << "\t" << (*p).job << "\t" << (*p).tel << "\t" << (*p).email << endl;

	p = &y;
	cout << p->name << "\t" << p->job << "\t" << p->tel << "\t" << p->email << endl;
	cout << "================================================" << endl;

	cout << "sizeof(x) =>" << sizeof(x) << endl;
	cout << "sizeof(p) =>" << sizeof(p) << endl;
	

	cout << "계속하려면 아무키나 누르시오";
	cin >> qwer;

	cout<< endl;

	cout << "##8-7" << endl;
	namecard a, b, c;

	structInput(&a);
	structInput(&b);
	structInput(&c);

	cout << "  이름\t 직업\t\t 연락처 \t 이메일" << endl;;
	cout << "================================================" << endl;

	structPrn(a);
	structPrn(b);
	structPrn(c);
	cout << endl;
	cout << "================================================" << endl;
	cout << "계속하려면 아무키나 누르시오";
	cin >> qwer;
	cout << endl;

	cout << "##8-8" << endl;

	structInputPrn88();
	cout << "계속하려면 아무키나 누르시오";
	cin >> qwer;
	cout << endl;

	cout << "##8-9" << endl;
	namecard r[3] = { { "김주현", "MCSE전문강사", "418-9876","greentour@naver.com" },
					{ "박혜경", "웹마스터", "551-6986","hk@naver.com" },
					 { "김동식", "기획A팀대리", "318-3961","ds@naver.com" } };

	cout << "  이름\t 직업\t\t 연락처 \t 이메일" << endl;;
	cout << "================================================" << endl;

	for (int i = 0; i < 3; i++) {
		cout << r[i].name << "\t" << r[i].job << "\t" << r[i].tel << "\t" << r[i].email << endl;
	}
	cout << "================================================" << endl;
	cout << "계속하려면 아무키나 누르시오";
	cin >> qwer;
	cout << endl;

	cout << "##8-10" << endl;
	u_data test;
	cout << " sizeof(u_data)\t: " << sizeof(u_data) << " byte \n";
	cout << " &test	\t: " << (int)&test << endl;
	cout << "&test.ch		\t: " << (int)&test.ch << endl;
	cout << "&test.num\t: " << (int)&test.num << endl;
	cout << "계속하려면 아무키나 누르시오";
	cin >> qwer;
	cout << endl;

	cout << "##8-11" << endl;
	u_data test_811;
	test_811.num = 0x12345678;
	cout << " test.ch = " << hex << (int)test_811.ch << endl;
	cout << " test.num = " << hex << test_811.num << endl;
	cout << "계속하려면 아무키나 누르시오";
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
		cout << " 빨간색 선택" << endl;
		break;
	case GREEN:
		cout << " 초록색 선택" << endl;
		break;
	case BLUE:
		cout << " 파란색 선택" << endl;
		break;
	case WHITE:
		cout << " 하얀색 선택" << endl;
		break;
	case BLACK:
		cout << " 검정색 선택" << endl;
		break;
	}
	cout << "계속하려면 아무키나 누르시오";
	cin >> qwer;
	cout << endl;

	cout << "##8-14" << endl;

	SJ s = { "2001029", "이진규", 85, 90, 95 };
	s.tot = s.kor + s.eng + s.mat;
	s.ave = s.tot / 3;

	cout << " 학번 \t이름 \t국어 \t영어 \t수학 \t 총점 \t 평균"<<endl;
	cout << "------------------------------------------------------"<<endl;
	cout << s.no << "\t" << s.name << "\t" << s.kor << "\t"<< s.eng << "\t" << s.mat <<"\t"<<s.tot<<"\t"<<s.ave<< endl;
	

	cout << "끝내려면 아무키나 누르시오";
	cin >> qwer;
}
#include <iostream>
using namespace std;
void print_string(char** pptr, int n) {
	for (int i = 0; i < n; i++) {
		cout << pptr[i] << endl;
	}
}
void(*pf)(void);
void one() {
	cout << " one" << endl;
}
void two() {
	cout << " two" << endl;
}
void three() {
	cout << " three" << endl;
}

struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

void structPrn(namecard temp) {
	cout << endl;
	cout << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email << endl;
}

namecard structInput() {
	namecard temp;
	cout << endl;
	cout << "이름을 입력하세요=>" << endl;
	cin >> temp.name;
	cout << "직업을 입력하세요=>" << endl;
	cin >> temp.job;
	cout << "연락처을 입력하세요=>" << endl;
	cin >> temp.tel;
	cout << "이메일을 입력하세요=>" << endl;
	cin >> temp.email;

	return temp;
}

void main()
{
	cout << "##7-7" << endl;
	char* ptr[3] = { "rabbit", "tiger", "cow" };

	cout << "  &ptr[0]=" << (int)&ptr[0] << "\t  &ptr[1]=" << (int)&ptr[1] << "\t  &ptr[2]=" << (int)&ptr[2] << endl;

	cout << "  ptr[0]=" << (int)ptr[0] << "\t  ptr[1]=" << (int)ptr[1] << "\t  ptr[2]=" << (int)ptr[2] << endl<<endl;

	cout << "  ptr[0]=" << ptr[0] << "\t  ptr[1]=" <<ptr[1] << "\t  ptr[2]=" << ptr[2] << endl;

	cout << "  *ptr[0]=" << *ptr[0] << "\t  *ptr[1]=" << *ptr[1] << "\t  *ptr[2]=" << *ptr[2] << endl << endl;

	cout << "##7-8" << endl;
	print_string(ptr, 3);
	cout << endl;

	cout << "##7-9" << endl;
	pf = one;
	pf();
	pf = two;
	pf();
	pf = three;
	pf();
	cout << endl;

	cout << "##7-10" << endl;
	int num;
	while (1) {
		cout << "0부터 3사이의 숫자를 입력하되 끝내려면 0입력=>";
		cin >> num;
		switch (num) {
		case 0:
			cout << " 종료" << endl;
			goto NEXT;
		case 1:
			pf = one;
			break;
		case 2:
			pf = two;
			break;
		case 3:
			pf = three;
			break;
		}
		pf();
	}
	cout << endl;
NEXT:
	cout << "##8-1" << endl;
	struct namecard man;

	cout << " 이름을 입력하세요=>";
	cin >> man.name;
	cout << " 직업을 입력하세요=>";
	cin >> man.job;
	cout << " 연락처을 입력하세요=>";
	cin >> man.tel;
	cout << " 이메일을 입력하세요=>";
	cin >> man.email;

	cout << endl;
	cout << "입력받은 데이터를 출력합니다." << endl;
	cout << "이름 \t 직업 \t 연락처 \t 이메일"<<endl;
	cout << "========================================="<<endl;
	cout << "man.name" << "\t " << man.job << "\t " << man.tel << "\t " << man.email << endl;
	cout << "=========================================" << endl;
	cout << "sizeof(namecard) = > "<<sizeof(namecard) << endl;
	cout << "구조체 변수의 메모리 사이즈=>" << sizeof(namecard) << endl;
	cout << endl;

	cout << "##8-2" << endl;
	namecard x = { "김주현", "MCSE전문강사", "418-9876","greentour@naver.com" };
	namecard y = { "박혜경", "웹마스터", "551-6986","hk@naver.com" };
	namecard z = { "김동식", "기획A팀대리", "318-3961","ds@naver.com" };

	cout << "이름 \t 직업 \t 연락처 \t 이메일" << endl;
	cout << "=========================================" << endl;
	cout << "x.name" << "\t " << x.job << "\t " << x.tel << "\t " << x.email << endl;
	cout << "y.name" << "\t " << y.job << "\t " << y.tel << "\t " << y.email << endl;
	cout << "z.name" << "\t " << z.job << "\t " << z.tel << "\t " << z.email << endl;
	cout << "=========================================" << endl;
	cout << endl;

	cout << "##8-3" << endl;
	namecard p = { "김주현", "MCSE전문강사", "418-9876","freentour@naver.com" };
	namecard q;
	q = p;
	cout << "\t\t 이름 \t 직업 \t 연락처 \t 이메일" << endl;

	cout << "\t\t=========================================" << endl;
	cout << "<구조체 변수 x>";
	cout << "\t" << p.name << "\t" << p.job << "\t" << p.tel << "\t" << p.email << endl;
	cout << "<구조체 변수 y>";
	cout << "\t" << q.name << "\t" << q.job << "\t" << q.tel << "\t" << q.email << endl;
	cout << endl;

	cout << "##8-4" << endl;
	structPrn(x);
	structPrn(y);
	structPrn(z);
	cout << endl;
	cout << "=========================================" << endl;

	cout << "##8-5" << endl;
	namecard a, b, c;
	a = structInput();
	b = structInput();
	c = structInput();
	cout << endl;
	cout << "이름 \t 직업 \t 연락처 \t 이메일" << endl;
	cout << "=========================================" << endl;
	structPrn(a);
	structPrn(b);
	structPrn(c);
	cout << "=========================================" << endl;

	cout << endl;
	system("pause");
}
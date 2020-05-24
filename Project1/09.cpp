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
	cout << "�̸��� �Է��ϼ���=>" << endl;
	cin >> temp.name;
	cout << "������ �Է��ϼ���=>" << endl;
	cin >> temp.job;
	cout << "����ó�� �Է��ϼ���=>" << endl;
	cin >> temp.tel;
	cout << "�̸����� �Է��ϼ���=>" << endl;
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
		cout << "0���� 3������ ���ڸ� �Է��ϵ� �������� 0�Է�=>";
		cin >> num;
		switch (num) {
		case 0:
			cout << " ����" << endl;
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

	cout << " �̸��� �Է��ϼ���=>";
	cin >> man.name;
	cout << " ������ �Է��ϼ���=>";
	cin >> man.job;
	cout << " ����ó�� �Է��ϼ���=>";
	cin >> man.tel;
	cout << " �̸����� �Է��ϼ���=>";
	cin >> man.email;

	cout << endl;
	cout << "�Է¹��� �����͸� ����մϴ�." << endl;
	cout << "�̸� \t ���� \t ����ó \t �̸���"<<endl;
	cout << "========================================="<<endl;
	cout << "man.name" << "\t " << man.job << "\t " << man.tel << "\t " << man.email << endl;
	cout << "=========================================" << endl;
	cout << "sizeof(namecard) = > "<<sizeof(namecard) << endl;
	cout << "����ü ������ �޸� ������=>" << sizeof(namecard) << endl;
	cout << endl;

	cout << "##8-2" << endl;
	namecard x = { "������", "MCSE��������", "418-9876","greentour@naver.com" };
	namecard y = { "������", "��������", "551-6986","hk@naver.com" };
	namecard z = { "�赿��", "��ȹA���븮", "318-3961","ds@naver.com" };

	cout << "�̸� \t ���� \t ����ó \t �̸���" << endl;
	cout << "=========================================" << endl;
	cout << "x.name" << "\t " << x.job << "\t " << x.tel << "\t " << x.email << endl;
	cout << "y.name" << "\t " << y.job << "\t " << y.tel << "\t " << y.email << endl;
	cout << "z.name" << "\t " << z.job << "\t " << z.tel << "\t " << z.email << endl;
	cout << "=========================================" << endl;
	cout << endl;

	cout << "##8-3" << endl;
	namecard p = { "������", "MCSE��������", "418-9876","freentour@naver.com" };
	namecard q;
	q = p;
	cout << "\t\t �̸� \t ���� \t ����ó \t �̸���" << endl;

	cout << "\t\t=========================================" << endl;
	cout << "<����ü ���� x>";
	cout << "\t" << p.name << "\t" << p.job << "\t" << p.tel << "\t" << p.email << endl;
	cout << "<����ü ���� y>";
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
	cout << "�̸� \t ���� \t ����ó \t �̸���" << endl;
	cout << "=========================================" << endl;
	structPrn(a);
	structPrn(b);
	structPrn(c);
	cout << "=========================================" << endl;

	cout << endl;
	system("pause");
}
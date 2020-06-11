#include <iostream>
using namespace std;
void in() {
	int qwer;
	cout << "다음으로 넘어가려면 아무키나 누르시오";
	cin >> qwer;
}
void printstr(char* the_string) { cout << the_string << endl; }

void printstr(char the_char, int repeat_cnt) {
	for (int i = 0; i < repeat_cnt; i++)
		cout << the_char;
	cout << endl;
}

class Complex {
private:
	int real;
	int image;
public:
	void SetComplex();
	void ShowComplex();
	void SetReal(int r);
	void SetImage(int i);
	void ShowComplex_04();
	void ShowComplex_05() const;
	Complex();
	Complex(int r, int i);
	~Complex();
};
Complex::~Complex() {
	cout << "소멸자가 호출된다." << endl;
}
Complex::Complex() {
	real = 5;
	image = 20;
}
Complex::Complex(int r, int i) {
	if (r == 0)
		real = 0;
	else
		real = r;
	if (i == 0)
		image = i;
	else
		image = i;
}
void Complex::SetComplex() {
	real = 2;
	image = 5;
}

void Complex::ShowComplex() { cout << "(" << real << "+" << image << "i )" << endl; }

void Complex::SetReal(int r) { real = r; }
void Complex::SetImage(int i) { image = i; }
inline void Complex :: ShowComplex_04() { cout << "(" << real << " + " << image << "i )" << endl; }
void Complex::ShowComplex_05() const { cout << "(" << real << " + " << image << "i)" << endl; }
int myabs(int num) {
	if (num < 0)
		num = -num;
	return num;
}
double fmyabs(double num) {
	if (num < 0)
		num = -num;
	return num;
}
long int lmyabs(long int num) {
	if (num < 0)
		num = -num;
	return num;
}

int abs(int num) {
	if (num < 0)
		num = -num;
	return num;
}

double abs_(double num) {
	if (num < 0)
		num = -num;
	return num;
}

long int abs__(long int num) {
	if (num < 0)
		num = -num;
	return num;
}

void print(int x, int y, int z) { cout << x << " " << y << " " << z << endl; }
void print(int x, int y) { cout << x << " " << y << endl; }
void print(int x) { cout << x << endl; }
void print_10(int x = 0, int y = 0, int z = 0) { cout << x << " " << y << " " << z << endl; }

void go10_1() {
	cout << "##10-1" << endl;
	Complex x, y;

	x.SetComplex();
	x.ShowComplex();
	y.SetComplex();
	y.ShowComplex();
	in();
	cout << endl;
	cout << endl;
}

void go10_2() {
	cout << "##10-2" << endl;
	Complex x2;
	//x2.real = 5;
	//x2.image = 10;
	x2.ShowComplex();
	in();
	cout << endl;
	cout << endl;
}

void go10_3() {
	cout << "##10-3" << endl;
	Complex x;
	x.SetReal(5);
	x.SetImage(10);
	x.ShowComplex();
	in();
	cout << endl;
	cout << endl;
}

void go10_4() {
	cout << "##10-4" << endl;
	Complex x;
	x.SetComplex();
	x.ShowComplex_04();
	in();
	cout << endl;
	cout << endl;
}

void go10_5() {
	cout << "##10-5" << endl;
	Complex x;
	x.SetComplex();
	x.ShowComplex_05();
	in();
	cout << endl;
	cout << endl;

}

void go10_6() {
	cout << "##10-6" << endl;

	//printstr("I'm star");
	cout << "I'm star"<<endl;
	printstr('a', 3);
	in();
	cout << endl;
	cout << endl;
}
void go10_7() {
	cout << "##10-7" << endl;
	int a = -10;
	cout << a << "의 절댓값을-> " << myabs(a) << endl;

	double b = -3.4;
	cout << b << "의 절댓값은-> " << fmyabs(b) << endl;

	long int c = 20L;
	cout << c << "의 절댓값은-> " << lmyabs(c) << endl;
	in();
	cout << endl;
	cout << endl;
}


void go10_8() {
	cout << "##10-8" << endl;

	int a = -10;
	cout << a << "의 절댓값을-> " << abs(a) << endl;

	double b = -3.4;
	cout << b << "의 절댓값은-> " << abs_(b) << endl;

	long int c = 20L;
	cout << c << "의 절댓값은-> " << abs__(c) << endl;
	in();

}

void go10_9() {
	cout << "##10-9" << endl;
	print(10, 20, 30);
	print(10, 20);
	print(10);
	in();

}

void go10_10() {
	cout << "##10-10" << endl;
	print_10(10, 20, 30);
	print_10(10, 20);
	print_10(10);
	print_10();
	in();
	cout << endl;
}

void go10_11() {
	cout << "##10-11" << endl;
	Complex x;
	x.ShowComplex();
	in();
	cout << endl;
	cout << endl;
}

void go10_12() {
	cout << "##10-12" << endl;
	Complex x(10, 20);
	Complex y(30, 40);
	x.ShowComplex_05();
	y.ShowComplex_05();
	in();
	cout << endl;
	cout << endl;
}

void go10_13() {
	cout << "##10-13" << endl;
	Complex x(10, 20);
	Complex y(30, 40);
	Complex z(0,0);
	x.ShowComplex_05();
	y.ShowComplex_05();
	z.ShowComplex_05();
	in();
	cout << endl;
	cout << endl;
}

void go10_14() {
	cout << "##10-14" << endl;
	Complex x(10, 20);
	Complex y(30, 0);
	Complex z(0, 0);
	x.ShowComplex_05();
	y.ShowComplex_05();
	z.ShowComplex_05();
	in();
	cout << endl;
	cout << endl;
}

void go10_15() {
	cout << "##10-15" << endl;
	Complex x(10, 20);
	Complex y(30, 0);
	Complex z(0, 0);
	x.ShowComplex_05();
	y.ShowComplex_05();
	z.ShowComplex_05();
	in();
	cout << endl;
	cout << endl;
}

void go10_16() {
	cout << "##10-16" << endl;
	Complex x(10, 20);
	Complex y(30,0);
	Complex z(0,0);
	x.ShowComplex_05();
	y.ShowComplex_05();
	z.ShowComplex_05();

	in();
	cout << endl;
	cout << endl;
}
void main() {

	go10_1();
	cout << endl;
	cout << endl;
	go10_2();
	cout << endl;
	cout << endl;
	go10_3(); 
	cout << endl;
	cout << endl;
	go10_4();
	cout << endl;
	cout << endl;
	go10_5();
	cout << endl;
	cout << endl;
	go10_6();
	cout << endl;
	cout << endl;
	go10_7();
	cout << endl;
	cout << endl;
	go10_8();
	cout << endl;
	cout << endl;
	go10_9();
	cout << endl;
	cout << endl;
	go10_10();
	cout << endl;
	cout << endl;
	go10_11();
	cout << endl;
	cout << endl;
	go10_12();
	cout << endl;
	cout << endl;
	go10_13();
	cout << endl;
	cout << endl;
	go10_14();
	cout << endl;
	cout << endl;
	go10_15();
	cout << endl;
	cout << endl;
	go10_16();
	cout << endl;
	cout << endl;
}
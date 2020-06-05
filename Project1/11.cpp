#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#define PI 3.141592
#define SQUARE1(x) x*x
#define SQUARE2(x) ((x)*(x))
#define add1(a,b) a+b
#define MAX 20
#define SIZE 10
//#define "my.h"

void ex9_01() {
	int r = 5;
	double area;
	area = r * r * PI;
	cout << "area = " << area << endl;
}

void ex9_02() {
	int a = 5, res;
	res = SQUARE1(a + 2);
	cout << "SQUARE1(a+2) =>" << res << endl;

	res = 100 / SQUARE1(a);
	cout << "100SQUARE1(a) =>" << res << endl;
}

void ex9_03() {
	int a = 5, res;
	res = SQUARE2(a + 2);
	cout << "SQUARE2(a+2) =>" << res << endl;

	res = 100 / SQUARE2(a);
	cout << "100/SQUARE2(a) =>" << res << endl;
}

inline int add2(int a, int b) { return a + b; }
int add3(int a, int b) { return a + b; }
void ex9_04() {
	int result;
	result = 2 * add1(10, 20);
	cout << "macro 함수 =>" << result << endl;
	result = 2 * add2(10, 20);
	cout << "inline 함수 =>" << result << endl;
	result = 2 * add3(10, 20);
	cout << "일반 함수=> " << result << endl;
}


void ex9_05() {
	int size;

#if MAX>100
	size = 100;
#elif MAX>10
	size = 10;
#else
	size = 0;
#endif

	cout << "size=" << size << endl;
}
#define _MYDEBUG 10

#ifdef _MYDEBUG
void sub() { cout << " debug" << endl; }
#endif

//#ifdef _MYDEBUG
//void sub() { cout << "release" << endl; }
//#endif
void ex9_06() {
	sub();
}

void ex9_07() {
	int i, j;
	i = SIZE;

#ifdef SIZE
#undef SIZE
#define SIZE 20
#endif

	j = SIZE;
	cout << "i=" << i << ", j=" << j << endl;
}

double area(int r) {
	double area = r * r * PI;
	return area;
}
void ex9_08() {
	int a;
	double res;
	a = 5;
	res = area(a);
	cout << "area => " << res << endl;
	cout << "PI=> " << PI << endl;
}

void main() {
	int qwer;
	cout << "##9-1" << endl;
	ex9_01();

	cout << "계속하려면 아무키나 누르시오";
	cin >> qwer;

	cout << endl;

	cout << "##9-2" << endl;
	ex9_02();

	cout << "계속하려면 아무키나 누르시오";
	cin >> qwer;
	cout << endl;
	cout << endl;

	cout << "##9-3" << endl;
	ex9_03();

	cout << "계속하려면 아무키나 누르시오";
	cin >> qwer;
	cout << endl;
	cout << endl;

	cout << "##9-4" << endl;
	ex9_04();

	cout << "계속하려면 아무키나 누르시오";
	cin >> qwer;
	cout << endl;
	cout << endl;

	cout << "##9-5" << endl;
	ex9_05();

	cout << "계속하려면 아무키나 누르시오";
	cin >> qwer;
	cout << endl;
	cout << endl;

	cout << "##9-6" << endl;
	ex9_06();

	cout << "계속하려면 아무키나 누르시오";
	cin >> qwer;
	cout << endl;
	cout << endl;

	cout << "##9-7" << endl;
	ex9_07();

	cout << "계속하려면 아무키나 누르시오";
	cin >> qwer;
	cout << endl;
	cout << endl;

	cout << "##9-8" << endl;
	ex9_08();

	system("pause");
}
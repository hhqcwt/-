#include <iostream>
using namespace std;

int main() {
	int a[5] = { 10,20,30,40,50 };
	int i;
	int* p;
	p = a;

	cout << "####9" << endl;
	cout << "   a: " << a << "\t  &a[0]: " << &a[0] << endl;
	cout << " a+1: " << a + 1 << "\t  &a[1]: " << &a[1] << endl;
	cout << " a+2: " << a + 2 << "\t  &a[3]: " << &a[2] << endl;
	cout << " a+3: " << a + 3 << "\t  &a[3]: " << &a[3] << endl;
	cout << " a+4: " << a + 4 << "\t  &a[4]: " << &a[4] << endl;
	cout << endl;
	cout << endl;


	cout << "####10" << endl;
	cout << " a[0]: " << a[0] << "\t  *a: " << *a << endl;
	cout << " a[1]: " << a[1] << "\t  *a+1: " << *a + 1 << endl;
	cout << " a[1]: " << a[1] << "\t  *(a+1): " << *(a + 1) << endl;
	cout << endl;
	cout << endl;

	cout << "####11" << endl;
	for (i = 0; i < 5; i++) {
		cout << "a+1: " << a + i << "\t &a[i]: " << &a[i] << endl;
	}
	cout << "-----------------------------------------------" << endl;
	for (i = 0; i < 5; i++) {
		cout << " *(a+i): " << *(a + 1) << "\t\t a[i]:" << a[i] << endl;
	}
	cout << endl;
	cout << endl;

	cout << "####12" << endl;
	cout << "*p: " << *p;
	cout << "\t   a[0]: " << a[0] << endl;

	cout << "*(p+1): " << *(p + 1);
	cout << "\t   a[1]: " << a[1] << endl;

	cout << "*(p+2): " << *(p + 2);
	cout << "\t   a[2]: " << a[2] << endl;
	cout << endl;
	cout << endl;


	cout << "####13" << endl;
	int w = 5;
	int* q;
	int** qq;
	q = &w;
	qq = &q;
	cout << "	q:" << q << "	\t &w: " << &w << endl;
	cout << "	*q:" << *q << "	\t \t&w: " << w << endl;
	cout << "	 qq:" << qq << "	\t &q: " << &q << endl;
	cout << "	*qq:" << *qq << "	\t *q: " << *q << endl;
	cout << " **qq: " << **qq << "	\t \t *q: " << *q << endl;
	cout << endl;
	cout << endl;

	cout << "####14" << endl;
	int a1 = 10, b1 = 20, c1 = 30;
	int* p1[3] = { &a1,&b1,&c1 };

	cout << "\n	*p[0]: " << *p1[0];
	cout << "\t	*p[1]: " << *p1[1];
	cout << "\t	*p[2]: " << *p1[2];
	cout << endl;

	cout << "\n	p[0][0]: " << p1[0][0];
	cout << "\t	p[1][0]: " << p1[1][0];
	cout << "\t	p[2][0]: " << p1[2][0];
	cout << endl;
	cout << endl;

	cout << "####15" << endl;
	int a2[5] = { 10,20,30,40,50 };
	int b2[5] = { 60,70,80,90,100 };
	int c2[5] = { 110,120,130,140,150 };

	int* p2[3] = { a2,b2,c2 };

	cout << ">> 각 1차원 배열의 첫번째 원소 출력" << endl;
	cout << p2[0][0] << "\t" << p2[1][0] << "\t" << p2[2][0] << endl;

	cout << ">> 각 1차원 배열의 두번째 원소 출력" << endl;
	cout << p2[0][1] << "\t" << p2[1][1] << "\t" << p2[2][1] << endl;
	cout << endl;
}
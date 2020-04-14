#include <iostream>
using namespace std;

//1
void show()
{
	cout << "************************" << endl;
	return;
}

void main()
{
	cout << "함수 호출하기 전" << endl;
	show(); // 함수의 호출
	cout << "함수 호출한 후" << endl;
}

//2
void sum(int a, int b) // a, b는 형식 매개변수
{
	cout << " a + b = " << a + b << endl;
}

void main()
{
	int a = 10, b = 20;
	sum(a, b); // 변수 a, b는 실 매개변수
	sum(4, 5); // 상수(값) 4, 5 역시 실 매개변수
}

//3
int myAbs(int x)
{
	int y; // 절댓값을 저장할 변수
	if (x < 0) // 절댓값을 구하는 공식
		y = -x;
	else
		y = x;
	return y; // 구해진 결과값을 return문으로 반환한다.
}

void main()
{
	int a, result;
	cout << "정수값 하나를 입력하세요. -> ";
	cin >> a;
	result = myAbs(a); // 함수의 결과값을 변수 result에 대입한다.
	cout << " 구한 절댓값은 " << result << " 이다." << endl;
}

//4
int max(int, int); // 함수의 선언
void main()
{
	int a, b; // 정수형으로 변수 2개를 선언한다.
	cout << " 정수값을 두 개 입력하세요. => ";
	cin >> a >> b;
	// 함수의 선언
	cout << " 최댓값 => " << max(a, b) << endl;
}

int max(int x, int y) // 함수의 정의
{
	return ((x > y) ? x : y); // return문에 조건 연산자
}


//5
void main()
{
	int a = 10;
	cout << " a = " << a << endl;
	{
		int a = 20;
		cout << " a = " << a << endl;
		{
			a += 20;
			cout << " a = " << a << endl;
		}
		cout << " a = " << a << endl;
	}
	cout << " a = " << a << endl;
}

//6
void fun();
int a; // 외부변수 a
void main()
{
	int a = 20; // 지역변수 a
	cout << " main a => " << a;
	fun();
	cout << endl;
	cout << " main a => " << a << endl;
}

void fun()
{
	cout << endl;
	cout << "fun a => " << a;
	a = a + 100;
	cout << endl;
	cout << "fun a => " << a;
}

//7
void sub();
void main()
{
	for (int i = 1; i <= 5; i++) {
		cout << i << "========>" << endl;
		sub();
	}
}

void sub()
{
	int a = 0;
	static int b = 0;
	a += 100;
	b += 100;
	cout << " auto a = " << a << endl;
	cout << " static b = " << b << endl;
}


//8
long int power(register int x, register int n);
void main()
{
	int a = 2, b = 5;
	cout << a << " ^ " << b << " => " << power(a, b) << endl;
}

long int power(register int x, register int n)
{
	register int k;
	long int p = 1;
	for (k = 1; k <= n; k++)
		p *= x;
	return p;
}

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
	cout << "�Լ� ȣ���ϱ� ��" << endl;
	show(); // �Լ��� ȣ��
	cout << "�Լ� ȣ���� ��" << endl;
}

//2
void sum(int a, int b) // a, b�� ���� �Ű�����
{
	cout << " a + b = " << a + b << endl;
}

void main()
{
	int a = 10, b = 20;
	sum(a, b); // ���� a, b�� �� �Ű�����
	sum(4, 5); // ���(��) 4, 5 ���� �� �Ű�����
}

//3
int myAbs(int x)
{
	int y; // ������ ������ ����
	if (x < 0) // ������ ���ϴ� ����
		y = -x;
	else
		y = x;
	return y; // ������ ������� return������ ��ȯ�Ѵ�.
}

void main()
{
	int a, result;
	cout << "������ �ϳ��� �Է��ϼ���. -> ";
	cin >> a;
	result = myAbs(a); // �Լ��� ������� ���� result�� �����Ѵ�.
	cout << " ���� ������ " << result << " �̴�." << endl;
}

//4
int max(int, int); // �Լ��� ����
void main()
{
	int a, b; // ���������� ���� 2���� �����Ѵ�.
	cout << " �������� �� �� �Է��ϼ���. => ";
	cin >> a >> b;
	// �Լ��� ����
	cout << " �ִ� => " << max(a, b) << endl;
}

int max(int x, int y) // �Լ��� ����
{
	return ((x > y) ? x : y); // return���� ���� ������
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
int a; // �ܺκ��� a
void main()
{
	int a = 20; // �������� a
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

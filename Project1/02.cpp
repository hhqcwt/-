#include <iostream>
#include <iomanip>
using namespace std;
void main() {
	//24
	int c = 1;
	int d = 2;
	double res02;
	res02 = c / d;
	cout << c << "/" << d << "=" << res02 << endl;
	res02 = (double)c / (double)d;
	cout << c << "/" << d << "=" << res02 << endl;
}





//23
//	 double a=1.0;
//	 double b=2.0; 
//	 // int res01 = a % b; 
//	 int res01 = (int)a % (int)b; 
//	 cout<<a<<"%"<<b<<"="<<res01<<endl; 
//}

//22
	/* int a=10;
	 float b=3.5f;
	 char c='A';
	 cout<<"<====== Data Type ========>"<<endl;
	 cout<<"int size : "<<sizeof(int)<<endl;
	 cout<<"long size : "<<sizeof(long)<<endl;
	 cout<<"float size : "<<sizeof(float)<<endl;
	 cout<<"double size : "<<sizeof(double)<<endl;
	 cout<<"char size : "<<sizeof(char)<<endl;
	 cout<<"<====== Variable ========>"<<endl;
	 cout<<"int size : "<<sizeof(a)<<endl;
	 cout<<"float size : "<<sizeof(b)<<endl;
	 cout<<"char size : "<<sizeof(c)<<endl;
	 cout<<"<======= Constant ========>"<<endl;
	 cout<<"int size : "<<sizeof(23)<<endl;
	 cout<<"double size : "<<sizeof(3.5)<<endl;
	 cout<<"float size : "<<sizeof(3.5f)<<endl;
	 cout<<"char size : "<<sizeof('A')<<endl;
	 cout<<"string size : "<<sizeof("Apple")<<endl;
}*/


//21
// int a , b , c; 
// int max; 
// cout << " �� ���� �Է��ϼ��� : ";
// cin >> a >> b >> c;
// max = (a > b) ? a : b; 
// max = (max > c) ? max : c;
// cout << " ���� ū ���� : " << max <<endl;
//}
//

//20

//	 short int x = 15; 
//	 cout << "x << 2 : " << (x << 2) << endl;
//	 cout << "x >> 2 : " << (x >> 2) << endl;
//}

//19
//	short x = 10, y = 6 ; 
//	cout << " x & y : " << (x & y) << endl;
//	cout << " x | y : " << (x | y) << endl;
//	cout << " x ^ y : " << (x ^ y) << endl;
//	cout << " ~x : " << (~x) << endl;
//}

//18
//	 int a , b = 2;
//	 a = 10; a += b; cout << " a = " << a<< endl;
//	 a = 10; a -= b; cout << " a = " << a<< endl;
//	 a = 10; a *= b; cout << " a = " << a<< endl;
//	 a = 10; a /= b; cout << " a = " << a << endl;
//	 a = 10; a %= b; cout << " a = " << a << endl;
//}


//17
//	 int a=10, b=10; 
//	 cout<<" Before =======> a : "<<a<<" b : "<<b<<endl;
//	 cout<<" a++ ========> a : "<<a++<<endl;
//	 cout<<" ++b ========> b : "<<++b<<endl;
//	 cout<<" After ========> a : "<<a<<" b : "<<b<<endl;
//}



//16
	/* int num=85;
	 bool istrue;
	 istrue = ! num == 70;
	 cout<< " ! num == 70 = " << istrue << endl;
	 istrue = ! (num == 70);
	 cout<< " ! (num == 70) = " << istrue << endl;
	 istrue = num >= 80 && num < 90;
	 cout<< " num >= 80 && num < 90 = " << istrue << endl;
	 num=60;
	 istrue = num >= 80 && num < 90;
	 cout<< " num >= 80 && num < 90 = " << istrue << endl;
	 istrue = num >= 90 || num < 80;
	 cout<< " num >= 90 || num < 80 = " << istrue << endl;
	 num=85;
	 istrue = num >= 90 || num < 80;
	 cout<< " num >= 90 || num < 80 = " << istrue << endl;
}*/

//15
	//int num=85;

	//bool istrue;
	//istrue=true&&true;
	//cout<<"true&&true="<<istrue<<"\n";

	//istrue=true&&false;
	//cout<<"true&&false="<<istrue<<"\n";

	//istrue=false||false;
	//cout<<"false||false="<<istrue<<"\n";

	//istrue=true||false;
	//cout<<"true||false="<<istrue<<"\n";

	//istrue=!true;
	//cout<<"!true="<<istrue<<"\n";

//}

//14
	/*int a=3, b=5, c=3;
	bool istrue;
	istrue=a>b;
	cout<<"a>b��"<<istrue<<"\n";

	istrue=a*b<b+c;
	cout<<"a*b<b+c��"<<istrue<<"\n";

	istrue=a*b==b*c;
	cout<<"a*b==b*c��"<<istrue<<"\n";
}*/

//13
//	cout<<2/4<<"\n";
//	cout<<2/4.0<<"\n";
//	cout<<2.0/4.0<<"\n";
//	cout<<2%4<<"\n";
//	//cout<<2.0%4.0<<"\n";
//}

//12
//	int a=8, b=3;
//	cout<<a<<" + "<<b<<" = "<<a+b<<"\n";
//	cout<<a<<" - "<<b<<" = "<<a-b<<"\n";
//	cout<<a<<" * "<<b<<" = "<<a*b<<"\n";
//	cout<<a<<" / "<<b<<" = "<<a/b<<"\n";
//	cout<<a<<" % "<<b<<" = "<<a%b<<"\n";
//}



//11
//	bool b1=true, b2=false;
//	cout<<" b1(true) = "<<b1<<"\n";
//	cout<<" b2(true) = "<<b2<<"\n";
//	bool c=-1, d=0;
//	cout<<" c(-1) = "<<c<<"\n";
//	cout<<" d(0) = "<<d<<"\n";
//}


//10
//	char flowers1[5]="rose";
//	char flowers2[6]={'l','i','l','a','c'};
//	char flowers3[]="tulip";
//
//	cout<<flowers1<<"\n";
//	cout<<flowers2<<"\n";
//	cout<<flowers3<<"\n";
//
//	cout<<strlen(flowers1)<<"\n"; //���ڿ��� ����
//	cout<<strlen(flowers3)<<"\n"; //�迭�� ũ��
//}




//9
	/*cout<<" \\n ==> "<<"\n"<<"���ʹ�������"<<endl;
	cout<<" \\t ==> "<<"\t"<<"�Ǵ�������"<<endl;
	cout<<" \\b ==> "<<"123"<<"\b"<<"45"<<endl;
	cout<<" \\\\ ==> "<<"\\"<<endl;
	cout<<" \\\ ==> "<<"\""<<endl;
	cout<<" \\\ ==> "<<"\""<<endl;
}*/



//8
//�ҹ��ڿ� �빮�ڴ� �ƽ�Ű�ڵ� ���� 32���̰� ��
	//cout<<'a'-'A'<<"\n";
//�ҹ��ڿ��� 32�� ���� �빮�ڰ� ������
	//cout<<(char)('a'-32)<<"\n";
//}


//7
	/*cout<<'A'<<" ";
	cout<<(int) 'A'<<"\n";
	cout<<'a'<<" ";
	cout<<(int) 'a'<<"\n";
	cout<<'0'<<" ";
	cout<<(int) '0'<<"\n";
	cout<<"--------------------\n";
	cout<<'A'+1<<" ";
	cout<<(char)('A'+1)<<"\n";
}*/



//6
//	double pi=3.141592;
//	int r=5;
//	double area;
//	area=r*r*pi;
//	cout<<"�������� "<<r<<"�� ���� ������ "<<area<<"�̴�.\n";
//}




//5
//	float a=123456.789123;
//	double b=123456.789123;
//
//	//�Ǽ��� �Ҽ��� ���·� ����ϰڴٴ� �ǹ�
//	cout<<setiosflags(ios::fixed);
//	cout<<a<<endl;
//	cout<<b<<endl;
//}



//4
//	short m_short=4000;
//	cout<<"m_short=40000�϶� m_short="<<m_short<<"\n";
//	m_short=2000;
//	cout<<"m_short=20000�϶� m_short="<<m_short<<"\n";
//	int m_int=40000;
//	cout<<"m_int=40000�϶� m_int="<<m_int<<"\n";
//}

//3
//	int unit,count,total; //���� ����
//	cout<<"��ǰ�� �ܰ��� �Է��Ͻÿ�->";
//	cin>>unit;
//	cout<<"������ ������ �Է��Ͻÿ�->";
//	cin>>count;
//	total=unit*count; //Ű���忡�� �Է¹��� ���̷� �ѱݾ� ���ϱ�
//	cout<<" �� �ݾ�: "<<total<<"\n";
//}

//2
//	int unit; //���� ����
//	int count;
//	int total;
//	unit=500; //�Ѱ��� 500������
//	count=5;  //5���� ������
//	total=unit*count; //�� �ݾ� ���ϱ�
//	cout<<" �� �ݾ�: "<<total<<"\n";
//}

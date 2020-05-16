#include <iostream>
using namespace std;
#define ROW 3
#define COL 4

void prn(int *pa,int size){
	for(int i=0;i<size;i++){
		cout<<"\t"<<*(pa+i);
	}
	cout<<endl;
}

void prn_2(int a[],int size){
	for(int i=0;i<size;i++){
		cout<<"\t"<<a[i];
	}
	cout<<endl;
	cout<<" prn함수 sizeof(a): "<<sizeof(a)<<endl;
}

void prn_3(int (*p)[COL]){
	int r,c;
	for(int r=0;r<ROW;r++){
		for(c=0;c<COL;c++){
		cout<<"*(*(a+"<<r<<")+"<<c<<")):"<<*(*(p+r)+c)<<"   ";
		}
	}
	cout<<endl;
}
void prn_4(int p[][4]){
	int r,c;
	for(int r=0;r<ROW;r++){
		for(c=0;c<COL;c++){
		cout<<"a["<<r<<"]["<<c<<"]: "<<p[r][c]<<"\t";
		}
		cout<<endl;
	}
	cout<<"prn sizeof(p) = "<<sizeof(p)<<endl;
}

void prn_5(const int *p, int size)
{
	for(int i=0;i<5;i++)
		cout<<p[i]<<"\t";
	cout<<endl;

}
void main(){

	cout<<"#6-16"<<endl;
	int a[ROW][COL]={{90,85,95,100},
						{75,95,80,90},
						{90,80,70,60}
	};
	cout<<"2차원 배열에 저장된 원소들의 주소\n";
	cout<<"--------------------------------------------------------------\n";
	for(int r=0;r<ROW;r++){
		cout<<"\n"<<r<<"행 ";
		for(int c=0;c<COL;c++){
			cout<<"\t "<<&a[r][c];
		}
	}
	cout<<endl;
	cout<<endl;
	cout<<"#6-17"<<endl;

	cout<<"2차원 배열의 각 행의 첫번째 열의 주소\n";
	cout<<"--------------------------------------------------------------\n";
	for(int r=0;r<ROW;r++){
		cout<<"\n"<<r<<"행 ";
		cout<<"\t a["<<r<<"]="<<a[r];
		cout<<"\t &a["<<r<<"][0]="<<&a[r][0];
	}
	cout<<"\n\n각 행의 첫번째 열에 위치한 원소\n";
	cout<<"--------------------------------------------------------------\n";
	cout<<" *a[0]="<<*a[0]<<"\t*a[1]="<<*a[1]<<"\t*a[2]="<<*a[2]<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"#6-18"<<endl;
	cout<<"    a:"<<a<<endl;
	cout<<"   *a:"<<a<<endl;
	cout<<"  **a:"<<a<<endl;
	cout<<"--------------------------------------------------------------\n";
	cout<<"  a+1:"<<a+1<<endl;
	cout<<"  a+2:"<<a+2<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"#6-19"<<endl;
	/*int p,q;
	for(p=0;p<ROW;p++){
		for(q=0;q<COL;q++){
			cout<<"*(*(a+"<<p<< ")+"<<q<<")):"<<*(*(a+p)+q<<"\t";
		}
	}*/
	int r, c;
    for (r = 0; r < ROW; r++)
    {
        for (c = 0; c < COL; c++)
        {
            cout << "((a+" << r << ")+" << c << ")):" << ((a + r) + c) << " \t";
        }
        cout << "\n";
    }
    
    cout << "\n";
	cout<<endl;
	cout<<endl;
	cout<<"#7-01"<<endl;
	int b[5]={10,20,30,40,50};
	prn(b,5);
	cout<<endl;
	cout<<endl;
	cout<<"#7-02"<<endl;
	prn_2(b,5);
	cout<<"main함수 sizeof(a): "<<sizeof(a)<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"#7-03"<<endl;
	prn_3(a);
	cout<<endl;
	cout<<endl;
	cout<<"#7-04"<<endl;
	cout<<"main sizeof(a) = "<<sizeof(a)<<endl;
	prn_4(a);
	cout<<endl;
	cout<<endl;
	cout<<"#7-05"<<endl;
	int size=sizeof(b)/sizeof(b[0]);

	prn_5(b,size);
	cout<<endl;
	cout<<endl;
	cout<<"#7-06"<<endl;
	char str[256]="Apple";
	char *ptr="Banana";
	cout<<" str="<<(int)str<<" \t str="<<str<<endl;
	cout<<" str="<<(int)str<<" \t str="<<str<<endl;

	ptr="Orange";
	cout<<"  ptr= "<<(int)ptr<<"\t ptr="<<ptr<<endl;
	cout<<endl;
	cout<<endl;
	system("pause");
}
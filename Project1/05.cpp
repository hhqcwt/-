#include <iostream>
using namespace std;
void main(){
	int num;
	cout<<"����� �� �Է�: ";
	cin>>num;

	if(num>1&&num<10)
	{
		for(int i=0;i<10;i++)
			cout<<num<<"*"<<i<<"="<<num*i<<endl;
	}
}
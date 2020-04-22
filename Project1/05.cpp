#include <iostream>
using namespace std;
void main(){
	int num;
	cout<<"출력할 단 입력: ";
	cin>>num;

	if(num>1&&num<10)
	{
		for(int i=0;i<10;i++)
			cout<<num<<"*"<<i<<"="<<num*i<<endl;
	}
}
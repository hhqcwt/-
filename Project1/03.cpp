#include <iostream> 
using namespace std;
void main() {

	//19
	int i = 0;
	while (true) {
		cout << "\t" << ++i;
		if (i % 10 == 0)
			goto exit_while;
	}
exit_while:
	cout << "\n >> ------------- The End ------------- " << endl;

	//18
	//int i=0;
	//int total=0;
	//// ���� ����
	//for( ; ; ) {
	//	i++;
	//	total+=i;
	//	if(total > 100) // ���� 100�� �Ѱ� �Ǹ�
	//		break; // for���� �����.
	//}
	//	cout << "���� ���ʷ� 100�� ���� ���� �ڿ��� : " << i<<endl; 
	//	cout << " �� �� : " << total<<endl; 

	//17
	 /*int i=0;
	 for( ; ; ){
		 cout << "\t" << ++i;
		 if(i%10==0)
		 break;
	 }
	 cout << "\n >> ------------- The End ------------- <<"<<endl; */


	 //16
	 /*int i=0;
	 for( ; ; ){
		 cout << "\t" << ++i;
	 }
	 cout << "\n >> ------------- The End ------------- <<"<<endl; */

	 //15
	 //int total=0; 
	 //int i;
	 //for(i=1;i<=10;i++) { 
	 //	if(i%2==0) // i�� 2�� ����� ��������
	 //		continue; // �Ʒ� ������� ���õǰ� for���� �������� �ٽ� 10 // ���ư��� �����Ѵ�.
	 //	total+=i; 
	 //} 
	 //cout<<"i�� "<< i <<" �� �� for���� ���"<<endl; 
	 //	cout<<"total : "<<total<<endl;
	 //14
	 //int total=0;
	 //int i;
	 // for(i=1; i<=10; i++) {
	 //	 if(i%2==0) // I�� 2�� ����� ��������
	 //		 break; // for���� ���
	 //	 total+=i; 
	 //} 
	 // cout<<"i��"<< i <<" �� �� for���� ���"<<endl; 


	 //13
	 /*int num;
	 do{
		 cout<<"���� �Է��ϼ���(0�� �Է��ϸ� ����) : ";
		 cin>>num;
		 cout<< num <<"�� �Է��ϼ̱���."<<endl;
	 }while(num!=0);
	 cout<< num << "�� �Է��Ͽ��⿡ �ݺ����� ����Ǿ����ϴ�."<<endl;
 */
 //12
 /*int num;
 cout<<"���� �Է��ϼ���(0�� �Է��ϸ� ����) : ";
 cin>>num;
  while(num!=0) {
	  cout<< num <<"�� �Է��ϼ̱���."<<endl;
	  cout<<"���� �Է��ϼ���(0�� �Է��ϸ� ����) : ";
	  cin>>num;
  }
  cout<< num <<"�� �Է��Ͽ��⿡ �ݺ����� ����Ǿ����ϴ�."<<endl;
 */
 //11
//int total=0;
//int i=1; // for���� �ʱ�Ŀ� �ش�
//while(i<=10) { // for���� ���ǽĿ� �ش�
//total+=i;
//i++; // for���� �����Ŀ� �ش�
//} 
//cout<<"1-10������ ���� "<<total<<endl;

//10
 //for(int dan=2; dan<=9; dan++) // �ٱ� for��
	// for(int j=1; j<10; j++) // ���� for��
	//	 cout << dan << " * " << j <<" = " << dan*j <<endl; 

//9
 //int dan;
 //cout<<"���ϴ� ���� �Է��ϼ��� -> ";
 //cin>>dan; // �� �Է¹ޱ� 
 //for(int j=1 ;j<10; j++) 
 //cout<< dan << " * " <<j<<" = " << dan*j <<endl; 

//8
/* int total=0;
 for(int i=1;i<=5;i+=2) {
	 cout<<"i = "<<i<<endl;
	 total=total+i;
	 cout<<"total = "<<total<<endl;
 }
 cout<<"1���� 5������ Ȧ�� �հ�� "<< total <<"�Դϴ�"<<endl;
*/
//7
 //int total=0; // �ݵ�� �ʱ�ȭ�ؾ� �Ѵ�.
 //int i;
 //for(i=1;i<=5;i++) {
	// cout<<"i ="<<i<<endl;
	// total+=i; // total=total+i;
	// cout<<"total ="<<total<<endl;
 //}
 //cout<<"1���� " << i-1 <<" ������ �հ�� " << total <<"�Դϴ�"<<endl; 

//6
//	int score; // �Է¹��� ������ ������ ����
//	char grade; // ���� ������ ������ ����
//	cout<<"������ �Է��ϼ��� -> ";
//	cin>>score;
//	switch(score/10) { // ��
//	case 10 : cout<< "A�����Դϴ�."<<endl;
//	case 9 : cout<< "A�����Դϴ�."<<endl;
//	case 8 : cout<< "B�����Դϴ�."<<endl;
//	case 7 : cout<< "C�����Դϴ�."<<endl; 
//	case 6 : cout<< "D�����Դϴ�."<<endl; 
//	default : cout<< "F�����Դϴ�."<<endl; 
//} 

	//5

	 //int score; // �Է¹��� ������ ������ ����
	 //char grade; // ���� ������ ������ ����
	 //cout<<"������ �Է��ϼ��� -> ";
	 //cin>>score; 
	 //switch(score/10) { // ����� ������ ������ �����
	 //case 10 : grade='A'; break; 
	 //case 9 : grade='A'; break; 
	 //case 8 : grade='B'; break;
	 //case 7 : grade='C'; break; 
	 //case 6 : grade='D'; break;
	 //default : grade='F';
	 //} 
	 //cout<<"�Է��� ���� " <<score<<" �� "<<grade<<"�����Դϴ�."<<endl; 
	 //
	 //4

	 /*int i=200;
	 cout<<" i�� 300�̳�? ";
	 if(i==300)
		 cout<<"true"<<endl;
	 else
		 cout<<"false"<<endl;
	 cout<<" i�� 300�̳�? " ;
	 if(i=300)
		 cout<<"true"<<endl;
	 else
		 cout<<"false"<<endl; */

		 //3

		  //int score; // �Է¹��� ������ ������ ����
		  //char grade; // ���� ������ ������ ���� 
		  //cout<<"������ �Է��ϼ��� -> ";
		  //cin>>score;
		  //// ���� �˻�
		  //if(score>=90) // score�� 90�̻��̳�?
			 // grade='A'; // �����ϸ� grade='A'
		  //else if (score>=80) // �ƴϸ� score�� 80�̻��̳�?
			 // grade='B'; // �����ϸ� grade='B'
		  //else if (score>=70) // �ƴϸ� score�� 70�̻��̳�? 
			 // grade='C'; // �����ϸ� grade='C'
		  //else if (score>=60) // �ƴϸ� score�� 60�̻��̳�? 
			 // grade='D'; // �����ϸ� grade='D' 
		  //else // �ƴϸ�
			 // grade='F'; // grade='F' 
		  //cout<<"�Է��� ���� " <<score<<" �� "<<grade<<"�����Դϴ�."<<endl; 

		  //2
		 //int x;
		 //cout << " �������� �Է��ϼ��� -> "; 
		 //cin >> x;
		 //if(x % 2 == 1) // 2�� ������ �������� 1�̸� 
		 //	cout << " Ȧ����."<<endl; 
		 //else
		 //	cout << " ¦����."<<endl;


		 //1
		 //int x; 
		 //cout << " �������� �Է��ϼ��� -> ";
		 //cin >> x;
		 //if(x < 0) // ������ ��쿡�� 
		 //	x = -x; // ��ȣ ����
		 //cout << " ���� => " << x << endl; 
}
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
	//// 무한 루프
	//for( ; ; ) {
	//	i++;
	//	total+=i;
	//	if(total > 100) // 합이 100을 넘게 되면
	//		break; // for문을 벗어난다.
	//}
	//	cout << "합이 최초로 100을 넘을 때의 자연수 : " << i<<endl; 
	//	cout << " 그 합 : " << total<<endl; 

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
	 //	if(i%2==0) // i가 2로 나누어서 떨어지면
	 //		continue; // 아래 문장들은 무시되고 for문의 시작으로 다시 10 // 돌아가서 수행한다.
	 //	total+=i; 
	 //} 
	 //cout<<"i가 "<< i <<" 일 때 for문을 벗어남"<<endl; 
	 //	cout<<"total : "<<total<<endl;
	 //14
	 //int total=0;
	 //int i;
	 // for(i=1; i<=10; i++) {
	 //	 if(i%2==0) // I가 2로 나누어서 떨어지면
	 //		 break; // for문을 벗어남
	 //	 total+=i; 
	 //} 
	 // cout<<"i가"<< i <<" 일 때 for문을 벗어남"<<endl; 


	 //13
	 /*int num;
	 do{
		 cout<<"수를 입력하세요(0을 입력하면 종료) : ";
		 cin>>num;
		 cout<< num <<"를 입력하셨군요."<<endl;
	 }while(num!=0);
	 cout<< num << "을 입력하였기에 반복문이 종료되었습니다."<<endl;
 */
 //12
 /*int num;
 cout<<"수를 입력하세요(0을 입력하면 종료) : ";
 cin>>num;
  while(num!=0) {
	  cout<< num <<"를 입력하셨군요."<<endl;
	  cout<<"수를 입력하세요(0을 입력하면 종료) : ";
	  cin>>num;
  }
  cout<< num <<"을 입력하였기에 반복문이 종료되었습니다."<<endl;
 */
 //11
//int total=0;
//int i=1; // for문의 초기식에 해당
//while(i<=10) { // for문의 조건식에 해당
//total+=i;
//i++; // for문의 증감식에 해당
//} 
//cout<<"1-10까지의 합은 "<<total<<endl;

//10
 //for(int dan=2; dan<=9; dan++) // 바깥 for문
	// for(int j=1; j<10; j++) // 안쪽 for문
	//	 cout << dan << " * " << j <<" = " << dan*j <<endl; 

//9
 //int dan;
 //cout<<"원하는 단을 입력하세요 -> ";
 //cin>>dan; // 단 입력받기 
 //for(int j=1 ;j<10; j++) 
 //cout<< dan << " * " <<j<<" = " << dan*j <<endl; 

//8
/* int total=0;
 for(int i=1;i<=5;i+=2) {
	 cout<<"i = "<<i<<endl;
	 total=total+i;
	 cout<<"total = "<<total<<endl;
 }
 cout<<"1부터 5까지의 홀수 합계는 "<< total <<"입니다"<<endl;
*/
//7
 //int total=0; // 반드시 초기화해야 한다.
 //int i;
 //for(i=1;i<=5;i++) {
	// cout<<"i ="<<i<<endl;
	// total+=i; // total=total+i;
	// cout<<"total ="<<total<<endl;
 //}
 //cout<<"1부터 " << i-1 <<" 까지의 합계는 " << total <<"입니다"<<endl; 

//6
//	int score; // 입력받은 점수를 저장할 변수
//	char grade; // 구한 학점을 저장할 변수
//	cout<<"점수를 입력하세요 -> ";
//	cin>>score;
//	switch(score/10) { // 식
//	case 10 : cout<< "A학점입니다."<<endl;
//	case 9 : cout<< "A학점입니다."<<endl;
//	case 8 : cout<< "B학점입니다."<<endl;
//	case 7 : cout<< "C학점입니다."<<endl; 
//	case 6 : cout<< "D학점입니다."<<endl; 
//	default : cout<< "F학점입니다."<<endl; 
//} 

	//5

	 //int score; // 입력받은 점수를 저장할 변수
	 //char grade; // 구한 학점을 저장할 변수
	 //cout<<"점수를 입력하세요 -> ";
	 //cin>>score; 
	 //switch(score/10) { // 결과가 정수로 나오는 산술식
	 //case 10 : grade='A'; break; 
	 //case 9 : grade='A'; break; 
	 //case 8 : grade='B'; break;
	 //case 7 : grade='C'; break; 
	 //case 6 : grade='D'; break;
	 //default : grade='F';
	 //} 
	 //cout<<"입력한 점수 " <<score<<" 은 "<<grade<<"학점입니다."<<endl; 
	 //
	 //4

	 /*int i=200;
	 cout<<" i가 300이냐? ";
	 if(i==300)
		 cout<<"true"<<endl;
	 else
		 cout<<"false"<<endl;
	 cout<<" i가 300이냐? " ;
	 if(i=300)
		 cout<<"true"<<endl;
	 else
		 cout<<"false"<<endl; */

		 //3

		  //int score; // 입력받은 점수를 저장할 변수
		  //char grade; // 구한 학점을 저장할 변수 
		  //cout<<"점수를 입력하세요 -> ";
		  //cin>>score;
		  //// 조건 검사
		  //if(score>=90) // score가 90이상이냐?
			 // grade='A'; // 만족하면 grade='A'
		  //else if (score>=80) // 아니면 score가 80이상이냐?
			 // grade='B'; // 만족하면 grade='B'
		  //else if (score>=70) // 아니면 score가 70이상이냐? 
			 // grade='C'; // 만족하면 grade='C'
		  //else if (score>=60) // 아니면 score가 60이상이냐? 
			 // grade='D'; // 만족하면 grade='D' 
		  //else // 아니면
			 // grade='F'; // grade='F' 
		  //cout<<"입력한 점수 " <<score<<" 은 "<<grade<<"학점입니다."<<endl; 

		  //2
		 //int x;
		 //cout << " 정수값을 입력하세요 -> "; 
		 //cin >> x;
		 //if(x % 2 == 1) // 2로 나누어 나머지가 1이면 
		 //	cout << " 홀수다."<<endl; 
		 //else
		 //	cout << " 짝수다."<<endl;


		 //1
		 //int x; 
		 //cout << " 정수값을 입력하세요 -> ";
		 //cin >> x;
		 //if(x < 0) // 음수일 경우에만 
		 //	x = -x; // 부호 변경
		 //cout << " 절댓값 => " << x << endl; 
}
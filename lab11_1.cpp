#include<iostream>
using namespace std;

int main(){
	int N=0;
	char grade;
	int count[5]={};
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";

	do{
		cout << "Student [" << N+1 << "]: ";
		cin >> grade;
		if(grade=='A')
			count[0]++;
		else if(grade=='B')
			count[1]++;
		else if(grade=='C')
			count[2]++;
		else if(grade=='D')
			count[3]++;
		else if(grade=='F')
			count[4]++;
		else if(grade=='0')
			break;
		else cout << "Wrong input. Please input again.\n";

		N++;

	}while(grade!=0);

		cout << "In total ? students.\n";
		cout << "A = " << count[0] <<", ";
		cout << "B = " << count[1] <<", ";	
		cout << "C = " << count[2] <<", ";
		cout << "D = " << count[3] <<", ";
		cout << "F = " << count[4] <<", ";

	
	return 0;
}
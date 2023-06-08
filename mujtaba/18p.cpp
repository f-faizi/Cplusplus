#include<iostream>
using namespace std;
int main()
{
	int ahmad,ali,reza,amin,amir,grade;
	cout<<"nter five student grade"<<endl;
	cin>>ahmad>>ali>>reza>>amin>>grade;
	if(grade>95){
		cout<<"A";
	}
	else if(grade>90){
		cout<<"B";
	}
	else if(grade>85){
		cout<<"C";
	}
	else if(grade>80){
		cout<<"D";
	}
	else{
		cout<<"faild";
	}
}

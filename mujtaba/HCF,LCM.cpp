#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter first number"<<endl;
	cin>>a;
	cout<<"enter second number"<<endl;
	cin>>b;
	c=a*b;
	while(a!=b){
		if(a>b)
		a=a-b;
		else
		b=b-a;
		cout<<"HCF="<<a<<endl;
		cout<<"LCM="<<b<<endl;
		
	}
	
}


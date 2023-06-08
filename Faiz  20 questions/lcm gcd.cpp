#include<iostream>
	using namespace std;
		int main ()
		{
			while(true){
		
			int a,b,c;
			cout<<"enter first number"<<endl;
			cout<<"enter second number"<<endl;
			cin>>a>>b;
			
		   c=a*b;
		   while(a!=b){
		   	if(a>b)
		   	a=a-b;
		   	else
		   	b=b-a;
		   }
		   cout<<"HCF = "<<a<<endl;
		   cout<<"LCM = "<<c/a<<endl;
		   
		}
			}

#include<iostream>
	using namespace std;
		int main ()
		{ 
			int a,b,c;
			cout<<"enter number"<<endl;
			cin>>a>>b>>c;
			
			if(a>b && a>c){
				cout<<"a is grater then two numbers and ="<<a<<endl;
			} 
			if(b>a && b>c){
				cout<<"b is grater then two numbers and ="<<b<<endl;
			}
			if(c>a && c>b){
				cout<<"c is grater then two numbers and = "<<c<<endl;
			}
			if (a<b && a<c){
				cout<<"a is less then two numbers and = "<<a<<endl;
				
			}
			if (b<a && b<c){
				cout<<"b is less then two numbers and = "<<b<<endl;
				
			}
			if (c<a && c<b){
				cout<<"c is less then two numbers and = "<<c<<endl;
			}
		}

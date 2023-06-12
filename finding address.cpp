#include<iostream>
	using namespace std;
		int main()
		{
			int a=60;
			short b=67;
			float c=50.1;
			
			
			//creating pointer variable
			int *aa;
			short *bb;
			float *cc;
			
			//storing address to pointer variable
			aa=&a;
			bb=&b;
			cc=&c;
			
			cout<<"the address of aa is"<<aa<<endl;
			cout<<"the address of bb is"<<bb<<endl;
			cout<<"the address of cc is"<<cc<<endl;
			
			cout<<"the value of aa is"<<*aa<<endl;
			cout<<"the value of bb is"<<*bb<<endl;
			cout<<"the value of cc is"<<*cc<<endl;
			
			cout<<&a<<endl<<&b<<endl<<&c<<endl;
			
		}

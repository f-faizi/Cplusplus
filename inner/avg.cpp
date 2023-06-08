#include<iostream>
	using namespace std;
		int main ()
		{
			int marks,avg;
			cout<<"enter the marks"<<endl;
			cin>>marks;
			
			if(marks>40){
				cout<<"you have passed the exam"<<endl;
			}
			else{
				cout<<"you failed the exam"<<endl;
				
			}
			avg=marks/1;
			cout<<"your averge is = "<<avg<<endl<<endl;
		}

#include<iostream>
	using namespace std;
		int main ()
		{
			while(true){
				int marks;
				cout<<"enter student marks"<<endl;
				cin>>marks;
				
				if(marks>=90){
					cout<<"student got grade a"<<endl;
				}
				else if (marks>=80){
					cout<<"student got grade b"<<endl;
				}
				else if (marks>=70){
					cout<<"student got grade c"<<endl;
				}
				else if (marks>=50){
					cout<<"student got grade d"<<endl;
				}
				
				else {
				cout<<"student fails"<<endl;
			}
				
			}
		}

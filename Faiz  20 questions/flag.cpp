#include<iostream>
	using namespace std;
		int main ()
		{
			char a;
			cout<<"enter the any color of flag"<<endl;
			cin>>a;
			switch(a){
				case'g':
				cout<<"green "<<endl;
				break;
				
				case'G':
				cout<<"Green "<<endl;
				break;
				
				case'b':
				cout<<"black"<<endl;
				break;
				
				case'B':
				cout<<"Black"<<endl;
				break;
				
				case'r':
				cout<<"Red"<<endl;
				break;
				
				case'R':
				cout<<"red"<<endl;
				
				default:
					cout<<"invild character"<<endl;
					
			}
		}

#include<iostream>
using namespace std;
int main(){
	int name;
	cout<<"Which Computer You Want (DELL) , (HP) , (Apple) , (Compaq)"<<endl;
	cin>>name;
	switch(name){

	
	case'DELL':
	cout<<"Name = DELL"<<endl;
	cout<<"Color = Black , White , RED"<<endl;
	cout<<"Price = 20000-AF-";
	break;

case'HP':
		cout<<"Name = HP"<<endl;
	cout<<"Color = Black , White , RED"<<endl;
	cout<<"Price = 15000-AF-";
			break;

case'Apple':
	cout<<"Name = Apple"<<endl;
	cout<<"Color = Black , White , RED"<<endl;
	cout<<"Price = 60000-AF-";
	break;

case'Compaq':
	cout<<"Name = Compaq"<<endl;
	cout<<"Color = Black , White , RED"<<endl;
	cout<<"Price = 25000-AF-";
	break;

			default:
			 cout<<"You typed wrong"<<endl;

}
	}

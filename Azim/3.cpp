
#include<iostream>
using namespace std;
int main()
{
	int number,i=1,factorial=1;
	cout<<"enter apositibve number";
	cin>>number;
	while(i<=number){
		factorial*=i;
		++i;
	}
	cout<<"factoril of"<<number<<"="<<factorial;
}



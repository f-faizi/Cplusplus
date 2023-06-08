#include<iostream>
using namespace std;
int main()
{
	int x,y,temp,gcd;
	cout<<"enter two integer number"<<endl;
	cin>>x>>y;
	while(y!=0){
	temp=y;
	y=x%y;
	x=temp;
	}
	gcd=x;
	cout<<"\n GCD or HCF of given numbers:"<<gcd<<endl;
}

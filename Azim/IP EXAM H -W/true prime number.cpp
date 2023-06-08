#include<iostream>
using namespace std;
int main()
{
	int n;	

	bool flag=false;
	cout<<"please enter a number";
	cin>>n;
	
	
	for(int i=2;i<n;i++){
	if(n%i==0){
		flag = true;
		break;
	}
}
if(flag==false&&n>1){
	cout<<"number is prime number ";
}
else{
	cout<<"number is not prime number";
}
	return 0;
}

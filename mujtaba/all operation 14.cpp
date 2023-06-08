#include<iostream>
using namespace std;
int main()
{
	int l,u,x,i;
	cout<<"enter two number"<<endl;
	scanf("%d%d",&l,&u);
	for(x=l+1;x<=u-1;x++){
		for(i=2;i<x;i++)
		if(x%i==0)
		break;
		if(i==x)
		cout<<("%",x);
	}
}

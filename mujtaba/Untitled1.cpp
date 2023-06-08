#include<iostream>
using namespace std;
int main()
{
	int i,j,marks[2][1]={46,34};
	for(i=0;i<2;i++)
	{
	for(j=0;j<1;j++){
		cout<<marks[i][j]<<"\t"<<endl;
	}	

	  	cout<<"["<<i<<"]["<<j<<"]="<<marks[i][j]<<"\t"<<endl;
	}
	cout<<"\n";
	}	

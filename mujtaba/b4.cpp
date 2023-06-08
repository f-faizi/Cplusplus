#include<iostream>
using namespace std;
int main()
{
 int i,j,a[2][3]={{2,3},{1,2}};
for(i=0;i<2;i++){
	for( j=0;j<1;j++){
		cout<<a[i][j]<<endl;
	}
}

 
for(i=0;i<2;i++){
	for( j=0;j<1;j++){
		cout<<"["<<i<<"]["<<j<<"]"<<a[i][j]<<"\t"<<endl;
	}
}
}


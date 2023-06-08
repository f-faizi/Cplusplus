#include<iostream>
using namespace std;
int main()
{
	int n,m, a[4][3]={{5,6},{7,8},{2,4},{9,10}};
	for(n=0;n<4;n++){
		for(m=0;m<3;m++){
			cout<<a[n][m]<<endl;
		}
	}

for(n=0;n<4;n++){
		for(m=0;m<3;m++){
			cout<<"["<<n<<"]["<<m<<"]"<<a[n][m]<<endl;
		}
	}
}


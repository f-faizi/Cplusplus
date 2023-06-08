#include<iostream>
	using namespace std;
		int main ()
		{
			int a[6]={5,45,5,4,5,6};
			for(int i=0; i<6; i++){
				cout<<a[i]<<endl;
			}
			for(int i=0; i<6; i++){
				cout<<"["<<i<<"]"<<a[i];
			}
		}

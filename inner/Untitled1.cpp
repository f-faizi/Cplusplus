#include<iostream>
	using namespace std;
		int main(){
			int i=1,f=1,n;
			cout<<"enter any number"<<endl;
			cin>>n;
			while(i<=n){
				f=f*i;
				i++;
			}
			cout<<f;
		}

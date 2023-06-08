#include<iostream>
	using namespace std;
		int main(){
			int a[4][4]={{2,3,4,5},{3,4,5,6},{1,3,4,5},{1,2,3,4}};
			for(int q=0; q<=4; q++){
				for(int w=0; w<=4; w++){
					cout<<a[q][w]<<"\t";
					return 0;
				}
			}
		}

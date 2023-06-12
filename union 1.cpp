#include<iostream>
	using namespace std;
		union faizi
		{
			int withd=10;
			int height;
			void square()
			{
				int asq=withd+height;
				cout<<"the size of square"<<asq<<endl;
				
			}
		};
		int main ()
		{
			faizi faizullah;
			faizullah.square();
		}

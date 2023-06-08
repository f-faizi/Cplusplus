#include<iostream>
using namespace std;
		
		class base

	{
		public:
		string name="wali";
	};
	
	class sub: public base
	{
		public:
		string sname="ali";
		
		void show()
		{
			cout<<"the father name is "<<name<<endl;
			cout<<"the sun name is "<<sname<<endl;
		}
		
		
	};
	
	int main ()
	{
		sub f;
		f.show();
	}








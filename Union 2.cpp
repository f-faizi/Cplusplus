#include<iostream>
	using namespace std;
		union salary
		{
// salary one person is 5000 afg and the two months is = 10000.			
			int ali=10000;
			int khan;
			int wali;
			int abid;
			int karim;
			int jamal;
			int kamal;
			int wahab;
			int najib;
			int rahim;
			int faizi;
			int hameed;
			int hamid;
			int hasin;
			int rahima;
			int karima;
			int nagiba;
			int alima;
			int zahra;
			int zuhra;
			
			void square()
			{
				int asq=ali+khan+wali+abid+karim+jamal+kamal+wahab+najib+rahim+faizi+hameed+hamid+hasin+rahima+karima+nagiba+alima+zahra+zuhra;
				cout<<"The total salary of 20 persons  =  "<<asq<<endl;
				cout<<"enter"<<khan;
			}
		};
		int main ()
		{
			salary faizullah;
			faizullah.square();
		}

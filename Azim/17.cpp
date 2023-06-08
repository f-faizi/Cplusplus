#include<iostream>
	using namespace std;
		int main ()
		{
			int eng,it,ip,pashto,islamic,sum,avg;
			cout<<"enter marks of the subjects"<<endl;
			cin>>eng>>it>>ip>>pashto>>islamic;
			
			sum=eng+it+ip+pashto+islamic;
			cout<<"the sum of five subjects ="<<sum<<endl;
			
			avg=sum/5;
			cout<<"the avg of five subject ="<<avg<<endl;
		}

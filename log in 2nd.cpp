#include<iostream>
#include<string.h>
using namespace std;

struct student
{
	string name;
	string last_name;
	string password;
	string id;
	string email;
	string add;


	void get()
	{
		cout<<"\n<<<<<<<============="<<endl;
		cout<<"Enter your name please"<<endl;
		cin>>name;
		cout<<"\n<<<<<<<============="<<endl;
		cout<<"Enter your last name please"<<endl;
		cin>>last_name;
		cout<<"\n<<<<<<<============="<<endl;
		cout<<"Enter your password please"<<endl;
		cin>>password;
		cout<<"\n<<<<<<<============="<<endl;
		cout<<"Enter your ID please"<<endl;
		cin>>id;
		cout<<"\n<<<<<<<============="<<endl;
		cout<<"Enter your email please"<<endl;
		cin>>email;
		cout<<"\n<<<<<<<============="<<endl;
		cout<<"Enter your address please"<<endl;
		cin>>add;
	}

	void show()

	{
		cout<<"Student name is "<<name<<endl;
		cout<<"\n<<<<<<<<=================>>>>>>>>>>"<<endl;
		cout<<"Student last is "<<last_name<<endl;
		cout<<"\n<<<<<<<<=================>>>>>>>>>>"<<endl;
		cout<<"Student password is "<<password<<endl;
		cout<<"\n<<<<<<<<=================>>>>>>>>>>"<<endl;
		cout<<"Student ID is "<<id<<endl;
		cout<<"\n<<<<<<<<=================>>>>>>>>>>"<<endl;
		cout<<"Student Email is "<<email<<endl;
		cout<<"\n<<<<<<<<=================>>>>>>>>>>"<<endl;
		cout<<"Student Address is "<<add<<endl;

		}

};


		int main ()
		{


		student f1[7];
		f1[0].get();
		cout<<"========>>>>>>>>"<<endl<<endl;

		f1[1].get();
		cout<<"========>>>>>>>>"<<endl<<endl;

		f1[2].get();
		cout<<"========>>>>>>>>"<<endl<<endl;

		f1[3].get();
		cout<<"========>>>>>>>>"<<endl<<endl;

		f1[4].get();
		cout<<"========>>>>>>>>"<<endl<<endl;

		f1[5].get();
		cout<<"========>>>>>>>>"<<endl<<endl;

		f1[6].get();
		cout<<"========>>>>>>>>"<<endl<<endl;
	//	system("cls");

		string name="ahmad";
		string name1="faiz";
		string name2="usman";
		string name3="abdullah";
		string name4="janaga";
		string name5="hakim";
		string name6="hakam";
		string user;
		cout<<"Enter your name "<<endl;
		cin>>user;






		string pass="678";
		string pass1="abc";
		string pass2="#you";
		string pass3="&j7";
		string pass4="toyou";
		string pass5="thisthat";
		string pass6="howareyou";
		string i;
		cout<<"Enter your password "<<endl;
		cin>>i;






		if(user==name && i==pass){
//			system("cls");

		cout<<"you are sucessfully log in "<<endl<<endl<<endl;

		//f1[0].show();
		}



		else if(user==name1 && i==pass1)
		{
//		system("cls");
		cout<<"you are sucessfully log in "<<endl<<endl<<endl;
		//f1[1].show();
		}



		else if(user==name2 && i==pass2){
//			system("cls");
		cout<<"you are sucessfully log in "<<endl<<endl<<endl;
		//f1[2].show();
		}






		else if (user==name3 && i==pass3)
		{
//			system("cls");
		cout<<"you are sucessfully log in "<<endl<<endl<<endl;
		//f1[3].show();
		}



		else if (user==name4 && i==pass4){
//			system("cls");
		cout<<"you are sucessfully log in "<<endl<<endl<<endl;
		bool
		//f1[4].show();
//		}






		else if (user==name5 && i==pass5){
			system("cls");
		cout<<"you are sucessfully log in "<<endl<<endl<<endl;
		//f1[5].show();
		}





		else if (user==name6 && i==pass6){
			system("cls");
		cout<<"you are sucessfully log in "<<endl<<endl<<endl;
		//f1[6].show();
		}



+
		else{

		cout<<"Sorry you don't have any account "<<endl;
		}
	}

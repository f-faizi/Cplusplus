#include<iostream>
using namespace std;

struct student 
{
	string name;
	string last_name;
	string father;
	string id;
	string email;
	string add;
	
	
	void get()
	{
		
		cout<<"PLEASE, ENTER YOUR NAME "<<endl;
		cin>>name;
		cout<<"____________________________________________________________"<<endl;
		cout<<"PLEASE, ENTER YOUR LAST NAME "<<endl;
		cin>>last_name;
		cout<<"____________________________________________________________"<<endl;
		cout<<"PLEASE, YOUR FATHER NAME"<<endl;
		cin>>father;
		cout<<"____________________________________________________________"<<endl;
		cout<<"PLEASE, ENTER YOUR ID "<<endl;
		cin>>id;
		cout<<"____________________________________________________________"<<endl;
		cout<<"PLEASE, ENTER YOUR EMAIL "<<endl;
		cin>>email;
		cout<<"____________________________________________________________"<<endl;
		cout<<"PLEASE, ENTER YOUR HOME ADDRESS "<<endl;
		cin>>add;
	}
	
	void show()
	
	{
		cout<<"YOUR NAME IS					\t"<<name<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"YOUR LAST NAME IS				\t"<<last_name<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"YOUR FATHER'S NAME IS				\t"<<father<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"YOUR ID IS					\t"<<id<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"YOUR EMAIL IS					\t"<<email<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"YOUR ADDRESS IS					\t"<<add<<endl;

		}	
	
};

		
		int main ()
		
	
		
		{
			system("color f3");
			cout<<"THIS IS JUST FOR STUDENTS. IF YOU ARE STUDENT ENTER yes ELSE no"<<endl<<endl;
			cout<<"((((((((------------------------))))))))))"<<endl;
			string res;
			cin>>res;
			if(res=="yes"){
			
			
			
					
		student f1[7];
		f1[0].get();
		cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl<<endl;
		
		system("cls");
		system("color  C0");
		cout<<"FOR LOGING IN PLEASE ENTER YOUR NAME AHD PASSWORD "<<endl;
	
		string name="ahmad";
		string name1="faiz";
		string name2="usman";
		string name3="abdullah";
		string name4="janaga";
		string name5="hakim";
		string name6="hakam";
		string user;
		cout<<"ENTER YOUR NAME "<<endl;
		cin>>user;
		
		
		
		string pass="678";
		string pass1="abc";
		string pass2="#you";
		string pass3="&j7";
		string pass4="toyou";
		string pass5="thisthat";
		string pass6="howareyou";
		string i;
		cout<<"ENTER YOUR PASSWORD "<<endl;
		cin>>i;
		
		

		
		
		
		if(user==name && i==pass){
			system("cls");
		
		cout<<"YOU ARE SUCCESSFULLY LOG IN "<<endl;
		for(char i=0; i<10; i++){
			cout<<"..\t..\t"<<endl;
		}
			cout<<"DO YOU WANT TO CHECK YOUR RESULT "<<endl<<endl<<endl;
			cout<<"ииииииииииииииииииииииииииииииииииииииииииииииииииииииииииииии"<<endl<<endl<<endl;
			cout<<"PLEASE ENTER yes OR no"<<endl;
			
			string response;
			cout<<"_________________"<<endl;
			cout<<"|";
			cin>>response;
			cout<<"                 |"<<endl;
			cout<<"_________________"<<endl<<endl;
			if(response=="yes"){
				cout<<"THANKS FROM YOUR GOOD DECISION NOW ENTER YOUR NAME AND PASSWORD "<<endl<<endl;
				
				string name="ahmad";
				cout<<"PLEASE, ENTER YOUR NAME"<<endl;
				string user1;
				system("color f3");	
				cin>>user1;
				string pass="tion";
				cout<<"PLEASE, ENTER YOUR PASSWORD "<<endl;
				string a;	
				cin>>a;
				if(user==name && a==pass){
				
				system("cls");
				
					float ip=78,it=75,physic=92,saqaft=70,english=69,math1=89;
				
					
					double sum1=ip+it+physic+saqaft+english+math1;
					double avg1=sum1/6;
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF FIRST SEMSTER IS  "<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PROGRAMMING ARE 					"<<ip<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF IT ARE 								"<<it<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PHYSICS ARE 						"<<physic<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ISLAMIC SUBJECT ARE 				"<<saqaft<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ENGLISH ARE 						"<<english<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math1<<endl<<endl<<endl;
					cout<<"******************************************************************************\n"<<endl;	
					cout<<"THE RESULT OF 1ST SEMSTER IS  					"<<sum1<<endl;
					cout<<"******************************************************************************\n"<<endl;
					cout<<"THE AVREGE OF 1ST SEMSTER IS  					"<<avg1<<endl;
					cout<<"******************************************************************************\n"<<endl<<endl<<endl;
					
					float oop=90,math2=60,history=95,bs1=93,bcom=89,dcom=80;
					
					double sum2=oop+dcom+bcom+bs1+history+math2;
					double avg2=sum2/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 2nd SEMSTER IS  "<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF OBJECT ORIENTED PROGRAMING ARE 		"<<oop<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION ARE 				"<<dcom<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION ARE 			"<<bcom<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS STUDY 1 ARE  				"<<bs1<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF HISTORY ARE 						"<<history<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE  							"<<math2<<endl<<endl<<endl;
					cout<<"______________________________________________________________________________\n"<<endl;
						cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 2nd SEMSTER IS  					"<<sum2<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 2nd SEMSTER IS  					"<<avg2<<endl;					
					cout<<"******************************************************************************\n"<<endl<<endl<<endl;
					
					
					
					float html=94,javascript=89,math3=79,css=90,islamic=87,engl=96;
					
					double sum3=html+javascript+math3+css+islamic+engl;
					double avg3=sum3/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 3rd SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF HTML ARE 							"<<html<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF JAVASCRIPT ARE 						"<<javascript<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF CSS ARE 							"<<css<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ISLAMIC ARE 						"<<islamic<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ENGLISH ARE 						"<<engl<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 3rd SEMSTER IS 				"<<sum3<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 3rd SEMSTER IS 					"<<avg3<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
					

										
					float tarikh=78,paython=90,math4=79,java=95,os=98,cc=97;
					
					double sum4=tarikh+paython+math4+java+os+cc;
					double avg4=sum4/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 3rd SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF TARIKH ARE 							"<<tarikh<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAYTHON ARE 						"<<paython<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math4<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF JAVA ARE 							"<<java<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF OPRATING SYSTEM ARE 				"<<os<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF C# ARE 								"<<cc<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 4th SEMSTER IS 				"<<sum4<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 4th SEMSTER IS 					"<<avg4<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
										
					
					
					
					float bs2=88,bcom2=94,math5=89,database=95,dcom2=98,pat=97;
					
					double sum5=bs2+bcom2+math5+database+dcom2+pat;
					double avg5=sum5/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 5th SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF BUSINESS STUDY 2 ARE 				"<<bs2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION 2 ARE 		"<<bcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math5<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE ARE 						"<<database<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION ARE 				"<<dcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAT ARE 							"<<pat<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 5th SEMSTER IS 				"<<sum5<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 5th SEMSTER IS 					"<<avg5<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";	
					
					
			
			
					float bs3=98,bcom3=84,math6=79,database2=85,dcom3=88,pat2=98;
					
					double sum6=bs3+bcom3+math6+database2+dcom3+pat2;
					double avg6=sum6/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 6th SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF BUSINESS STUDY 3 ARE 				"<<bs3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION 3 ARE 		"<<bcom3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math6<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE ARE 2						"<<database2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION 3 ARE 			"<<dcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAT 2 ARE 							"<<pat2<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 6th SEMSTER IS 				"<<sum6<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 6th SEMSTER IS 					"<<avg6<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";		
					
					
					float mobileapp=88,android=94,math7=89,database3=95,wireless=98,advancecoding=97;
					
					double sum7=mobileapp+android+math7+database3+wireless+advancecoding;
					double avg7=sum7/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 7th SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF MOBILE APP ARE 						"<<mobileapp<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ANDROID ARE 						"<<android<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math7<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE 3 ARE 						"<<database3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF WIRELESS TECHNOLOGY ARE 			"<<wireless<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ADVANCECODING ARE 					"<<advancecoding<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 7rd SEMSTER IS 				"<<sum7<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 7rd SEMSTER IS 					"<<avg7<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
					
					float comsoftware=88,advmo=94,math8=89,advdatabase=95,comuni=98,ribotic=97;
					
					double sum8=comsoftware+advmo+math8+advdatabase+comuni+ribotic;
					double avg8=sum8/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 8th SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF COMPUTER SOFTWARE ARE 				"<<comsoftware<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS ADVANCE MOBILE APPS ARE 	"<<advmo<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math8<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ADVANCE DATABASE ARE 				"<<advdatabase<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF COMMUNICATING DEVICES ARE 			"<<comuni<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF RIBOTIC ARE 						"<<ribotic<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 8th SEMSTER IS 				"<<sum8<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 8th SEMSTER IS 					"<<avg8<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
									
				
				}	
				 	else{cout<<"WRONG ADDRESS ! "<<endl;
				}
			}
			
			
			else{
				cout<<"THIS IS QUITED "<<endl;
			}
			
		f1[0].show();
		}
		
		
		
		else if(user==name1 && i==pass1)
		{		
		system("cls");
		
		cout<<"YOU ARE SUCCESSFULLY LOG IN "<<endl<<endl<<endl;
		for(char i=0; i<10; i++){
			cout<<"..\t..\t"<<endl;
		}
			cout<<"DO YOU WANT TO CHECK YOUR RESULT "<<endl<<endl<<endl;
			cout<<"ииииииииииииииииииииииииииииииииииииииииииииииииииииииииииииии"<<endl<<endl;
			cout<<"PLEASE ENTER yes OR no"<<endl;
			
			string response;
			cout<<"_________________"<<endl;
			cout<<"|";
			cin>>response;
			cout<<"                 |"<<endl;
			cout<<"_________________"<<endl;
			if(response=="yes"){
				cout<<"THANKS FROM YOUR GOOD DECISION NOW ENTER YOUR NAME AND PASSWORD "<<endl;
				
				string name="faiz";
				cout<<"PLEASE, ENTER YOUR NAME"<<endl;
				string user1;	
				system("color f3");
				cin>>user1;
				string pass="ab44";
				cout<<"PLEASE, ENTER YOUR PASSWORD "<<endl;
				string a;	
				cin>>a;
				if(user==name && a==pass){
				system("cls");
				
					float ip=78,it=75,physic=92,saqaft=70,english=69,math1=89;
					
					double sum1=ip+it+physic+saqaft+english+math1;
					double avg1=sum1/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF FIRST SEMSTER IS  "<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF PROGRAMMING ARE "<<ip<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF IT ARE "<<it<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PHYSICS ARE "<<physic<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ISLAMIC SUBJECT ARE "<<saqaft<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ENGLISH ARE "<<english<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE "<<math1<<endl<<endl<<endl;
						
					cout<<"******************************************************************************\n";	
					cout<<"THE RESULT OF 1ST SEMSTER IS  "<<sum1<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 1ST SEMSTER IS  "<<avg1<<endl<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					float oop=90,dcom=80,bcom=89,bs1=93,history=95,math2=60; 
					
					double sum2=oop+dcom+bcom+bs1+history+math2;
					double avg2=sum2/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 2nd SEMSTER IS  "<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF OBJECT ORIENTED PROGRAMING ARE "<<oop<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION ARE "<<dcom<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION ARE "<<bcom<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS STUDY 1 ARE  "<<bs1<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF HISTORY ARE "<<history<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE  "<<math2<<endl<<endl<<endl;
						
					cout<<"******************************************************************************\n";	
					cout<<"THE RESULT OF 2nd SEMSTER IS  "<<sum2<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 2nd SEMSTER IS  "<<avg2<<endl<<endl<<endl<<endl<<endl;					
					cout<<"******************************************************************************\n";
					
					
					
					
					
					
					float html=97,javascript=69,math3=77,css=80,islamic=97,engl=76;
					
					double sum3=html+javascript+math3+css+islamic+engl;
					double avg3=sum3/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 3rd SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF HTML ARE 							"<<html<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF JAVASCRIPT ARE 						"<<javascript<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF CSS ARE 							"<<css<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ISLAMIC ARE 						"<<islamic<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ENGLISH ARE 						"<<engl<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 3rd SEMSTER IS 				"<<sum3<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 3rd SEMSTER IS 					"<<avg3<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
					

										
					float tarikh=86,paython=67,math4=87,java=96,os=76,cc=98;
					
					double sum4=tarikh+paython+math4+java+os+cc;
					double avg4=sum4/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 3rd SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF TARIKH ARE 							"<<tarikh<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAYTHON ARE 						"<<paython<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math4<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF JAVA ARE 							"<<java<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF OPRATING SYSTEM ARE 				"<<os<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF C# ARE 								"<<cc<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 4th SEMSTER IS 				"<<sum4<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 4th SEMSTER IS 					"<<avg4<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
										
					
					
					
					float bs2=89,bcom2=89,math5=90,database=67,dcom2=84,pat=74;
					
					double sum5=bs2+bcom2+math5+database+dcom2+pat;
					double avg5=sum5/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 5th SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF BUSINESS STUDY 2 ARE 				"<<bs2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION 2 ARE 		"<<bcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math5<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE ARE 						"<<database<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION ARE 				"<<dcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAT ARE 							"<<pat<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 5th SEMSTER IS 				"<<sum5<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 5th SEMSTER IS 					"<<avg5<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";	
					
					
			
			
					float bs3=76,bcom3=75,math6=98,database2=98,dcom3=98,pat2=76;
					
					double sum6=bs3+bcom3+math6+database2+dcom3+pat2;
					double avg6=sum6/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 6th SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF BUSINESS STUDY 3 ARE 				"<<bs3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION 3 ARE 		"<<bcom3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math6<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE ARE 2						"<<database2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION 3 ARE 			"<<dcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAT 2 ARE 							"<<pat2<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 6th SEMSTER IS 				"<<sum6<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 6th SEMSTER IS 					"<<avg6<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";		
					
					
					float mobileapp=98,android=94,math7=99,database3=75,wireless=78,advancecoding=97;
					
					double sum7=mobileapp+android+math7+database3+wireless+advancecoding;
					double avg7=sum7/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 7th SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF MOBILE APP ARE 						"<<mobileapp<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ANDROID ARE 						"<<android<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math7<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE 3 ARE 						"<<database3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF WIRELESS TECHNOLOGY ARE 			"<<wireless<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ADVANCECODING ARE 					"<<advancecoding<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 7rd SEMSTER IS 				"<<sum7<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 7rd SEMSTER IS 					"<<avg7<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
					
					float comsoftware=98,advmo=98,math8=78,advdatabase=76,comuni=88,ribotic=97;
					
					double sum8=comsoftware+advmo+math8+advdatabase+comuni+ribotic;
					double avg8=sum8/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 8th SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF COMPUTER SOFTWARE ARE 				"<<comsoftware<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS ADVANCE MOBILE APPS ARE 	"<<advmo<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math8<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ADVANCE DATABASE ARE 				"<<advdatabase<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF COMMUNICATING DEVICES ARE 			"<<comuni<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF RIBOTIC ARE 						"<<ribotic<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 8th SEMSTER IS 				"<<sum8<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 8th SEMSTER IS 					"<<avg8<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
				
				}	
				 else{cout<<"WRONG ADDRESS ! "<<endl;
				}
			}
			
			
			else{
				cout<<"THIS IS QUITED "<<endl;
			}
			
			
	              		f1[1].show();			

		}



		else if(user==name2 && i==pass2)
		{
			system("cls");
				cout<<"YOU ARE SUCCESSFULLY LOG IN "<<endl<<endl<<endl;
		for(char i=0; i<10; i++){
			cout<<"..\t..\t"<<endl;
		}
			cout<<"DO YOU WANT TO CHECK YOUR RESULT "<<endl<<endl<<endl;
			cout<<"ииииииииииииииииииииииииииииииииииииииииииииииииииииииииииииии"<<endl<<endl;
			cout<<"PLEASE ENTER yes OR no"<<endl;
			
			string response;
			cout<<"_________________"<<endl;
			cout<<"|";
			cin>>response;
			cout<<"                 |"<<endl;
			cout<<"_________________"<<endl;
			if(response=="yes"){
				cout<<"THANKS FROM YOUR GOOD DECISION NOW ENTER YOUR NAME AND PASSWORD "<<endl;
				
				string name="usman";
				cout<<"PLEASE, ENTER YOUR NAME"<<endl;
				string user1;	
				system("color f3");
				cin>>user1;
				string pass="tothree";
				cout<<"PLEASE, ENTER YOUR PASSWORD "<<endl;
				string a;	
				cin>>a;
				if(user==name && a==pass){
				system("cls");
				
					float ip=89;
					float it=85;
					float physic=92;
					float saqaft=97;
					float english=87;
					float math1=97;
					
					double sum1=ip+it+physic+saqaft+english+math1;
					double avg1=sum1/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF FIRST SEMSTER IS  "<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF PROGRAMMING ARE "<<ip<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF IT ARE "<<it<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PHYSICS ARE "<<physic<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ISLAMIC SUBJECT ARE "<<saqaft<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ENGLISH ARE "<<english<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE "<<math1<<endl<<endl<<endl;
						
					cout<<"******************************************************************************\n";	
					cout<<"THE RESULT OF 1ST SEMSTER IS  "<<sum1<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 1ST SEMSTER IS  "<<avg1<<endl<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					float oop=67;
					float dcom=96;
					float bcom=78;
					float bs1=59;
					float history=98;
					float math2=78;
					
					double sum2=oop+dcom+bcom+bs1+history+math2;
					double avg2=sum2/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 2nd SEMSTER IS  "<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF OBJECT ORIENTED PROGRAMING ARE "<<oop<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION ARE "<<dcom<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION ARE "<<bcom<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS STUDY 1 ARE  "<<bs1<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF HISTORY ARE "<<history<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE  "<<math2<<endl<<endl<<endl;
						
					cout<<"******************************************************************************\n";	
					cout<<"THE RESULT OF 2nd SEMSTER IS  "<<sum2<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 2nd SEMSTER IS  "<<avg2<<endl<<endl<<endl<<endl<<endl;					
					cout<<"******************************************************************************\n";
				
				
				
						float html=94,javascript=89,math3=79,css=90,islamic=87,engl=96;
					
					double sum3=html+javascript+math3+css+islamic+engl;
					double avg3=sum3/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 3rd SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF HTML ARE 							"<<html<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF JAVASCRIPT ARE 						"<<javascript<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF CSS ARE 							"<<css<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ISLAMIC ARE 						"<<islamic<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ENGLISH ARE 						"<<engl<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 3rd SEMSTER IS 				"<<sum3<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 3rd SEMSTER IS 					"<<avg3<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
					

										
					float tarikh=78,paython=90,math4=79,java=95,os=98,cc=97;
					
					double sum4=tarikh+paython+math4+java+os+cc;
					double avg4=sum4/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 3rd SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF TARIKH ARE 							"<<tarikh<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAYTHON ARE 						"<<paython<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math4<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF JAVA ARE 							"<<java<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF OPRATING SYSTEM ARE 				"<<os<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF C# ARE 								"<<cc<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 4th SEMSTER IS 				"<<sum4<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 4th SEMSTER IS 					"<<avg4<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
										
					
					
					
					float bs2=88,bcom2=94,math5=89,database=95,dcom2=98,pat=97;
					
					double sum5=bs2+bcom2+math5+database+dcom2+pat;
					double avg5=sum5/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 5th SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF BUSINESS STUDY 2 ARE 				"<<bs2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION 2 ARE 		"<<bcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math5<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE ARE 						"<<database<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION ARE 				"<<dcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAT ARE 							"<<pat<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 5th SEMSTER IS 				"<<sum5<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 5th SEMSTER IS 					"<<avg5<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";	
					
					
			
			
					float bs3=98,bcom3=84,math6=79,database2=85,dcom3=88,pat2=98;
					
					double sum6=bs3+bcom3+math6+database2+dcom3+pat2;
					double avg6=sum6/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 6th SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF BUSINESS STUDY 3 ARE 				"<<bs3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION 3 ARE 		"<<bcom3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math6<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE ARE 2						"<<database2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION 3 ARE 			"<<dcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAT 2 ARE 							"<<pat2<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 6th SEMSTER IS 				"<<sum6<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 6th SEMSTER IS 					"<<avg6<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";		
					
					
					float mobileapp=88,android=94,math7=89,database3=95,wireless=98,advancecoding=97;
					
					double sum7=mobileapp+android+math7+database3+wireless+advancecoding;
					double avg7=sum7/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 7th SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF MOBILE APP ARE 						"<<mobileapp<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ANDROID ARE 						"<<android<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math7<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE 3 ARE 						"<<database3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF WIRELESS TECHNOLOGY ARE 			"<<wireless<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ADVANCECODING ARE 					"<<advancecoding<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 7rd SEMSTER IS 				"<<sum7<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 7rd SEMSTER IS 					"<<avg7<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
					
					float comsoftware=88,advmo=94,math8=89,advdatabase=95,comuni=98,ribotic=97;
					
					double sum8=comsoftware+advmo+math8+advdatabase+comuni+ribotic;
					double avg8=sum8/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 8th SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF COMPUTER SOFTWARE ARE 				"<<comsoftware<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS ADVANCE MOBILE APPS ARE 	"<<advmo<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math8<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ADVANCE DATABASE ARE 				"<<advdatabase<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF COMMUNICATING DEVICES ARE 			"<<comuni<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF RIBOTIC ARE 						"<<ribotic<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 8th SEMSTER IS 				"<<sum8<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 8th SEMSTER IS 					"<<avg8<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
				
				}	
				 else{cout<<"WRONG ADDRESS ! "<<endl;
				}
			}
			
			
			else{
				cout<<"THIS IS QUITED "<<endl;
			}
			
		f1[2].show();
		}






		else if (user==name3 && i==pass3)
		{
			system("cls");
					cout<<"YOU ARE SUCCESSFULLY LOG IN "<<endl<<endl<<endl;
		for(char i=0; i<10; i++){
			cout<<"..\t..\t"<<endl;
		}
			cout<<"DO YOU WANT TO CHECK YOUR RESULT "<<endl<<endl<<endl;
			cout<<"ииииииииииииииииииииииииииииииииииииииииииииииииииииииииииииии"<<endl<<endl;
			cout<<"PLEASE ENTER yes OR no"<<endl;
			
			string response;
			cout<<"_________________"<<endl;
			cout<<"|";
			cin>>response;
			cout<<"                 |"<<endl;
			cout<<"_________________"<<endl;
			if(response=="yes"){
				cout<<"THANKS FROM YOUR GOOD DECISION NOW ENTER YOUR NAME AND PASSWORD "<<endl;
				
				string name="abdullah";
				cout<<"PLEASE, ENTER YOUR NAME"<<endl;
				string user1;	
				system("color f3");
				cin>>user1;
				string pass="toto";
				cout<<"PLEASE, ENTER YOUR PASSWORD "<<endl;
				string a;	
				cin>>a;
				if(user==name && a==pass){
				system("cls");
				
					float ip=87;
					float it=97;
					float physic=78;
					float saqaft=87;
					float english=87;
					float math1=67;
					
					double sum1=ip+it+physic+saqaft+english+math1;
					double avg1=sum1/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF FIRST SEMSTER IS  "<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF PROGRAMMING ARE "<<ip<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF IT ARE "<<it<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PHYSICS ARE "<<physic<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ISLAMIC SUBJECT ARE "<<saqaft<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ENGLISH ARE "<<english<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE "<<math1<<endl<<endl<<endl;
						
					cout<<"******************************************************************************\n";	
					cout<<"THE RESULT OF 1ST SEMSTER IS  "<<sum1<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 1ST SEMSTER IS  "<<avg1<<endl<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					float oop=60;
					float dcom=87;
					float bcom=56;
					float bs1=78;
					float history=98;
					float math2=78;
					
					double sum2=oop+dcom+bcom+bs1+history+math2;
					double avg2=sum2/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 2nd SEMSTER IS  "<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF OBJECT ORIENTED PROGRAMING ARE "<<oop<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION ARE "<<dcom<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION ARE "<<bcom<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS STUDY 1 ARE  "<<bs1<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF HISTORY ARE "<<history<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE  "<<math2<<endl<<endl<<endl;
						
					cout<<"******************************************************************************\n";	
					cout<<"THE RESULT OF 2nd SEMSTER IS  "<<sum2<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 2nd SEMSTER IS  "<<avg2<<endl<<endl<<endl<<endl<<endl;					
					cout<<"******************************************************************************\n";
				
						float html=94,javascript=89,math3=79,css=90,islamic=87,engl=96;
					
					double sum3=html+javascript+math3+css+islamic+engl;
					double avg3=sum3/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 3rd SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF HTML ARE 							"<<html<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF JAVASCRIPT ARE 						"<<javascript<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF CSS ARE 							"<<css<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ISLAMIC ARE 						"<<islamic<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ENGLISH ARE 						"<<engl<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 3rd SEMSTER IS 				"<<sum3<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 3rd SEMSTER IS 					"<<avg3<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
					

										
					float tarikh=78,paython=90,math4=79,java=95,os=98,cc=97;
					
					double sum4=tarikh+paython+math4+java+os+cc;
					double avg4=sum4/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 3rd SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF TARIKH ARE 							"<<tarikh<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAYTHON ARE 						"<<paython<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math4<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF JAVA ARE 							"<<java<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF OPRATING SYSTEM ARE 				"<<os<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF C# ARE 								"<<cc<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 4th SEMSTER IS 				"<<sum4<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 4th SEMSTER IS 					"<<avg4<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
										
					
					
					
					float bs2=88,bcom2=94,math5=89,database=95,dcom2=98,pat=97;
					
					double sum5=bs2+bcom2+math5+database+dcom2+pat;
					double avg5=sum5/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 5th SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF BUSINESS STUDY 2 ARE 				"<<bs2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION 2 ARE 		"<<bcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math5<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE ARE 						"<<database<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION ARE 				"<<dcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAT ARE 							"<<pat<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 5th SEMSTER IS 				"<<sum5<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 5th SEMSTER IS 					"<<avg5<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";	
					
					
			
			
					float bs3=98,bcom3=84,math6=79,database2=85,dcom3=88,pat2=98;
					
					double sum6=bs3+bcom3+math6+database2+dcom3+pat2;
					double avg6=sum6/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 6th SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF BUSINESS STUDY 3 ARE 				"<<bs3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION 3 ARE 		"<<bcom3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math6<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE ARE 2						"<<database2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION 3 ARE 			"<<dcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAT 2 ARE 							"<<pat2<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 6th SEMSTER IS 				"<<sum6<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 6th SEMSTER IS 					"<<avg6<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";		
					
					
					float mobileapp=88,android=94,math7=89,database3=95,wireless=98,advancecoding=97;
					
					double sum7=mobileapp+android+math7+database3+wireless+advancecoding;
					double avg7=sum7/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 7th SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF MOBILE APP ARE 						"<<mobileapp<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ANDROID ARE 						"<<android<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math7<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE 3 ARE 						"<<database3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF WIRELESS TECHNOLOGY ARE 			"<<wireless<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ADVANCECODING ARE 					"<<advancecoding<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 7rd SEMSTER IS 				"<<sum7<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 7rd SEMSTER IS 					"<<avg7<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
					
					float comsoftware=88,advmo=94,math8=89,advdatabase=95,comuni=98,ribotic=97;
					
					double sum8=comsoftware+advmo+math8+advdatabase+comuni+ribotic;
					double avg8=sum8/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 8th SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF COMPUTER SOFTWARE ARE 				"<<comsoftware<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS ADVANCE MOBILE APPS ARE 	"<<advmo<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math8<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ADVANCE DATABASE ARE 				"<<advdatabase<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF COMMUNICATING DEVICES ARE 			"<<comuni<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF RIBOTIC ARE 						"<<ribotic<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 8th SEMSTER IS 				"<<sum8<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 8th SEMSTER IS 					"<<avg8<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
				
				
				}	
				 else{cout<<"WRONG ADDRESS ! "<<endl;
				}
			}
			
			
			else{
				cout<<"THIS IS QUITED "<<endl;
			}
			
		f1[3].show();
		}



		else if (user==name4 && i==pass4){
					system("cls");
				cout<<"YOU ARE SUCCESSFULLY LOG IN "<<endl<<endl<<endl;
		for(char i=0; i<10; i++){
			cout<<"..\t..\t"<<endl;
		}
			cout<<"DO YOU WANT TO CHECK YOUR RESULT "<<endl<<endl<<endl;
			cout<<"ииииииииииииииииииииииииииииииииииииииииииииииииииииииииииииии"<<endl<<endl;
			cout<<"PLEASE ENTER yes OR no"<<endl;
			
			string response;
			cout<<"_________________"<<endl;
			cout<<"|";
			cin>>response;
			cout<<"                 |"<<endl;
			cout<<"_________________"<<endl;
			if(response=="yes"){
				cout<<"THANKS FROM YOUR GOOD DECISION NOW ENTER YOUR NAME AND PASSWORD "<<endl;
				
				string name="janaga";
				cout<<"PLEASE, ENTER YOUR NAME"<<endl;
				string user1;	
				system("color f3");
				cin>>user1;
				string pass="hoho";
				cout<<"PLEASE, ENTER YOUR PASSWORD "<<endl;
				string a;	
				cin>>a;
				if(user==name && a==pass){
				system("cls");
				
					float ip=87;
					float it=49;
					float physic=86;
					float saqaft=89;
					float english=98;
					float math1=78;
					
					double sum1=ip+it+physic+saqaft+english+math1;
					double avg1=sum1/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF FIRST SEMSTER IS  "<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF PROGRAMMING ARE "<<ip<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF IT ARE "<<it<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PHYSICS ARE "<<physic<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ISLAMIC SUBJECT ARE "<<saqaft<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ENGLISH ARE "<<english<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE "<<math1<<endl<<endl<<endl;
						
					cout<<"******************************************************************************\n";	
					cout<<"THE RESULT OF 1ST SEMSTER IS  "<<sum1<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 1ST SEMSTER IS  "<<avg1<<endl<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					float oop=87;
					float dcom=87;
					float bcom=76;
					float bs1=66;
					float history=56;
					float math2=87;
					
					double sum2=oop+dcom+bcom+bs1+history+math2;
					double avg2=sum2/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 2nd SEMSTER IS  "<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF OBJECT ORIENTED PROGRAMING ARE "<<oop<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION ARE "<<dcom<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION ARE "<<bcom<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS STUDY 1 ARE  "<<bs1<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF HISTORY ARE "<<history<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE  "<<math2<<endl<<endl<<endl;
						
					cout<<"******************************************************************************\n";	
					cout<<"THE RESULT OF 2nd SEMSTER IS  "<<sum2<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 2nd SEMSTER IS  "<<avg2<<endl<<endl<<endl<<endl<<endl;				
					cout<<"******************************************************************************\n";	
					
					
					
						float html=94,javascript=89,math3=79,css=90,islamic=87,engl=96;
					
					double sum3=html+javascript+math3+css+islamic+engl;
					double avg3=sum3/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 3rd SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF HTML ARE 							"<<html<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF JAVASCRIPT ARE 						"<<javascript<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF CSS ARE 							"<<css<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ISLAMIC ARE 						"<<islamic<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ENGLISH ARE 						"<<engl<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 3rd SEMSTER IS 				"<<sum3<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 3rd SEMSTER IS 					"<<avg3<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
					

										
					float tarikh=78,paython=90,math4=79,java=95,os=98,cc=97;
					
					double sum4=tarikh+paython+math4+java+os+cc;
					double avg4=sum4/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 3rd SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF TARIKH ARE 							"<<tarikh<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAYTHON ARE 						"<<paython<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math4<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF JAVA ARE 							"<<java<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF OPRATING SYSTEM ARE 				"<<os<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF C# ARE 								"<<cc<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 4th SEMSTER IS 				"<<sum4<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 4th SEMSTER IS 					"<<avg4<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
										
					
					
					
					float bs2=88,bcom2=94,math5=89,database=95,dcom2=98,pat=97;
					
					double sum5=bs2+bcom2+math5+database+dcom2+pat;
					double avg5=sum5/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 5th SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF BUSINESS STUDY 2 ARE 				"<<bs2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION 2 ARE 		"<<bcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math5<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE ARE 						"<<database<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION ARE 				"<<dcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAT ARE 							"<<pat<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 5th SEMSTER IS 				"<<sum5<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 5th SEMSTER IS 					"<<avg5<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";	
					
					
			
			
					float bs3=98,bcom3=84,math6=79,database2=85,dcom3=88,pat2=98;
					
					double sum6=bs3+bcom3+math6+database2+dcom3+pat2;
					double avg6=sum6/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 6th SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF BUSINESS STUDY 3 ARE 				"<<bs3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION 3 ARE 		"<<bcom3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math6<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE ARE 2						"<<database2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION 3 ARE 			"<<dcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAT 2 ARE 							"<<pat2<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 6th SEMSTER IS 				"<<sum6<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 6th SEMSTER IS 					"<<avg6<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";		
					
					
					float mobileapp=88,android=94,math7=89,database3=95,wireless=98,advancecoding=97;
					
					double sum7=mobileapp+android+math7+database3+wireless+advancecoding;
					double avg7=sum7/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 7th SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF MOBILE APP ARE 						"<<mobileapp<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ANDROID ARE 						"<<android<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math7<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE 3 ARE 						"<<database3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF WIRELESS TECHNOLOGY ARE 			"<<wireless<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ADVANCECODING ARE 					"<<advancecoding<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 7rd SEMSTER IS 				"<<sum7<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 7rd SEMSTER IS 					"<<avg7<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
					
					float comsoftware=88,advmo=94,math8=89,advdatabase=95,comuni=98,ribotic=97;
					
					double sum8=comsoftware+advmo+math8+advdatabase+comuni+ribotic;
					double avg8=sum8/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 8th SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF COMPUTER SOFTWARE ARE 				"<<comsoftware<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS ADVANCE MOBILE APPS ARE 	"<<advmo<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math8<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ADVANCE DATABASE ARE 				"<<advdatabase<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF COMMUNICATING DEVICES ARE 			"<<comuni<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF RIBOTIC ARE 						"<<ribotic<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 8th SEMSTER IS 				"<<sum8<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 8th SEMSTER IS 					"<<avg8<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
				
				
				}	
				 else{cout<<"WRONG ADDRESS ! "<<endl;
				}
			}
			
			
			else{
				cout<<"THIS IS QUITED "<<endl;
			}
			
		f1[4].show();
		}






		else if (user==name5 && i==pass5){
			system("cls");
					cout<<"YOU ARE SUCCESSFULLY LOG IN "<<endl<<endl<<endl;
		for(char i=0; i<10; i++){
			cout<<"..\t..\t"<<endl;
		}
			cout<<"DO YOU WANT TO CHECK YOUR RESULT "<<endl<<endl<<endl;
			cout<<"ииииииииииииииииииииииииииииииииииииииииииииииииииииииииииииии"<<endl<<endl;
			cout<<"PLEASE ENTER yes OR no"<<endl;
			
			string response;
			cout<<"_________________"<<endl;
			cout<<"|";
			cin>>response;
			cout<<"                 |"<<endl;
			cout<<"_________________"<<endl;
			if(response=="yes"){
				cout<<"THANKS FROM YOUR GOOD DECISION NOW ENTER YOUR NAME AND PASSWORD "<<endl;
				
				string name="hakim";
				cout<<"PLEASE, ENTER YOUR NAME"<<endl;
				string user1;	
				system("color f3");
				cin>>user1;
				string pass="jojo";
				cout<<"PLEASE, ENTER YOUR PASSWORD "<<endl;
				string a;	
				cin>>a;
				if(user==name && a==pass){
				system("cls");
				
					float ip=87;
					float it=78;
					float physic=76;
					float saqaft=45;
					float english=86;
					float math1=85;
					
					double sum1=ip+it+physic+saqaft+english+math1;
					double avg1=sum1/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF FIRST SEMSTER IS  "<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF PROGRAMMING ARE "<<ip<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF IT ARE "<<it<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PHYSICS ARE "<<physic<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ISLAMIC SUBJECT ARE "<<saqaft<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ENGLISH ARE "<<english<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE "<<math1<<endl<<endl<<endl;
						
					cout<<"******************************************************************************\n";	
					cout<<"THE RESULT OF 1ST SEMSTER IS  "<<sum1<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 1ST SEMSTER IS  "<<avg1<<endl<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					float oop=98;
					float dcom=50;
					float bcom=79;
					float bs1=73;
					float history=55;
					float math2=90;
					
					double sum2=oop+dcom+bcom+bs1+history+math2;
					double avg2=sum2/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 2nd SEMSTER IS  "<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF OBJECT ORIENTED PROGRAMING ARE "<<oop<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION ARE "<<dcom<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION ARE "<<bcom<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS STUDY 1 ARE  "<<bs1<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF HISTORY ARE "<<history<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE  "<<math2<<endl<<endl<<endl;
						
					cout<<"******************************************************************************\n";	
					cout<<"THE RESULT OF 2nd SEMSTER IS  "<<sum2<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 2nd SEMSTER IS  "<<avg2<<endl<<endl<<endl<<endl<<endl;				
					cout<<"******************************************************************************\n";	
					
					
					
						float html=94,javascript=89,math3=79,css=90,islamic=87,engl=96;
					
					double sum3=html+javascript+math3+css+islamic+engl;
					double avg3=sum3/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 3rd SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF HTML ARE 							"<<html<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF JAVASCRIPT ARE 						"<<javascript<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF CSS ARE 							"<<css<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ISLAMIC ARE 						"<<islamic<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ENGLISH ARE 						"<<engl<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 3rd SEMSTER IS 				"<<sum3<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 3rd SEMSTER IS 					"<<avg3<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
					

										
					float tarikh=78,paython=90,math4=79,java=95,os=98,cc=97;
					
					double sum4=tarikh+paython+math4+java+os+cc;
					double avg4=sum4/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 3rd SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF TARIKH ARE 							"<<tarikh<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAYTHON ARE 						"<<paython<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math4<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF JAVA ARE 							"<<java<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF OPRATING SYSTEM ARE 				"<<os<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF C# ARE 								"<<cc<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 4th SEMSTER IS 				"<<sum4<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 4th SEMSTER IS 					"<<avg4<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
										
					
					
					
					float bs2=88,bcom2=94,math5=89,database=95,dcom2=98,pat=97;
					
					double sum5=bs2+bcom2+math5+database+dcom2+pat;
					double avg5=sum5/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 5th SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF BUSINESS STUDY 2 ARE 				"<<bs2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION 2 ARE 		"<<bcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math5<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE ARE 						"<<database<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION ARE 				"<<dcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAT ARE 							"<<pat<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 5th SEMSTER IS 				"<<sum5<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 5th SEMSTER IS 					"<<avg5<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";	
					
					
			
			
					float bs3=98,bcom3=84,math6=79,database2=85,dcom3=88,pat2=98;
					
					double sum6=bs3+bcom3+math6+database2+dcom3+pat2;
					double avg6=sum6/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 6th SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF BUSINESS STUDY 3 ARE 				"<<bs3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION 3 ARE 		"<<bcom3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math6<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE ARE 2						"<<database2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION 3 ARE 			"<<dcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAT 2 ARE 							"<<pat2<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 6th SEMSTER IS 				"<<sum6<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 6th SEMSTER IS 					"<<avg6<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";		
					
					
					float mobileapp=88,android=94,math7=89,database3=95,wireless=98,advancecoding=97;
					
					double sum7=mobileapp+android+math7+database3+wireless+advancecoding;
					double avg7=sum7/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 7th SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF MOBILE APP ARE 						"<<mobileapp<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ANDROID ARE 						"<<android<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math7<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE 3 ARE 						"<<database3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF WIRELESS TECHNOLOGY ARE 			"<<wireless<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ADVANCECODING ARE 					"<<advancecoding<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 7rd SEMSTER IS 				"<<sum7<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 7rd SEMSTER IS 					"<<avg7<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
					
					float comsoftware=88,advmo=94,math8=89,advdatabase=95,comuni=98,ribotic=97;
					
					double sum8=comsoftware+advmo+math8+advdatabase+comuni+ribotic;
					double avg8=sum8/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 8th SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF COMPUTER SOFTWARE ARE 				"<<comsoftware<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS ADVANCE MOBILE APPS ARE 	"<<advmo<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math8<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ADVANCE DATABASE ARE 				"<<advdatabase<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF COMMUNICATING DEVICES ARE 			"<<comuni<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF RIBOTIC ARE 						"<<ribotic<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 8th SEMSTER IS 				"<<sum8<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 8th SEMSTER IS 					"<<avg8<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
				
				
				}	
				 else{cout<<"WRONG ADDRESS ! "<<endl;
				}
			}
			
			
			else{
				cout<<"THIS IS QUITED "<<endl;
			}
			
		f1[5].show();
		}
	
	
	
	
	
		else if (user==name6 && i==pass6){
			system("cls");
					cout<<"YOU ARE SUCCESSFULLY LOG IN "<<endl<<endl<<endl;
		for(char i=0; i<10; i++){
			cout<<"..\t..\t"<<endl;
		}
			cout<<"DO YOU WANT TO CHECK YOUR RESULT "<<endl<<endl<<endl;
			cout<<"ииииииииииииииииииииииииииииииииииииииииииииииииииииииииииииии"<<endl<<endl;
			cout<<"PLEASE ENTER yes OR no"<<endl;
			
			string response;
			cout<<"_________________"<<endl;
			cout<<"|";
			cin>>response;
			cout<<"                 |"<<endl;
			cout<<"_________________"<<endl;
			if(response=="yes"){
				cout<<"THANKS FROM YOUR GOOD DECISION NOW ENTER YOUR NAME AND PASSWORD "<<endl;
				
				string name="hakam";
				cout<<"PLEASE, ENTER YOUR NAME"<<endl;
				string user1;	
				system("color f3");
				cin>>user1;
				string pass="youto";
				cout<<"PLEASE, ENTER YOUR PASSWORD "<<endl;
				string a;	
				cin>>a;
				if(user==name && a==pass){
				system("cls");
				
					float ip=68;
					float it=45;
					float physic=95;
					float saqaft=79;
					float english=69;
					float math1=79;
					
					double sum1=ip+it+physic+saqaft+english+math1;
					double avg1=sum1/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF FIRST SEMSTER IS  "<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF PROGRAMMING ARE "<<ip<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF IT ARE "<<it<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PHYSICS ARE "<<physic<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ISLAMIC SUBJECT ARE "<<saqaft<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ENGLISH ARE "<<english<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE "<<math1<<endl<<endl<<endl;
					
						
					cout<<"******************************************************************************\n";	
					cout<<"THE RESULT OF 1ST SEMSTER IS  "<<sum1<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 1ST SEMSTER IS  "<<avg1<<endl<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					float oop=80;
					float dcom=70;
					float bcom=99;
					float bs1=83;
					float history=65;
					float math2=67;
					
					double sum2=oop+dcom+bcom+bs1+history+math2;
					double avg2=sum2/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 2nd SEMSTER IS  "<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF OBJECT ORIENTED PROGRAMING ARE "<<oop<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION ARE "<<dcom<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION ARE "<<bcom<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS STUDY 1 ARE  "<<bs1<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF HISTORY ARE "<<history<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE  "<<math2<<endl<<endl<<endl;
						
					cout<<"******************************************************************************\n";	
					cout<<"THE RESULT OF 2nd SEMSTER IS  "<<sum2<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 2nd SEMSTER IS  "<<avg2<<endl;					
					cout<<"******************************************************************************\n";
					
					
					
						float html=94,javascript=89,math3=79,css=90,islamic=87,engl=96;
					
					double sum3=html+javascript+math3+css+islamic+engl;
					double avg3=sum3/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 3rd SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF HTML ARE 							"<<html<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF JAVASCRIPT ARE 						"<<javascript<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF CSS ARE 							"<<css<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ISLAMIC ARE 						"<<islamic<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ENGLISH ARE 						"<<engl<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 3rd SEMSTER IS 				"<<sum3<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 3rd SEMSTER IS 					"<<avg3<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
					

										
					float tarikh=78,paython=90,math4=79,java=95,os=98,cc=97;
					
					double sum4=tarikh+paython+math4+java+os+cc;
					double avg4=sum4/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 3rd SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF TARIKH ARE 							"<<tarikh<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAYTHON ARE 						"<<paython<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math4<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF JAVA ARE 							"<<java<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF OPRATING SYSTEM ARE 				"<<os<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF C# ARE 								"<<cc<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 4th SEMSTER IS 				"<<sum4<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 4th SEMSTER IS 					"<<avg4<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
										
					
					
					
					float bs2=88,bcom2=94,math5=89,database=95,dcom2=98,pat=97;
					
					double sum5=bs2+bcom2+math5+database+dcom2+pat;
					double avg5=sum5/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 5th SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF BUSINESS STUDY 2 ARE 				"<<bs2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION 2 ARE 		"<<bcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math5<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE ARE 						"<<database<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION ARE 				"<<dcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAT ARE 							"<<pat<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 5th SEMSTER IS 				"<<sum5<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 5th SEMSTER IS 					"<<avg5<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";	
					
					
			
			
					float bs3=98,bcom3=84,math6=79,database2=85,dcom3=88,pat2=98;
					
					double sum6=bs3+bcom3+math6+database2+dcom3+pat2;
					double avg6=sum6/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 6th SEMSTER IS \n					"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF BUSINESS STUDY 3 ARE 				"<<bs3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS COMMUNICATION 3 ARE 		"<<bcom3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math6<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE ARE 2						"<<database2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATA COMMUNICATION 3 ARE 			"<<dcom2<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF PAT 2 ARE 							"<<pat2<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 6th SEMSTER IS 				"<<sum6<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 6th SEMSTER IS 					"<<avg6<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";		
					
					
					float mobileapp=88,android=94,math7=89,database3=95,wireless=98,advancecoding=97;
					
					double sum7=mobileapp+android+math7+database3+wireless+advancecoding;
					double avg7=sum7/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 7th SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF MOBILE APP ARE 						"<<mobileapp<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ANDROID ARE 						"<<android<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math7<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF DATABASE 3 ARE 						"<<database3<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF WIRELESS TECHNOLOGY ARE 			"<<wireless<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ADVANCECODING ARE 					"<<advancecoding<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 7rd SEMSTER IS 				"<<sum7<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 7rd SEMSTER IS 					"<<avg7<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
					
					
					float comsoftware=88,advmo=94,math8=89,advdatabase=95,comuni=98,ribotic=97;
					
					double sum8=comsoftware+advmo+math8+advdatabase+comuni+ribotic;
					double avg8=sum8/6;
					
					cout<<"******************************************************************************\n";
					cout<<"THE RESULT OF 8th SEMSTER IS \n"<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE MARKS OF COMPUTER SOFTWARE ARE 				"<<comsoftware<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF BUSINESS ADVANCE MOBILE APPS ARE 	"<<advmo<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF MATH ARE 							"<<math8<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF ADVANCE DATABASE ARE 				"<<advdatabase<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF COMMUNICATING DEVICES ARE 			"<<comuni<<endl;
					cout<<"______________________________________________________________________________\n";
					cout<<"THE MARKS OF RIBOTIC ARE 						"<<ribotic<<endl;
					
					cout<<"******************************************************************************\n";
					cout<<"THE TOTAL MARKS OF 8th SEMSTER IS 				"<<sum8<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					cout<<"THE AVREGE OF 8th SEMSTER IS 					"<<avg8<<endl<<endl<<endl<<endl;
					cout<<"******************************************************************************\n";
					
				
				
				}	
				 else{cout<<"WRONG ADDRESS ! "<<endl;
				}
			}
			
			
			else{
				cout<<"THIS IS QUITED "<<endl;
			}
			
		f1[6].show();
		}




		else{
		
		cout<<"Sorry you don't have any account "<<endl;
		}
	}
	
 else	{
 cout<<"HAVE A GOOD DAY BABY !"<<endl;
}	
		
		
	}
			
	

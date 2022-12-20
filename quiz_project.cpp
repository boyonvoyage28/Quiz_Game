#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    cout<<"WELCOME TO QUIZ INDIA COMPETITION"<<endl;
	string questions[10] = {
	" What is the state flower of Haryana?",
	" Which of the following states is not located in the North?",
	"In which district of uttarakhand, Jageshwar temple is located?",
	"The group of eighty four temples (Chaurasi temples) is located at which place in Himachal Pradesh?",
	"Which of the following rivers does not flow through Himachal Pradesh?",
	" Which of the following is the capital of Arunachal Pradesh?",
	"Which is the largest coffee-producing state of India?",
	"Which state has the largest area?",
	"Which state has the largest population?",
	" In which of the following state, the main language is Khasi?"
						};
	string options[10][4] = {
	{"Lotus","Rose","Buransh","Not Mentioned"},
	{"Himachal Pradesh","Uttarakhand","Jammu And Kashmir","Jharkhand"},
	{"Dehradun","Chamoli","Almora","Haridwar"},
	{"Dharamshala","Bharmour","Chamba","Manali"},
	{"Ganga","Yamuna","Chenab","Ravi"},
	{"Vadodara","Itanagar","Dispur","Imphal"},
	{"Kerala","Tamil Nadu","Karnataka","Telangana"},
	{"Maharashtra","Uttar Pradesh","Rajasthan","Madhya Pradesh"},
	{"Andhra Pradesh","Rajasthan","Karnataka","Uttar Pradesh"},
	{"Meghalaya","Tripura","Mizoram","Nagaland"},
					    };
	string correctOptions[10] = {
		"Lotus","Jharkhand","Almora","Bharmour",
		"Ganga","Itanagar","Karnataka",
		"Rajasthan","Uttar Pradesh","Meghalaya"
								};
	int userOptions[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQs = 10;	
	int op;

	//----- Conducting Quiz -----
	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl<<endl;
		
		cout<<"Select Options from (1-4) or 0 to skip and press enter: ";
		cin >> userOptions[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
	}
	
	//----- Printing The Correct Options -----
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"======= Correct Options ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl;
		
		if( userOptions[i] == 0 ){
			cout<< "You Have Skipped this Question."<<endl;		
		}else{
			cout<< "You Have Selected : "<<options[i][userOptions[i]-1]<<endl;		
		}
		cout<< "Correct Option Is: "<<correctOptions[i]<<endl<<endl;

		cout<<"Press any key to continue.."<<endl;
		getch();
		cout<<endl<<"------------------"<<endl;
	}
	
	//----- Printing The Result -----
	cout<<endl<<endl;
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"=======      Result     ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	for( int i=0; i<totalQs; i++ ){
		if( userOptions[i] != 0 ){
			if( correctOptions[i] == options[i][userOptions[i]-1] ){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout<< "Total Questions Were: "<< totalQs <<endl;	
	cout<< "Correct Answers: "<< correct <<endl;
	cout<< "In-Correct Answers : "<< incorrect <<endl;
	cout<< "Skipped Questions: "<< skipped <<endl;
	
	getch();
	return 0;
}

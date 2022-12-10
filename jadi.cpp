#include <iostream>
#include <windows.h>
#include<conio.h>
#include <time.h>
using namespace std;

int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute (h,15);
	cout << "Hello, fellow students! \nWelcome to our simple, yet useful program. \n" << endl;
	cout << "This program was created specifically for you students, \nHopefully, it could help you in studying and preparing for the upcoming school exams. \n" << endl;
	cout << "As mentioned earlier, this program is quite simple and pretty much beginner friendly. \nYou just need to follow the instructions on your screen. \n" << endl; 
	cout << "After filling the necessary data, you will be prompted to the practice questions." << endl; 
	cout << "And after you finished doing the test, your total score and time spent will be shown on the screen. \n" << endl; 
	cout << "Wihtout further do, let's get started. shall we?" << endl;
	string sd,smp,sma;
	bool complete = false;
	while(complete!= true){
		
	

	SetConsoleTextAttribute (h,7);
	cout << "\nFirst of all, are you an elementary student? ( ";
	SetConsoleTextAttribute (h,2);
	cout << "yes ";
	SetConsoleTextAttribute (h,7);
	cout << "or ";
	SetConsoleTextAttribute (h,4);
	cout << "no";
	SetConsoleTextAttribute (h,7);
	cout << " )" << endl;
	
	cout << "Answer: ";
	cin >> sd ;
		
		if (sd != "yes") {
			
			cout<< "\nThen, are you junior high school student? ( ";
			SetConsoleTextAttribute (h,2);
			cout << "yes ";
			SetConsoleTextAttribute (h,7);
			cout << "or ";
			SetConsoleTextAttribute (h,4);
			cout << "no";
			SetConsoleTextAttribute (h,7);
			cout << " )" << endl;
			
			cout << "Answer: ";
		    cin >> smp;
		    
			if (smp != "yes") {
			
		        cout<< "\nThen, you must be a senior high student, right? ( ";
		        SetConsoleTextAttribute (h,2);
				cout << "yes ";
				SetConsoleTextAttribute (h,7);
				cout << "or ";
				SetConsoleTextAttribute (h,4);
				cout << "no";
				SetConsoleTextAttribute (h,7);
				cout << " )" << endl;
				
				cout <<"Answer: ";
			    cin >> sma;
			    
			    if (sma != "yes") {
			    	
			    	SetConsoleTextAttribute (h,12);
			        cout << "\nPlease retry and fill in the data correctly!" <<endl;
			        SetConsoleTextAttribute (h,7);
					}
					
				else { 
					complete = true;
					}}
					
			else { 
			complete = true;
				}} 
				
		else { 
		complete = true;
		}
		
	}
	string fname, lname;
	cout<< "Before taking the exam, please enter your name " << endl;
	cout << "First name: " << endl;
	cin>> fname;
	cout << "Last name: " << endl;
	cin>> lname;
	cout << "=====================================" << endl;
	cout << "Please do this exam properly and correctly \n"<< endl;
	clock_t start = clock();
	
	 if (sd == "yes"){
	 	
	 	string all_questions[10] = {    // all the questions
	"Which is the smallest country?",
	"Which is the capital of Argentina?",
	"Which is called world population day?",
	"Who is the first person to draw the map of earth?",
	"Who was the first lady astronaut?",
	"Who is the father of chemistry?",
	"Who is the inventor of Rail Engine?",
	"Which is the capital of America?",
	"Which is not the member of G-8?",
	"Which is the biggest ocean?" };

	string all_options[10][4] = {    // all options
	{"Maldivs","Vatican city","Fizi","Tuvalue"},
	{"Buenes aires","Havana","Tokiyo","None of them"},
	{"5 March","11 july","17 May","12 June"},
	{"Aristotol","Neuton","Anaximander","Thales"},
	{"Tomas alva","George King","Valentina Terescova","Nil Armstrong"},
	{"Thomson","Robert boyel","John Dalton","Demitri Mendelieve"},
	{"Jems watt","Michel Farady","Stiphenson","Kohen"},
	{"Washington Dc","Moscow","Hawaii","California"},
	{"France","Italy","Spain","Jarmany"},
	{"Arctic ocean","Pacific Ocean","Indian ocean","Atlantic"},
    };

	string correct_ans[10] = {    // correct options
		"Vatican city","Buenes aires","11 july","Anaximander",
		"Valentina Terescova","Robert boyel","Stiphenson",
		"Washington DC","Spain","Pacific Ocean"
    };

	int selected_option[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQ = 10;
	int op;

	for(int i = 0; i < totalQ; i++){
		cout << "Question No: " << (i+1) << endl;
		cout << all_questions[i] << endl;
		cout << "1." << all_options[i][0] << endl;
		cout << "2."<<all_options[i][1] << endl;
		cout << "3." << all_options[i][2] << endl;
		cout << "4." << all_options[i][3] << endl << endl;

		cout << "Select your answer as 1, 2, 3 or 4 here : ";
		cin >> selected_option[i];
		cout << endl << "--------------------------------------------" << endl << endl;
		
	}

	clock_t end = clock();
	//----- Printing Result -----
	cout << endl << endl;
	cout << "************************************ " << endl;
	cout << "*********** Your Result ************ " << endl;
	cout << "************************************ " << endl << endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;

	for(int i = 0; i < totalQ; i++){
		if(selected_option[i] != 0){
			if(correct_ans[i] == all_options[i][selected_option[i]-1]){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout << "Name: " << fname <<" "<< lname <<endl;
	cout << "Total number of questions : " << totalQ << endl;
	cout << "Correct answer : " << correct << endl;
	cout << "Wrong answer : " << incorrect << endl;
	cout << "Skipped : " << skipped << endl;
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	 double time_taken_min = time_taken / 60;
	cout << "Time required: " << time_taken_min << " minutes" << endl;

	getch();
	 	
	 }
	 if (smp == "yes"){
	 
	 	string all_questions[10] = {    // all the questions
	"Which is the smallest country?",
	"Which is the capital of Argentina?",
	"Which is called world population day?",
	"Who is the first person to draw the map of earth?",
	"Who was the first lady astronaut?",
	"Who is the father of chemistry?",
	"Who is the inventor of Rail Engine?",
	"Which is the capital of America?",
	"Which is not the member of G-8?",
	"Which is the biggest ocean?" };

	string all_options[10][4] = {    // all options
	{"Maldivs","Vatican city","Fizi","Tuvalue"},
	{"Buenes aires","Havana","Tokiyo","None of them"},
	{"5 March","11 july","17 May","12 June"},
	{"Aristotol","Neuton","Anaximander","Thales"},
	{"Tomas alva","George King","Valentina Terescova","Nil Armstrong"},
	{"Thomson","Robert boyel","John Dalton","Demitri Mendelieve"},
	{"Jems watt","Michel Farady","Stiphenson","Kohen"},
	{"Washington Dc","Moscow","Hawaii","California"},
	{"France","Italy","Spain","Jarmany"},
	{"Arctic ocean","Pacific Ocean","Indian ocean","Atlantic"},
    };

	string correct_ans[10] = {    // correct options
		"Vatican city","Buenes aires","11 july","Anaximander",
		"Valentina Terescova","Robert boyel","Stiphenson",
		"Washington DC","Spain","Pacific Ocean"
    };

	int selected_option[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQ = 10;
	int op;

	for(int i = 0; i < totalQ; i++){
		cout << "Question No: " << (i+1) << endl;
		cout << all_questions[i] << endl;
		cout << "1." << all_options[i][0] << endl;
		cout << "2."<<all_options[i][1] << endl;
		cout << "3." << all_options[i][2] << endl;
		cout << "4." << all_options[i][3] << endl << endl;

		cout << "Select your answer as 1, 2, 3 or 4 here : ";
		cin >> selected_option[i];
		cout << endl << "--------------------------------------------" << endl << endl;
	}

clock_t end = clock();
	//----- Printing Result -----
	cout << endl << endl;
	cout << "************************************ " << endl;
	cout << "*********** Your Result ************ " << endl;
	cout << "************************************ " << endl << endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;

	for(int i = 0; i < totalQ; i++){
		if(selected_option[i] != 0){
			if(correct_ans[i] == all_options[i][selected_option[i]-1]){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout << "Name: " << fname <<" "<< lname <<endl;
	cout << "Total number of questions : " << totalQ << endl;
	cout << "Correct answer : " << correct << endl;
	cout << "Wrong answer : " << incorrect << endl;
	cout << "Skipped : " << skipped << endl;
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	 double time_taken_min = time_taken / 60;
	cout << "Time required: " << time_taken_min << " minutes" << endl;

	getch();
	 	
	 }
	if (sma == "yes"){
	 	
	 	string all_questions[10] = {    // all the questions
	"Which is the smallest country?",
	"Which is the capital of Argentina?",
	"Which is called world population day?",
	"Who is the first person to draw the map of earth?",
	"Who was the first lady astronaut?",
	"Who is the father of chemistry?",
	"Who is the inventor of Rail Engine?",
	"Which is the capital of America?",
	"Which is not the member of G-8?",
	"Which is the biggest ocean?" };

	string all_options[10][4] = {    // all options
	{"Maldivs","Vatican city","Fizi","Tuvalue"},
	{"Buenes aires","Havana","Tokiyo","None of them"},
	{"5 March","11 july","17 May","12 June"},
	{"Aristotol","Neuton","Anaximander","Thales"},
	{"Tomas alva","George King","Valentina Terescova","Nil Armstrong"},
	{"Thomson","Robert boyel","John Dalton","Demitri Mendelieve"},
	{"Jems watt","Michel Farady","Stiphenson","Kohen"},
	{"Washington Dc","Moscow","Hawaii","California"},
	{"France","Italy","Spain","Jarmany"},
	{"Arctic ocean","Pacific Ocean","Indian ocean","Atlantic"},
    };

	string correct_ans[10] = {    // correct options
		"Vatican city","Buenes aires","11 july","Anaximander",
		"Valentina Terescova","Robert boyel","Stiphenson",
		"Washington DC","Spain","Pacific Ocean"
    };

	int selected_option[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQ = 10;
	int op;

	for(int i = 0; i < totalQ; i++){
		cout << "Question No: " << (i+1) << endl;
		cout << all_questions[i] << endl;
		cout << "1." << all_options[i][0] << endl;
		cout << "2."<<all_options[i][1] << endl;
		cout << "3." << all_options[i][2] << endl;
		cout << "4." << all_options[i][3] << endl << endl;

		cout << "Select your answer as 1, 2, 3 or 4 here : ";
		cin >> selected_option[i];
		cout << endl << "--------------------------------------------" << endl << endl;
	}


clock_t end = clock();
	//----- Printing Result -----
	cout << endl << endl;
	cout << "************************************ " << endl;
	cout << "*********** Your Result ************ " << endl;
	cout << "************************************ " << endl << endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;

	for(int i = 0; i < totalQ; i++){
		if(selected_option[i] != 0){
			if(correct_ans[i] == all_options[i][selected_option[i]-1]){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout << "Name: " << fname <<" "<< lname <<endl;
	cout << "Total number of questions : " << totalQ << endl;
	cout << "Correct answer : " << correct << endl;
	cout << "Wrong answer : " << incorrect << endl;
	cout << "Skipped : " << skipped << endl;
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	 double time_taken_min = time_taken / 60;
	cout << "Time required: " << time_taken_min << " minutes" << endl;

	getch();
	 	
	return 0;
}
	 }
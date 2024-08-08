#include<iostream>
#include<fstream>
#include<time.h>
#include<string>
using namespace std;


string student_name, student_rollnum;


void student_info(string filename,string secondfile){


	start:
	string raeder;
	ifstream input("studentname.txt");

	cout << "enter your student name : " << endl;
	cin >> student_name;

	bool n = true;
	/*while (!input.eof()) {
		getline(input, raeder);
		if (student_name == raeder) {
			n = false;
			break;
		}
	}
	string raeder2;*/
	ifstream input2("studentmarks.txt");

	cout << "enter your rollnum : " << endl;
	bool r = true;
	cin >> student_rollnum;
	/*while (!input.eof()) {
		getline(input, raeder);
		if (student_name == raeder) {
			r = false;
			break;
		}

	}
	if (n == true || r == true) {
		cout << "THIS USER IS ALREADY IN OUR RECORD: " << endl<<endl;
		char choose;
		cout << "enter 1 to continue and 2 to exit : " << endl;
		cin >> choose;

		if (choose == '2') {
			cout << "-------------------------------------bye------------------------------------" << endl;
		}
		else {
			goto start;
		}*/
	

	ofstream write_name(filename,ios::app);

	write_name << student_name + "\n";

	write_name.close();

	ofstream write_rollnum(secondfile, ios::app);

	write_rollnum << student_rollnum+"\n";
	write_rollnum.close();

}

void checkresult() {
	again:
	string s_n, s_r;
	cout << "enter your student name : " << endl;
	cin >> s_n;
	cout << endl;
	cout << "enter your student rollnum : " << endl;
	cin >> s_r;

	ifstream r(s_n);
	string roll_reader;
	ifstream roll_r("studentmarks.txt");
	string nami;


	ifstream o("studentname.txt");
	int line = 0;
	bool f = true;
	bool s = true;
	while (!o.eof()) {
		getline(o, nami);
		if (s_n == nami) {
			f = false;
			break;
		}

	}
	while (!roll_r.eof()) {
		getline(roll_r,roll_reader);
		if (s_r == roll_reader) {
			s = false;
			break;
		}

	}
	if (f == true|| s==true) {
		cout << "this student is not in our list try again plz  : " << endl;
		char dec;
		cout << "enter 1 to continue and 2 to exit : " << endl;
		cin >> dec;

		if (dec == '2') {
			cout << "-------------------------------------bye------------------------------------" << endl;
		}
		else {
			system("cls");
			goto again;
		}

	}


	else if (f == false && s==false) {
		system("cls");
		cout << "student found : " << endl << endl << endl << endl;
		while (!r.eof()) {
			getline(r, s_n);
			cout << s_n;
			cout << endl;
		}
	
}
}

void student_result(string student_n,string student_roll_num,string file_n) {

	string urdu_marks, math_marks, comp_marks, physics_marks, english_marks ;
	cout << "enter student marks in english : ";
	cin >> urdu_marks;
	cout << "enter student marks in maths : ";
	cin >> math_marks;
	cout << "enter student marks in comp : ";
	cin >> comp_marks;
	cout << "enter student marks in physics : ";
	cin >> physics_marks;
	cout << "enter student marks in english : ";
	cin >> english_marks;


	

	ofstream write_rollnum(file_n, ios::app);
	write_rollnum <<"        ---------------------------------------FBISE RESULT 2023--------------------------------------" << +"\n\n\n\n";
	write_rollnum <<"student name : "<< student_name << "        " << +"\n";
	write_rollnum << "student roll num : "<<student_roll_num << "    " << +"\n\n\n\n\n";

	write_rollnum << "urdu : "<<urdu_marks + "\n";
	write_rollnum <<"maths : "<< math_marks + "\n";
	write_rollnum << "computer : "<<comp_marks + "\n";
	write_rollnum << "physics : "<<physics_marks + "\n";
	write_rollnum << "englihs : "<<english_marks + "\n\n";

	int urdu = 0;
	int math = 0;
	int comp = 0;
	int phy = 0;
	int engl = 0;

	 urdu = stoi(urdu_marks);
	 math = stoi(math_marks);
	 comp = stoi(comp_marks);
	 phy = stoi(physics_marks);
	 engl = stoi(english_marks);

	 ///////////////////learn by name y


	 int total_marks = urdu + math + comp + phy + engl;
	  string max = to_string(total_marks);

	  write_rollnum << "total marks are : " << max<<"\n\n";
	  
	  int decision = 0;
	  decision = stoi(max);
	  if (decision > 300) {
		  write_rollnum << "                                        YOU ARE PASSED !!!!!!!"<< "\n\n";
	  }
	  else if (decision <150) {
		  write_rollnum << "                                        YOU ARE FAILED !!!!!!! " << "\n\n";
	  }



	 
	
}





int main() {
	cout << "                                               FBISE-RESULTS 2023" << endl<<endl<<endl;


	string file = "studentname.txt";
	string secondfile = "studentmarks.txt";
	string result = student_name;
	string check;
	cout << "                ---------------------------------[WECOME TO FBISE]------------------------------------" << endl<<endl<<endl;
	top:
	cout << " enter 1 to save student result and 2 to check student result : " << endl;
	cin >> check;
	if (check == "2") {
		system("cls");
		checkresult();
	}
	else if (check == "1") {
		system("cls");
		student_info(file, secondfile);
		student_result(student_name, student_rollnum,result);
	}
	else {
		cout << "invalid function plz try again : " << endl;
		goto top;
	}

    return 1;
	

}
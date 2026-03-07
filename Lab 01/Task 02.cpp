#include<iostream>
using namespace std;

struct Student{
	string firstName;
	string lastName;
	float marks;
	int rollNum;
	void DisplayStudentInfo(){
		cout<<"**********************************************"<<endl;
		cout<<"Name        :"<<firstName<<" "<<lastName<<endl;
		cout<<"Roll Number :"<<rollNum<<endl;
		cout<<"Marks       :"<<marks<<endl;
		cout<<"**********************************************"<<endl;	
	}	
};
int main (){
	Student std[2];
	for (int i=0; i<2; i++){
		cout<<"Enter The First Name: \n";
		cin>>std[i].firstName;
		cout<<"Enter The Last Name: \n";
		cin>>std[i].lastName;
		cout<<"Enter The Roll Number: \n";
		cin>>std[i].rollNum;
		cout<<"Enter The Marks: \n";
		cin>>std[i].marks;
		} for (int i=0; i<2; i++){
			std[i].DisplayStudentInfo();
		}
	
}

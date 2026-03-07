#include<iostream>
using namespace std;
struct Student{
	string firstName;
	string lastName;
	int rollNum;
	float marks;
	void displayStudentInfo(){
		cout<<"Name        : "<<firstName<<" "<<lastName<<endl;
		cout<<"Roll Number : "<<rollNum<<endl;
		cout<<"Marks       : "<<marks<<endl;
		
	}
};
int main (){
	Student s;
    s.firstName="Rizwan";
    s.lastName="Ali";
    s.marks=78;
    s.rollNum=40;
    s.displayStudentInfo();
	
}

//Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.
#include<iostream>
using namespace std;
#include<string>
class Student{
	private:
		int roll1,ph1;
		string add1;
	public:
		void getdatastud();
		void display();	
};
void Student :: getdatastud(){
	cout<<"Enter roll number, phone number and address:"<<endl;
	cin>>roll1>>ph1>>add1;
}

void Student::display(){
	cout<<"Roll no :"<<roll1<<endl;
	cout<<"Phone number:"<<ph1<<endl;
	cout<<"Address :"<<add1<<endl;

}

int main(){
	Student s1,s2;
	s1.getdatastud();
	s1.display();
	s2.getdatastud();
	s2.display();
	return 0;	
}

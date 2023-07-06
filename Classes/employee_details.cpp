#include<iostream>
using namespace std;
#include<string>
class employee{
	private:
		int age;
		int empid,sal;
		string name;
		char addr[100];
	public:
		void getdata();
		void display();
};

void employee::getdata(){
	cout<<"Enter age of  employee:";
	cin>>age;
	cout<<"Enter empid:";
	cin>>empid;
	cout<<"Enter name:";
	cin>>name;
    cout<<"Enter Salary of employee:";
    cin>>sal;
    cout<<"enter address of the employee:";
    cin>>addr;
}
void employee::display(){	
	cout<<"Age is:"<<age<<endl;
	cout<<"Employee ID is:"<<empid<<endl;
	cout<<"Name of the employee is:"<<name<<endl;
	cout<<"Salary is:"<<sal<<endl;
	cout<<"Address is:"<<addr<<endl;
}

int main(){
	employee e;
	e.getdata();
	e.display();
	return 0;
}

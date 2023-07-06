//WAP TO FIND POWER OF A GIVEN NUMBER

#include<iostream>
using namespace std;
#include<math.h>
class power{
	private:
		int base,index,r;
	public:
		void getdata();
		void display();
};
void power::getdata(){
	cout<<"Enter base:";
	cin>>base;
	cout<<"Enter index:";
	cin>>index;
	
}
void power::display(){
	r=pow(base,index);
	cout<<"The result is:";
	cout<<r;
}
int main(){
	power p;
	p.getdata();
	p.display();
}







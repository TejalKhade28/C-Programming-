//WAP TO FIND FACTORIAL OF A NUMBER
#include<iostream>
using namespace std;
class factorial{
	private:
		int num,r;          //num=5, 5*4*3*2*1
	public:
		void calculate();
		void display();                       
};
void factorial::calculate(){
	cout<<"Enter the number:";
	cin>>num;

}
void factorial::display(){

		if(num<0){
		cout<<"Factorial of negative no. does not exist!";
	}
	else if(num==0 || num==1){
		cout<<"Factorial is 1";
	}
	else{
		r=num;        //r=5
		while(num!=1){   //num=5 ,4 ,3, 2,1
		r=r*(num-1);       //r=5*4=20 r=20*3=60 r=60*2=120 r=120*1=120 
		num--;        //num=4
		}
		cout<<"Factorial  is "<<r;
	}
}
int main(){
	factorial f;
	f.calculate();
	f.display();
}

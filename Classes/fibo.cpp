//WAP TO FIND FIBONACCI TERMS
#include<iostream>
using namespace std;
class fibo{
	private:
		int a=0;
		int b=1;
		int c=0;
	public:
		void calc();
		void display();
};

void fibo::calc(){
	for(int i=0;i<=5;i++){		
	a=b;   //a=1 b=1 c=1+1=2
	b=c;
	c=a+b;
	cout<<c<<endl;
}
}
void fibo::display(){
	cout<<a<<endl;
	cout<<b<<endl;
	c=a+b;
	cout<<c<<endl;  //c=0+1=1 
}
int main(){
	cout<<"Fibonacci terms are:"<<endl;
	fibo f; 
	f.display();
	f.calc();
}

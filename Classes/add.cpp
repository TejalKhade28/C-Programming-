//wap to add two numbers
/** 
#include<iostream>
using namespace std;
class addition{
	private:
		int n1,n2;
	public:
		void getdata(int x,int y){
			n1=x;
			n2=y;
		}
		int display(){
			return n1+n2;
		}
};
int main(){
	addition add;
	add.getdata(10,20);
	cout<<add.display();
}
**/

//method 2
#include<iostream>
using namespace std;
class addition{
	private:
		int n1,n2,r;            //private variables accessed only within the class
	public:
		void getdata();           //public member functions
		void op();
		void display();
};
void addition::getdata(){           //member function definition outside the class using scope resolution op
	cout<<"Enter two numbers:";
	cin>>n1>>n2;
}
void addition::op(){
	r=n1+n2;
}
void addition::display(){
	cout<<"The result is:"<<r;
}

int main(){
	addition a;     //class Object creation 
	a.getdata();      //Function calling
	a.op(); 
	a.display();
	return 0;
}





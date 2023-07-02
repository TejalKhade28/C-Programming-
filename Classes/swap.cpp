//WAP TO SWAP TWO NUMBERS WITHOUT USING 3RD VARIABLE
#include<iostream>
using namespace std;
class Swap{
	private:
		int n1,n2;               //n1=2 n2=3
	public:
		void getdata();
		void display();
};
void Swap::getdata(){
	cout<<"Enter two numbers:";
	cin>>n1>>n2;
}
void Swap::display(){
	cout<<"Numbers before swapping are:"<<n1<<","<<n2<<endl;      //n1=2 n2=3
	cout<<"Numbers after swapping are:"; 
	n1= n1+n2;             //n1=n1+n2  n1=5 , n2=n1-n2,n2=5-3=2 , n1=n1-n2 n1=5-2=3
	n2=n1-n2;
	n1=n1-n2;
	cout<<n1<<","<<n2;
}
int main(){
	Swap s;
	s.getdata();
	s.display();
	return 0;
}


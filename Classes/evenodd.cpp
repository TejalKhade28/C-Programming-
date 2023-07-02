//WAP TO CHECK NO IS EVEN OR ODD
#include<iostream>
using namespace std;
class number{
	private:
		int num;
	public:
		void getdata();
		void check();
		
};

 void number :: getdata(){
    cout<<"enter number:";
	cin>>num;	
}
 void number :: check(){
 	if(num%2==0){
 		cout<<"Number is even!";
	 }
	 else{
	 	cout<<"Number is odd!";
	 }
 }
 
int main(){
	number n;
	n.getdata();
	n.check();
	return 0;
}

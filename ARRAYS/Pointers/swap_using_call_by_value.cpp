//WAP TO SWAP TWO NUMBERS USING CALL BY VALUE
#include<iostream>
using namespace std;
void swap(int a, int b){
	int s=a;
	a=b;
	b=s;
	cout<<"Numbers after swapping:"<<a<<","<<b;
}
int main(){
	int a,b;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	cout<<"Numbers before swapping:"<<a<<","<<b<<endl;
	swap(a,b);
	return 0;
}

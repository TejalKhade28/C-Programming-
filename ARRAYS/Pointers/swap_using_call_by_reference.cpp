//WAP TO SWAP TWO NUMBERS USING CALL BY REFERENCE(CALL BY ADDRESS)
#include<iostream>
using namespace std;
void swap(int *p, int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
	cout<<"Numbers after swapping:"<<*p<<","<<*q;
}
int main(){
	int a,b;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	cout<<"Numbers before swapping:"<<a<<","<<b<<endl;
	swap(&a,&b);
	return 0;	
	}


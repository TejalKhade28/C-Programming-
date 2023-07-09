//WAP TO ADD TWO NUMBERS USING POINTERS
#include<iostream>
using namespace std;
void sum(int *n1,int *n2)                      // n1,n2 are local variables
{
	int add=*n1+*n2;
	cout<<"Sum of two numbers is:"<<add;
}
int main(){
	int a,b;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	sum(&a,&b);                                // a,b variables are global variables 
}

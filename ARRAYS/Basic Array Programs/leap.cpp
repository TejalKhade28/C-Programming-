//WAP TO FIND whether  IT IS A LEAP YEAR OR NOT
#include<iostream>
using namespace std;
void leap(int year){
	if((year%4==0 && year%10==0)||(year%400==0)){
		cout<<"Year is leap year";
	}
	else{
		cout<<"Year is not a leap year";
	}
}
int main(){
	int year;
	cout<<"Enter the year:";
	cin>>year;
	leap(year);
}

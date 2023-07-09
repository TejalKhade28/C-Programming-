//WAP TO PRINT ARRAY OF INTEGERS USING POINTERS
#include<iostream>
using namespace std;
int main(){
	int marks[10],i,*ptr;
	for(i=0;i<10;i++){
		cin>>marks[i];
	}
	ptr=marks;                 //here address of marks is stored into ptr  i.e marks[0] is stored in ptr
	cout<<"Marks stored in *ptr is:"<<*ptr<<endl;       //*ptr = value at ptr
	cout<<"Marks stored in *marks is:"<<*marks<<endl;     //*marks = value at marks 
	
	// We assign the address of marks to the ptr by using the statement ptr=marks; it means that both the variables 'marks' and 'ptr' point to the same element, i.e., marks[0]. 
	//When we try to print the values of *ptr and *marks, then it comes out to be same.
	// Hence, it is proved that the array name stores the address of the first element of an array.
	
}

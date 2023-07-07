//WAP TO ACCEPT 10 ELEMENTS INTO ARRAY AND PRINT SUM AND AVERAGE OF ARRAY ELEMENTS
#include<iostream>
using namespace std;
void calculate(int arr[]){
	int sum=0,avg;
	for(int i=0;i<10;i++){                         //accept
		cout<<"Enter your value:";
		cin>>arr[i];
	}
	cout<<"Elements are:";
	for(int i=0;i<10;i++){                       //store
		cout<<arr[i]<<",";
	}
	cout<<"\n";
	for(int i=0;i<10;i++){
		sum=sum+arr[i];
	}
	cout<<"Sum of array elements is:"<<sum<<endl;
	avg=float(sum)/10;
	cout<<"Average of array elements is:"<<avg<<endl;
	
}
int main(){
	int arr[10];
    calculate(arr);
}

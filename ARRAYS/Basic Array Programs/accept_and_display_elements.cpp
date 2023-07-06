//ARRAY OF INTEGERS
//WAP TO ACCEPT ELEMENTS AND DISPLAY THEIR AVERAGE.
/*
#include<iostream>
using namespace std;
int main(){
	int i,n,a[100],sum=0,avg;
	cout<<"Enter no. of elements:";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter element:";
		cin>>a[i];
	}

	for(i=0;i<n;i++){
		sum=sum+a[i];
		
	}
	cout<<"Sum of elements is:";
	cout<<sum<<endl;
	avg=sum/n;
	cout<<"Average of elements:"<<avg;
}
*/

//WAP TO ACCEPT N INTEGERS AND DISPLAY COUNT OF EVEN AND ODD

#include<iostream>
using namespace std;
int main(){
	int n,i,a[100],count=0,odd;
	cout<<"Enter no. of elements:";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter element:";
		cin>>a[i];
	}
	cout<<"Numbers are:"<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<endl;
		if(a[i]%2==0){
			count++;
		}
	}
	odd=n-count;
	cout<<"Even numbers are:"<<count<<endl;
	cout<<"Odd numbers are:"<<odd;
	return 0;
}











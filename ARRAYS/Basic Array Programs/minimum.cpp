//WAP TO ACCEPT ELEMENTS AND  find smallest number
#include<iostream>
using namespace std;
int main(){
	int n,i,a[100];
	cout<<"Enter the no. of elements:";
	cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"Enter the element:";
		cin>>a[i];
	}
	cout<<"The elements are:";
	for(i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	int small=a[0];            //store first element into small and compare small with rest
	for(i=1;i<n;i++){
		if(small>a[i]){     //small=10 , i=1-->10>20 , i=2-->10>30, i=3--> 10>5 yes then small=5 
			small=a[i];
		}
	}
	cout<<"Minimum element is:"<<small;
}

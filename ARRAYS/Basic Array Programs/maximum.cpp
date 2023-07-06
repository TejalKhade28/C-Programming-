//WAP TO ACCEPT ELEMENTS AND  find largest number
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
	int large=a[0];            //store first element into large and compare large with rest
	for(i=1;i<n;i++){
		if(large<a[i]){
			large=a[i];
		}
	}
	cout<<"Maximum element is:"<<large;
}  

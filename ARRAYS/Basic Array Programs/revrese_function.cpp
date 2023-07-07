//WAP TO REVERSE AN ARRAY USING A FUNCTION
#include<iostream>
using namespace std;
int reverse(int n,int arr[]){
	int rev[100];                      //new array to store reverse 
	cout<<"Original Array is:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	cout<<"\n";
	cout<<"Reverse of the given array is:";
	for(int i=0;i<n;i++){
		rev[i]=arr[n-i-1];
		cout<<rev[i]<<",";
	}	
}


int main(){
	int n;
	int arr[]={1,2,3,4,5};
	
	n=sizeof(arr)/sizeof(arr[0]);
	
	reverse(n,arr);
return 0;
}

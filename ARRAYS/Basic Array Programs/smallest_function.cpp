//WAP TO FIND SMALLEST NUMBER USING FUNCTION
#include<iostream>
using namespace std;
int smallest(int n,int arr[]){
	int r=arr[0];
	for(int i=1;i<n;i++){
		if(r>arr[i]){
			r=arr[i];
		}
	}
	return r;
}
int main(){
	int i,n;
	int arr[]={1,2,3,4,5};
	n=sizeof(arr)/sizeof(arr[0]);            //int array size is 4 bytes(i.e 5*4=20) and each element occupies 4 bytes so 20/4=5

	cout<<"The elements are:";
	for(i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	int small=smallest(n,arr);
	cout<<"The smallest number is:"<<small;
}

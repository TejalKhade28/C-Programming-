//WAP TO SORT 0,1,2 I.E ASCENDING ORDER
#include<iostream>
using namespace std;
void sort012(int arr[],int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;	
		}
		}	
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[]={1,0,2,0,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort012(arr,n);
	return 0;
}


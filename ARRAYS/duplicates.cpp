//WAP TO FIND DUPLICATES IN AN ARRAY
#include<iostream>
using namespace std;
void duplicates(int arr[],int n){
	int temp[n];
	int flag=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){       //i=0 j=4, i=1 j=3
				temp[i]=arr[j];         //temp[0]=arr[4]=1   , temp[1]=arr[3]=2
				cout<<temp[i]<<" ";
				flag++ ;	
			}
		}
	}
	if(flag==0){
		cout<<-1 ;
	}
	
}
int main(){  //0,1,2,3,4
	int arr[]={2,1,3,1,2,3};     //arr[0]=1   arr[1]=2
	int n = sizeof(arr)/sizeof(arr[0]);   //n=5
	duplicates(arr,n);
	return 0;
}

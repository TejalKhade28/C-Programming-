//WAP TO FIND SUBARRAYSUM WITHIN GIVEN ARRAY WHOSE SUM OF ELEMENTS IS EQUAL TO TARGET
#include<iostream>
using namespace std;
void subarraySum(int arr[],int n, int S ){
	for(int i=0;i<n;i++){
		int currentSum=arr[i];
		if(currentSum==S){
			cout<<i<<endl;
			return;
		}
		else{
			for(int j=i+1;j<n;j++){
				currentSum+=arr[j];
				
				if(currentSum==S){
					cout<<i<<" "<<j;
				return;
				}
			}	
		}
	}
	cout<<"No subarray exists!";
}
int main(){
	int arr[]={0,1,2,4,3,6};
	int n= sizeof(arr)/sizeof(arr[0]);
	int S=15;
	subarraySum(arr,n,S);
	return 0;
}

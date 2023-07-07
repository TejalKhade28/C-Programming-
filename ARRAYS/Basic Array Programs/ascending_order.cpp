//WAP TO SORT NUMBERS IN ASCENDING ORDER
#include<iostream>
using namespace std;
void ascend(int n, int arr[]){
	int temp;				                
	for(int i=0;i<n-1;i++){          //here compare only 4 elements if 5 
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){      //if first element is greater than immediate next then swap
				temp=arr[j];       //used swapping concept
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"After sorting:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
}
int main(){
	int n,arr[100],temp;
	cout<<"Enter no. of terms:";        //accept terms
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter element:";          
		cin>>arr[i];
	}
	cout<<"Elements before ordering are:";              //display terms
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	ascend(n,arr);
	return 0;
}

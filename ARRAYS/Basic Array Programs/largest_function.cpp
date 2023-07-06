#include<iostream>
using namespace std;

int largest(int n,int arr[100]){       //func definition(can write after main function also!)
	
	int l=arr[0];
	for(int i=1;i<n;i++){
		if(l<arr[i]){
			l=arr[i];
		}
	}
	return l;	
}

int main(){
	int large,n,arr[100];
	cout<<"Enter no. of terms:";        //accept terms
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter element:";          
		cin>>arr[i];
	}
	cout<<"Elements are:";              //display terms
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	int largest(int n, int arr[100]);    //func declaration
	large=largest(n,arr);                  //func calling
	cout<<"Largest number is:"<<large;

}

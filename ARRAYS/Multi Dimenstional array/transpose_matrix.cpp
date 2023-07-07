//WAP TO FIND TRANSPOSE OF MATRIX

#include<iostream>
using namespace std;

void transpose(int arr[10][10],int m, int n){
	int i,j,temp[10][10];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<"Enter value:";
			cin>>arr[i][j];
		}
	}
	cout<<"Matrix is:"<<"\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	//TRANSPOSE 
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			temp[j][i]=arr[i][j];
		}
		cout<<"\n";
	}
	cout<<"Transpose of this matrix:"<<"\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<temp[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
int main(){
	int m,n,i,j,arr[10][10];
	cout<<"Enter rows:";
	cin>>m;
	cout<<"Enter columns:";
	cin>>n;
	void transpose(int a[10][10],int m,int n);          //function declaration
    transpose(arr,m,n);                                 //function calling
	return 0;
}

#include<iostream>
using namespace std;
void product(int arr1[10][10],int arr2[10][10],int mult[10][10],int r1,int c1,int r2,int c2){                //funct definition
    cout<<"Enter elements for Matrix 1 :"<<endl;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cout<<"Enter element:";
			cin>>arr1[i][j];
		}
	}
	cout<<"Matrix 1:"<<endl;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cout<<arr1[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"Enter elements for Matrix 2 :"<<endl;
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			cout<<"Enter element:";
			cin>>arr2[i][j];
		}
	}
	cout<<"Matrix 2:"<<endl;
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			cout<<arr2[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	//Matrix Multiplication
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			mult[i][j]=0;
			for(int k=0;k<c1;k++){
				mult[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	
	cout<<"Matrix Multiplication:"<<endl;
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
				cout<<mult[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
}
int main(){
	int arr1[10][10],arr2[10][10],mult[10][10],r1,c1,r2,c2;
	cout<<"Enter rows and cols for mat1:";
	cin>>r1>>c1;
	cout<<"Enter rows and cols for mat2:";
	cin>>r2>>c2;
	void product(int arr1[10][10],int arr2[10][10],int mult[10][10],int r1,int c1,int r2,int c2);   //funct declaration
	product(arr1,arr2,mult,r1,c1,r2,c2);
	
}

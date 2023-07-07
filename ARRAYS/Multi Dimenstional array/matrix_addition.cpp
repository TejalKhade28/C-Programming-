//WAP TO ACCEPT TWO MXN MATRICES AND ADD THEM
#include<iostream>
using namespace std;
int main(){
	int r1,c1,r2,c2,i,j,arr1[10][10],arr2[10][10],temp[10][10];
	cout<<"Enter rows for matrix 1:";
	cin>>r1;
	cout<<"Enter columns for matrix 1:";
	cin>>c1;
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			cout<<"Enter value:";
			cin>>arr1[i][j];
		}
	}
	cout<<"Matrix is:"<<"\n";
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			cout<<arr1[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"Enter rows for matrix 2:";
	cin>>r2;
	cout<<"Enter columns for matrix 2:";
	cin>>c2;
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			cout<<"Enter value:";
			cin>>arr2[i][j];
		}
	}
	cout<<"Matrix is:"<<"\n";
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			cout<<arr2[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			temp[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			cout<<temp[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	return 0;
}

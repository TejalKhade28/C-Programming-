//WAP TO ACCEPT AN MXN MATRIX AND DISPLAY IT IN NATURAL FORM
#include<iostream>
using namespace std;
int main(){
	int m,n,i,j,arr[10][10];
	cout<<"Enter rows:";
	cin>>m;
	cout<<"Enter columns:";
	cin>>n;
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
	return 0;
}

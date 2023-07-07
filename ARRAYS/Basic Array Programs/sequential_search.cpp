//WAP TO FIND THE ELEMENT IN AN ARRAY AND DISPLAY THE INDEX 
#include<iostream>
using namespace std;
void search(int e,int n,int arr[],int count){

	for(int i=0;i<n;i++){
		if(e==arr[i]){
			cout<<"Element found at index "<<i<<endl;
			count++;
	}
}
if(count==0){
	cout<<"Element is not found!";
}
else{
	cout<<e<<" has occurred "<<count<<" times in the array.";
}

}
int main(){
	int e,n,arr[100],count=0;
	cout<<"Enter the no. of terms:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter element:";
		cin>>arr[i];
	}
	cout<<"The array elements are:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	cout<<"\n";
	cout<<"Enter the element to be searched:";
	cin>>e;
	search(e,n,arr,count);
	return 0;
}

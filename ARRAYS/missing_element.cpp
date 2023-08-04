#include<iostream>
using namespace std;

void missingnumber(int array[],int n){
	int temp[n+1];  
	        
	//initializing temp with 0's
	for(int i=0;i<=n;i++){               //temp[0]=1  temp[1]=1   temp[2]=1  temp[3]=0  temp[4]=1
		temp[i]=0;
	}
	
	//setting index of temp 
	for(int i=0;i<n;i++){
		temp[array[i]-1]=1;         // i=0, array[0]=1-1=0, temp[0]=1 ; i=1, array[1]=2-1=1, temp[1]=1, ; i=2, array[2]=3-1=2, temp[2]=1; i=3, array[3]=5-1=4,temp[4]=1; i=4 
	}
	
	int ans;
	for(int i=0;i<=n;i++){     //i=0,1,2,3
		if(temp[i]==0){        //temp[3]=0 
			ans=i+1;           //3+1=4	
		}
	}
	cout<<"Missing Element is: "<<ans;
}
int main(){
	           //0,1,2,3
	int array[]={1,2,3,4};    //array[0]=1 array[1]=2  array[2]=3 array[3]=5 
	int	n=sizeof(array)/sizeof(array[0]);         //n=4
	missingnumber(array,n);
	return 0;	
}

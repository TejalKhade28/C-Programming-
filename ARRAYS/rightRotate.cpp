#include <iostream>

using namespace std;                                       //arr[n]={1,2,3,4,5}   k=2
void rightRotate(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(i<k){
            cout<<arr[n+i-k]<<",";
        }
        else{
            cout<<arr[i-k]<<",";
        }
    }    
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    rightRotate(arr,n,k);

    return 0;
}

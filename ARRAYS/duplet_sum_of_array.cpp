//print Duplet sum of array

#include <iostream>
using namespace std;


int dupletSum(int arr[],int n,int sum){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"Yes"<<endl;
                cout<<arr[i]<<","<<arr[j];
                return true;
            }
           
        }
    }    
    return false;
}
int main()
{
    int n,sum;
    cin>>n;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    dupletSum(arr,n,sum);

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int z,n,temp,i,j;
    cin>>n;     //accept no of elements
    int arr[25];
    for(int i=0;i<n;i++){    
        cin>>arr[i];           //input n elements
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){    //check first element is greater than the second
                temp=arr[i];        /* logic*/
                arr[i]=arr[j];      
                arr[j]=temp;        
            }
        }
        
    }
    cout<<"Sorted array:"<<endl;       
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";          //display sorted array in ascending order
    }
}

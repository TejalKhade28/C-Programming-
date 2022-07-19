
// program for intersection of two arrays when elements in the array may not be distinct
#include<algorithm>
#include <iostream>

using namespace std;


void getIntersection(int arr1[], int arr2[], int n1, int n2){
    int i=0,j=0;                                //    n1=4 n2=5
    
    while(i<n1&&j<n2){
        if(arr1[i]>arr2[j]){         //jo chota hain usko increment karo
            j++;
        }
        else if(arr1[i]<arr2[j]){       //jo chota hain usko increment karo
            i++;
        }
        else{
            //if both are equal
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
   
}
int main()
{
    int n1;
    int n2;
    cin>>n1;
    cin>>n2;
    int arr1[10],arr2[10];   
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    
    //sort the arrays
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    //intersection function called
    getIntersection(arr1,arr2,n1,n2);
    return 0;
}


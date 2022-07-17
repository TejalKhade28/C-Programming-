//remove the duplicates from array

#include <iostream>
using namespace std;

int duplicates(int arr[],int n){
    if(n==0||n==1)                     
    return n;
    int k=0;                         //storage for unique elements
    for(int i=0;i<n-1;i++){             //checks for n-1 elements
        if(arr[i]!=arr[i+1]){          //condition for first element is similar to second ->if NOT then only store to k -> otherwise go ahead
            arr[k++]=arr[i];
        }
    }
    arr[k++]=arr[n-1];                //last element is stored to k
    return k;
    
}
int main(){
    int i,n;
    int arr[] = {10, 20, 20, 30, 40, 40, 40, 50, 50,60,70,80,80};           //pre defined input
    n = sizeof(arr) / sizeof(arr[0]);
    n=duplicates(arr, n);                                                 //function call   -> control goes to function

   for (int i=0; i<n; i++)
    cout << arr[i] << " ";                                             //printing the elements

   return 0;
}

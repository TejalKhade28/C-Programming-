// program for union of two arrays
#include <iostream>
#include<set>
using namespace std;

void getUnion(int arr1[], int n1, int arr2[], int n2){
    //declare the set
    set<int>s;
    for(int i=0;i<n1;i++)
    s.insert(arr1[i]);             //insert into set
    
    for(int i=0;i<n2;i++)
    s.insert(arr2[i]);             //insert into set
    
    set<int> :: iterator iter = s.begin();
    for(iter=s.begin();iter!=s.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    cout<<"The no of elements in the set is:"<<s.size();
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int arr1[10],arr2[10],arr3[10];   
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    getUnion(arr1,n1,arr2,n2);
    return 0;
}

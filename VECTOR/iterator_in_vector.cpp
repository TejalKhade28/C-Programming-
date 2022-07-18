#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v1){
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}
int main()
{
    vector<int>v;
    int i,size,element;
    cout<<"Enter the size of the vector:";
    cin>>size;
    for(i=0;i<size;i++){
        cout<<"Enter the element to be added to this vector:";
        cin>>element;
        v.push_back(element);
    }
    display(v);
    cout<<endl;
    
    v.insert(v.begin(),500);   //inserts only at the beginning
    v.insert(v.end(),900);    //inserts only at the end
    display(v);
    cout<<endl;
    
    vector<int> :: iterator iter = v.begin();    //inserts at the iterator position
    v.insert(iter+1,10,6000);
    display(v);
    cout<<endl;
    
    
    return 0;
}

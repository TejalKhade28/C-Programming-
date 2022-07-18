#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v;               //declare the vector
	for(int x=1;x<=10;x++){
		v.push_back(x);    
		cout<<x<<" ";    
	}
cout<<endl;
	
	//CAPACITY IN VECTOR
	cout<<"Size is:"<<v.size()<<endl;   //returns no of elements of vector
	cout<<"The capacity of vector is:"<<v.capacity()<<endl;   //size of allocated storage
	cout<<"Maximum size of the vector is:"<<v.max_size()<<endl;   // max size of the vector
	v.resize(5);    //changes the size of the vector

cout<<endl;
	cout<<"The new size of the vector after resizing  is:"<<v.size()<<endl;
	if(v.empty()==false){
		cout<<"The vector is not empty"<<endl; 
	}
	else{
		cout<<"The vector is empty"<<endl; 
	}                    
	return 0;
	
}

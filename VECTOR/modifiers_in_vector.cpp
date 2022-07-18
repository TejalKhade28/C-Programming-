
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v;   				 //vector declaration
	
	//ASSIGN
	v.assign(9,2);  				 //size of v=9 value=1;  i.e 1 is assigned 9 times    -> assign is the modifier in vector
	for(int i=0;i<v.size();i++){     //loop runs till size of vector
		cout<<v[i]<<" ";
		
	}
	cout<<endl;
	
	//PUSH BACK
	v.push_back(5);    				//last element replaced by 5
	int temp=v.size();
	cout<<"The Last element after insertion is:"<<v[temp-1];
	cout<<endl;
	
	for(int i=0;i<v.size();i++){     //loop runs till size of vector
		cout<<v[i]<<" ";
		
	}
	cout<<endl;
	
	//POP BACK
	v.pop_back();    					//removes the last element
	cout<<"the contents after popping the last element are:";
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		
	}
	cout<<endl;
	
	//INSERT
	v.insert(v.begin(),7);             //inserts element at the specified position
	cout<<"First element is:"<<v[0]<<endl;
	
	for(int i=0;i<v.size();i++){     //loop runs till size of vector
		cout<<v[i]<<" ";	
	}
	cout<<endl;
	
	//CLEAR
	v.clear();                      //clears the vector
	cout<<"Now the contents are:"<<v.size();     
	
	return 0;
}

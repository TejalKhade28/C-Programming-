#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
	
	vector<int>v1(6);
	v1.push_back(5);
	v1.push_back(4);
	v1.push_back(3);
	v1.push_back(2);
	v1.push_back(1);
	v1.push_back(1);
	
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	 //sort vector in ascending order
	 sort(v1.begin(),v1.end());
	 for(auto x : v1)
	 cout<<x<<" ";
}

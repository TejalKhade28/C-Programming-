//copy a vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
	int i;
	vector<int>vec1;
		vec1.push_back(5);
		vec1.push_back(2);
		vec1.push_back(4);
		vec1.push_back(2);
		vec1.push_back(3);
		vec1.push_back(1);
		vec1.push_back(1);
		for(int i=0;i<vec1.size();i++){
				cout<<vec1[i]<<" ";                //original vector
				
		}


//copy vector
	vector<int>vec2;
	for(int i=0;i<vec1.size();i++){
		vec2.push_back(vec1[i]);
	
		}
	cout<<endl;
	for(int i=0;i<vec1.size();i++){
			cout<<vec2[i]<<" ";                    //copied vector
			
		}
	vec1[0]=10;
	cout<<"Vector 1 first element:"<<vec1[0]<<endl;
	
	cout<<"Vector 2 first element:"<<vec2[0]<<endl;
}

//WAP TO FIND PAIR OF NUMBERS WHOSE SUM=TARGET

#include<iostream>
using namespace std;
class Solution{      //class declaration
	private:
		int arr[100],target,size;
	public:
		void calculate();		
};
void Solution::calculate(){
	int arr[100],target,size;
	cout<<"Enter size of array1:";
	cin>>size;
		for(int i=0;i<size;i++){
		cout<<"Enter element:";
		cin>>arr[i];
	}
	cout<<"Enter target:";
	cin>>target;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]+arr[j]==target){
				cout<<i<<","<<j;
				break;
			}
		}
	}
}

int main(){
	void calculate(int arr[100],int target,int size);
	Solution s;
	s.calculate();
	return 0;
}


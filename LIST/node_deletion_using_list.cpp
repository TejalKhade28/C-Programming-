#include<iostream>
#include<list>

using namespace std;

void display(list<int> &l){
	list<int> :: iterator iter;
	for(iter=l.begin();iter!=l.end();iter++){
		cout<<*iter<<"->";
	}
}
int main(){
	list<int>l1;
	int n=5;
	int element,pos,pos1;
	for(int i=0;i<n;i++){
		cin>>element;
		l1.push_back(element);
	}
	display(l1);
	cout<<endl;
	cout<<"Enter the position:";
	cin>>pos1;
	for(pos=0;pos<n;pos++){
		if(pos1==pos){
			l1.remove(pos1);
		}
	}
	display(l1);
}

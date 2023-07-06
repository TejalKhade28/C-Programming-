//WAP TO RETURN SMALLEST OF FOUR
#include<iostream>
using namespace std;
class smallest{
	private:
		int n1,n2,n3,n4;
	public:
		void getdata(){
			cout<<"Enter four numbers:";
			cin>>n1>>n2>>n3>>n4;
		}
		int display(){
			if(n1<n2){
				if((n1<n3)&&(n1<n4)){
					return n1;
				}
				
			}
			else if((n2<n3)&&(n2<n4)){
				return n2;
			}
			else if(n3<n4){
				return n3;
			}
			else{
				return n4;
			}
			
		};	
};

int main(){
	int r;
	smallest s;
	s.getdata();
	r=s.display();
	cout<<"Smallest number is:";
	cout<<r;
}

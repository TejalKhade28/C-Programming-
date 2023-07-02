//WAP TO PRINT AREA OF SQUARE, RECTANGLE AND CIRCLE
#include<iostream>
using namespace std;
#include<math.h>
class Area{
	private:
		int side, l,b,r;
	public:
		void getdata();
		void putdata();
};
void Area::getdata(){
	cout<<"Enter side of the square:";
	cin>>side;
	cout<<"Enter length and breadth of rectangle:";
	cin>>l>>b;
	cout<<"Enter radius of circle:";
	cin>>r;
}
void Area::putdata(){
	cout<<"Area of square is:"<<pow(side,2)<<endl;
	cout<<"Area of rectangle is:"<<l*b<<endl;
	cout<<"Area of Circle is:"<<3.14*pow(r,2)<<endl;
}
int main(){
	Area a;
	a.getdata();
	a.putdata();
}

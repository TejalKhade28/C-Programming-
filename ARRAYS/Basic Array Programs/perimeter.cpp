//WAP TO FIND AREA AND PERIMETER OF TRIANGLE USING FUNCTION
#include<iostream>
using namespace std;
#include<math.h>
void compute(float &p, float &a, int x,int y, int z){
	float s;
	p=x+y+z;
	s=p/2;
	a=sqrt(s*(s-x)*(s-y)*(s-z));
}
int main(){
	int x,y,z;
	float p,a,s;
	cout<<"Enter sides of the triangle:";
	cin>>x>>y>>z;

	compute(p,a,x,y,z);
		cout<<"Perimeter of triangle is:"<<p<<endl;
		cout<<"Area of triangle is:"<<a;
	
	
}

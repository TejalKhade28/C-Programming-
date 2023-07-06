//WAP TO FIND AVERAGE OF 4 NOS USING FUNCTION -- during function calling , data is accepted inside main function() 
#include<iostream>
using namespace std;
double avg(float a,float b,float c, float d){
	return ((a+b+c+d)/4);
}
int main(){
	float a,b,c,d;
	cout<<"Enter four numbers:";
	cin>>a>>b>>c>>d;
	float r=avg(a,b,c,d);
	cout<<"Average of four numbers is:"<<r;
}

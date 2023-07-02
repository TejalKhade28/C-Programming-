#include<iostream>
using namespace std;
class Temp{
	private:
		float c,f;
		int ch;
	public:
		void convert();
		void display();
};
void Temp::convert(){
	cout<<"enter your choice as 1 or 2:";
	cin>>ch;
	if(ch==1){
	cout<<"Enter temp in degree celsius:";
	cin>>c;
	}
	else if(ch==2){
	cout<<"Enter temp in farenheit:";
	cin>>f;
	}

}

void Temp::display(){
	if(ch==1){
	f=(c+32)*9/5;
	cout<<"Temperature in farenheit is:"<<f<<endl;	
	}
	else{
	c=(f-32)*5/9;
	cout<<"Temperature in degree celsius is:"<<c;
	
	}	
}

int main(){
	Temp t;
	t.convert();
	t.display();
}

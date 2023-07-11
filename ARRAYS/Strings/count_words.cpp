//WAP TO READ A WORD AND PRINT LETTERS ON A NEW LINE.
#include<iostream>
using namespace std;
#include<string.h>
int main(){
	char str[100],rev[100];
	int n=strlen(str);
	cout<<"enter your line:";               //str=tejal
	cin>>str;
	cout<<"The word entered is:"<<str<<endl;
	for(int i=0;i<n;i++){
		rev[i]=str[n-i-1];	
		cout<<rev[i]<<endl;	
	}

	return 0;
	
}

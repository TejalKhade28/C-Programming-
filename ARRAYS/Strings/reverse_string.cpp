//WAP TO REVERSE A STRING
#include<iostream>
using namespace std;
#include<string.h>
int main(){
	char str1[100],str2[100];
	int n=strlen(str1);
	cout<<"Enter string:";
	cin>>str1;
	cout<<"Reverse string is:";
	for(int i=0;i<n;i++){
		str2[i]=str1[n-1-i];
		cout<<str2[i];
	}

	return 0;
}

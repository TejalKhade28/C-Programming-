//WAP TO CHECK WHETHER THE GIVEN STRING IS A PALINDROME OR NOT
#include<iostream>
using namespace std;
#include<string.h>
int main(){
	char str1[100];
	int i,flag=0;
	int n=strlen(str1);
	cout<<"Enter your string:";
	cin>>str1;
	for(i=0;i<n;i++){
		if(str1[i]!=str1[n-i-1]){
			flag=1;
			break;
		}	
			
	} 
	
	if(flag==1){
		cout<<"String is not a Palindrome!";
	}
	else{
		cout<<"String is a Palindrome!";
	}
	return 0;
}

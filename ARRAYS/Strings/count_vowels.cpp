//WAP TO ACCEPT A STRING AND FIND NO. OF VOWELS AND CONSONANTS IN IT.
#include<iostream>
using namespace std;
#include<string.h>
int main(){
	char str1[100];
	int v=0,c=0;
	cout<<"Enter string:";
	cin>>str1;
	
	int len=strlen(str1);
	for(int i=0;i<len;i++){
		if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' || str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U'){
			v++;
			
		}
		else{
			c++;
		
		}
	}
	if(v==0){
		cout<<"No vowels found!";
	}
	else{
		cout<<"string contains " <<v<<" vowels!"<<endl;
	}
	if(c==0){
		cout<<"No consonants found!";
	}
	else{
		cout<<"String contains "<<c<<" consonants!";
	}
	return 0;
}

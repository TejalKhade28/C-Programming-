//STRING IS A SEQUENCE OF CHARACTER TERMINATED WITH A NULL CHARACTER IS CALLED AS STRING
//WAP TO ACCEPT STRING FROM USER AND COPY IT INTO OTHER STRING
//#include<iostream>
//using namespace std;
//int main(){
//	int i=0;
//	char arr[100],temp[100];
//	cout<<"Enter string:";
//	gets(arr);                    //reads characters from stdin and stores them in str until a newline character or end of file is found.
//	while(arr[i]!=0){
//		temp[i]=arr[i];
//		i++;
//	}
//	cout<<"Copied string is:"<<temp;
//}



//WAP TO ACCEPT STRING FROM USER AND COPY IT USING STRING FUNCTION
#include<iostream>
using namespace std;
#include<string.h>
int main(){
	char str1[100],str2[100];
	cout<<"Enter string:";
	cin>>str1;
	
	int len=strlen(str1);
	
	for(int i=0;i<len;i++){
		str2[i]=str1[i];
	}
	cout<<"Copied String is:"<<str2;
	return 0;
}

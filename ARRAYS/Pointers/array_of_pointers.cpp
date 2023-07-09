//WAP TO ACCEPT ARRAY OF POINTERS
 /*#include<iostream>
 using namespace std;
 int main(){
 	int ptr1[5],*ptr2[5];            //ptr1 is integer array  , ptr2[5] is array of pointers
 	  
 	for(int i=0;i<5;i++){
 		cout<<"Enter number";  
 		cin>>ptr1[i];
	 }
	 for(int i=0;i<5;i++){
	 	ptr2[i]=&ptr1[i];
	 }
	 cout<<"Printing values in ptr2 array:";
	 for(int i=0;i<5;i++){
	 	cout<<*ptr2[i]<<endl;
	 }
	 return 0;
 }
 
 */
 
 //WAP TO PRINT ARRAY OF POINTERS OF STRING LITERAL
 #include<iostream>
 using namespace std;
 #include<string>
 int main(){
 	char *names[5]={"abc","xyz","pqr","lmn","uvw"};       //names is char pointer array
 	for(int i=0;i<5;i++){
 	cout<<names[i]<<endl;
 	}
 return 0;
 }
 

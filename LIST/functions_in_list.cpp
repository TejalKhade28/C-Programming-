#include <iostream>
#include<list>

using namespace std;

void display(list<int> &l1){
    list<int> :: iterator it ;
    for(it=l1.begin();it!=l1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
int main()
{
    list<int>list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    display(list1);
    
    list<int>list2(3);    //list of 3 elements
    list<int> :: iterator i = list2.begin();
    *i=40;                 //store 40 at i=list2.begin()
    i++;                   //increment the i i.e begin()+1
    *i=100;
    i++;
    *i=60;
    display(list2);
    
    //sorting the list
    list2.sort();          //sort list2
    cout<<"The sorted list is: ";
    display(list2);
    
    //merging the list
    list1.merge(list2);      //merge list2
    cout<<"The merged list is: ";
    display(list1);
    
    
    //Reversing the list
    list1.reverse();
    cout<<"The reversed list is: ";
    display(list1);
    
    return 0;
}

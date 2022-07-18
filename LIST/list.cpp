#include <iostream>
#include<list>

using namespace std;

void display(list<int> &l1){          //refernce the list 
    list<int> :: iterator it ;        //make the iterator
    for(it=l1.begin();it!=l1.end();it++){
        cout<<*it<<" "<<endl;         //derefrence the iterator
    }
}


int main()
{
    list<int>list1;    //list of 0 elements
    list1.push_back(1);    //inserting elements to list
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    list<int> :: iterator iter = list1.begin();    //making the iterator
    
    display(list1);          //calling the display function
    return 0;
}

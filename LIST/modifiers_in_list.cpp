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
    list1.push_back(3);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    display(list1);
    list1.pop_back(); //last element popped
    
    list1.pop_front();  //front element popped
    
    list1.remove(3);    //removes all occurences of element
    display(list1);
    
    list1.insert(list1.begin(),12);   //insert in begin
    list1.insert(list1.end(),15);   //insert in end
    display(list1);
    
    
    
    
    
    list<int>list2(3);
    list<int> :: iterator i = list2.begin();
    *i=40;
    i++;
    *i=50;
    i++;
    *i=60;
    display(list2);
    
    
    return 0;
}

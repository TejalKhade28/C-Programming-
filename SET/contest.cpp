#include <iostream>
#include<set>
using namespace std;

int main()
{
    int n,x,y,t;
    cout<<"Enter the total levels:";
    cin>>n;    //n is the total levels
    //x is number of levels cleared by A
    //y is number of levels cleared by B
    set<int>s;
    cout<<endl;
    cout<<"Enter the levels cleared by A:";
    cin>>x;
    while(x--){
       
        cin>>t;    //t is the specific levels that A cleared from n
        s.insert(t);
    }
    cout<<endl; 
    cout<<"Enter the levels cleared by B:";
    cin>>y;
    while(y--){
       
        cin>>t;
        s.insert(t);
    }
    if(s.size()==n){
        cout<<"CONTEST WON";            //if all levels are cleared then contest won
    }
    else{
        cout<<"CONTEST LOST";            //if all levels are not cleared then contest lost
    }
    return 0;
}

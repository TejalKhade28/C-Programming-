//MAP IS A DICTIONARY LIKE DATA STRUCTURE THAT STORES KEY VALUE PAIR
#include <iostream>
#include<map>
#include<string>

using namespace std;

//map is an associative array
int main()
{
    map<string,int> mapMarks;
    mapMarks["Tejal"]=90;
    mapMarks["Priya"]=80;
    mapMarks["ram"]=30;
    
    mapMarks.insert({{"abc",43},{"xyz",46}});   //.insert method to insert the key value pair
    
    map<string,int> :: iterator iter;
    for(iter=mapMarks.begin(); iter!=mapMarks.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;         //first gives key , second gives value
    }
    
    cout<<"The size of map before clearing the values is:"<<mapMarks.size()<<endl;         //size of map
    cout<<"The Max size of map is:"<<mapMarks.max_size()<<endl;   //max size of map
    if(mapMarks.empty()){            //empty() function is used to check if the map container is empty or not
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    
     mapMarks.clear();             //clears the contents of the map
     cout<<"The size of map after clearing the values is: "<<mapMarks.size()<<endl;

    return 0;
}

#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int , string> m;
    m.insert(pair<int , string>(1,"JOhn"));
    m.insert(pair<int , string>(2,"gagu"));
    m.insert(pair<int , string>(3,"Jgaga"));

    // ITERATING

    map<int , string>::iterator itr;
    for (itr = m.begin() ; itr!= m.end() ; itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }


    // FINDING 
    map<int , string>::iterator itr1;
    itr1 = m.find(2);
    cout<<"FINDING VALUE "<<endl;
    cout<<itr1->first<<" "<<itr1->second;

}
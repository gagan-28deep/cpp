#include<iostream>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;
// VECTOR
// int main()
// {
//     // VECTOR : ARRAY
//     vector<int> v{2,4,5,6,7,8};
//     v.push_back(23);
//     v.push_back(45);
//     v.pop_back();

//     // ITERATING
//     // 1.USING ITERATOR

//     vector<int>::iterator itr;
//     cout<<"USING ITERAOTR"<<endl;
//     for (itr = v.begin() ; itr != v.end() ; itr++)
//     {
//         cout<<++*itr<<endl;   //IT IS POINTER : SO any changes in it will reflect in original data
//     }

//     // 2. USING FOR LOOP

//     cout<<"USING FOR EACH LOOP"<<endl;
//     for (int x:v)
//     {
//         cout<<x<<endl;
//     }
// }

// LINKED LIST(DOUBLE)

// int main()
// {
    
//     list<int> v{2,4,5,6,7,8};
//     v.push_back(23);
//     v.push_back(45);
//     v.pop_back();

//     // ITERATING
//     // 1.USING ITERATOR

//     list<int>::iterator itr;
//     cout<<"USING ITERAOTR"<<endl;
//     for (itr = v.begin() ; itr != v.end() ; itr++)
//     {
//         cout<<++*itr<<endl;   //IT IS POINTER : SO any changes in it will reflect in original data
//     }

//     // 2. USING FOR LOOP

//     cout<<"USING FOR EACH LOOP"<<endl;
//     for (int x:v)
//     {
//         cout<<x<<endl;
//     }
// }


// FORWARD LINKED LIST

int main()
{
    // VECTOR : ARRAY
    forward_list<int> v{2,4,5,6,7,8};
    v.push_front(23);
    v.push_front(45);
    v.pop_front();

    // ITERATING
    // 1.USING ITERATOR

    forward_list<int>::iterator itr;
    cout<<"USING ITERAOTR"<<endl;
    for (itr = v.begin() ; itr != v.end() ; itr++)
    {
        cout<<++*itr<<endl;   //IT IS POINTER : SO any changes in it will reflect in original data
    }

    // 2. USING FOR LOOP

    cout<<"USING FOR EACH LOOP"<<endl;
    for (int x:v)
    {
        cout<<x<<endl;
    }
}
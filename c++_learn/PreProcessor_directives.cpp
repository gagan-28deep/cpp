#include<iostream>
using namespace std;
//#define Pi 3.1425    // CONSTANT AND DOESNT OCCUPY ANY SPACE AS IT IS NOT A VARIABLE

// #define max(x,y) (x>y?x:y)

// #define msg(x) (#x)

// #ifndef Pi
//     #define Pi 3
// #endif
     
// int main()
// {
//     cout<<Pi<<endl;
//     cout<<max(8 , 2)<<endl;
//     cout<<msg(Hello);
// }


// NAMESPACE

namespace first
{
    void fun()
    {
        cout<<"first"<<endl;
    }
}
namespace second
{
    void fun()
    {
        cout<<"second"<<endl;
    }
}
using namespace first;
int main()
{
    fun();
    second::fun();   // RECOMMENDED
}
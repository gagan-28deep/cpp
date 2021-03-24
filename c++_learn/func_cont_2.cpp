#include<iostream>
using namespace std;
// SCOPE OF VARIABLES
// int g = 25;
// void fun()
// {
//     int g = 10;
//     {
//         int g = 5;
//         cout<<g<<endl;
//         g++;
//         cout<<g<<endl;
//     }
//     cout<<g<<endl;
//     g++;
//     cout<<g<<endl;
//     cout<<::g;   // TO ACCESS GLOBAL VARIABLE
// }
// int main()
// {
//     int x = 2;
//     fun();
    
//     return 0;
// }


// STATIC VARIABLE

// void fun()
// {
//     static int v = 0;
//     int a = 10;
//     v++;
//     cout<<a<<" "<<v<<endl;

// }
// int main()
// {
//     fun();
//     fun();
//     fun();
//     return 0;
// }


// RECURSIVE FUNCTION

void fun(int n)
{
    if (n>0)
    {
        //cout<<n<<endl;
        fun(n-1);
        cout<<n<<endl;
    }
}

int main()
{

    fun(5);
}
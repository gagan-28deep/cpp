#include<iostream>
using namespace std;
// float add(float a , float b )
// {
//     float c = a+b;
//     return c;
// }


// int greatest(int a , int b , int c)
// {
//     if (a>b && a>c)
//     {
//         return a;
//     }
//     else if (b>c)
//     {
//         return b;
//     }
//     else
//     {
//         return c ; 
//     }
// }

    // FUNCTION OVERLOADING


// int add(int a , int b)
// {
//     return a+b;
// }
// int add(int a , int b , int c)
// {
//     return a+b+c;
// }
// float add(float a , float b)
// {
//     return a+b;
// }

// FUNCTION TEMPLATE

// template<class t>
// t maxim(t a,t b)
// {
//        return a>b?a:b;    // IT IS LIKE IF ELSE STATEMENT : return a is a is bigger else b;
// }


// DEFAULT ARGUEMENT
// int max(int a =0 , int b =0 , int c =0)
// {
//     return a>b&& a>c ?a:(b>c?b:c);
// }

int main()
{
    // int x = 16 , y=24 , z = 10 , g;
    // g = greatest(x,y,z);
    // cout<<g<<endl;

    // int x = 10 , y = 12 , z = 34 , c  , d ;
    // float i = 2.4 , j = 4.54  , k;
    // c = add(x,y);
    // d = add(x,y,z);
    // k = add(i,j);
    // cout<<c<<endl<<d<<endl<<k<<endl;


    // FUNCTION TEMPLATE
    // int c = max(10 , 5);
    // float d = max(8.9f , 2.5f);
    // cout<<maxim(12,14)<<endl;
	// cout<<maxim(2.3,1.4)<<endl;
	// cout<<maxim(2.3f,5.6f)<<endl;

    // DEFAULT ARGUEMENT

    // cout<<max()<<endl;
    // cout<<max(10)<<endl;
    // cout<<max(10,32)<<endl;
    // cout<<max(12,23,54)<<endl;




    return 0;
}
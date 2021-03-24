#include<iostream>
using namespace std;
// int main()
// {
//     int x = 10; // const int
//     // POINTER TO CONSTANT 
//     const int *ptr;
//     ptr = &x;
//     //++*ptr;  // NOT POSSIBLE

//     int y = 220;
//     ptr = &y;

//     cout<<*ptr<<" "<<x<<endl;
// }

// int main()
// {
//     // CONSTANT POINTER TO TYPE INTEGER POINTER
//     int x = 10;
//     int * const ptr =&x;
//     ++*ptr; //IT IS POSSIBLE
//     cout<<*ptr<<" "<<x<<endl;

//     int y = 2;
//    // ptr = &y;   // IT IS NOT POSSIBLE 
// }

// int main()
// {
//     // CONSTANT POINTER TO  INTEGER CONSTANT
//     int x = 10;
//     const int * const ptr =&x;
//     //++*ptr; //IT IS NOT POSSIBLE
//     cout<<*ptr<<" "<<x<<endl;

//     int y = 2;
//    // ptr = &y;   // IT IS NOT POSSIBLE 
// }

// class Demo
// {
// public:
//     int x= 10;
//     int y = 20;
//     void display()const
//     {
//        // x++; // NOT POSSIBLE
//         cout<<x<<" "<<y<<endl;
//     }
// };
// int main()
// {
//     Demo d;
//     d.display();
// }

// void fun(const int &a , int &b)
// {
//    // a++; // NOT POSSIBLE
//    cout<<a<<" "<<b<<endl;
// }
// int main()
// {
//     int x = 10 , y = 20;
//     fun(x,y);
//     cout<<" Main "<<x<<" "<<y<<endl;
// }
#include<iostream>
using namespace std;
// CALL BY VALUE
// void swap(int x , int y)
// {
//     int temp;
//     temp = x;
//     x=y;
//     y=temp;
//     cout<<x<<" "<<y<<endl;
// }
// int main()
// {
//     int a = 10 , b = 20;
//     swap(a,b);           // CALL BY VALUE
//     cout<<a<<" "<<b<<endl;

//     return 0;
// }

// CALL BY ADDRESS

// void swap(int *x , int *y)
// {
//     int temp;
//     temp = *x;
//     *x=*y;
//     *y=temp;
//     cout<<*x<<" "<<*y<<endl;
// }
// int main()
// {
//     int a = 10 , b = 20;
//     swap(&a,&b);           // CALL BY VALUE
//     cout<<a<<" "<<b<<endl;

//     return 0;
// }

// CALL BY REFERENCE

// void swap(int &x , int &y)
// {
//     cout<<&x<<" "<<&y<<endl;
//     int temp;
//     temp = x;
//     x=y;
//     y=temp;
//     cout<<x<<" "<<y<<endl;
// }
// int main()
// {
//     int a = 10 , b = 20;
//     swap(a,b);           
//     cout<<&a<<" "<<&b<<endl;
//     cout<<a<<" "<<b<<endl;

//     return 0;
// }



// RETURN BY ADDRESS

// int * fun(int size)
// {
//     int *p = new int[size];
//     for (int i = 0 ; i<size ; i++)
//     {
//         p[i] = 5+i;
//     }
//     cout<<p<<endl;
//     return p;
// }
// int main()
// {
//     int *q = fun(5);
//     for (int i = 0 ; i<5 ; i++)
//     {
//         cout<<q<<endl;
//         //cout<<q[i]<<endl;
//     }
// }


// RETURN BY REFERENCE

// int & fun(int &x)
// {
//     return x;
// }
// int main()
// {
//     int a = 10;
//     cout<<a<<endl;
//     fun(a) = 25;   // FUNCTION ACTS AS RETURN BY REFERENCE
//     cout<<a<<endl;
// }


//  LOCAL AND GLOBAL VARIABLE

// int g = 5;
// void fun()
// {
//     int a = 8;
//     int g = 10; // LOCAL VARIABLE : CHANGES MADE IN THIS WONT REFLECT IN ANY OTHER FUNCTION
//     cout<<g<<endl;
//     cout<<a<<" "<<g<<endl;
//     a++;
//     g++;
//     cout<<g<<endl;
// }
// int main()
// {
//     cout<<g<<endl;
//     fun();
//     cout<<g<<endl;

//     return 0 ;

// }

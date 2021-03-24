#include<iostream>
using namespace std;
int main()
{
    //int x = 10;
    //int *p = &x;  // INITIALIZE AND DECLARE POINTERS.

    // cout<<x<<endl;
    // cout<<&x<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;

    // int *p = new int[5];
    // p[0] = 32;
    // p[1] = 99;
    // cout<<p[0]<<" " <<p[1] <<endl;

    // delete []p;    // DELETE THE SPACE ALLOCATED
    // p = nullptr;   // POINTER BECOMES NULL


    // int size ; 
    // cout<<"ENTER SIZE OF THE ARRAY";
    // cin>>size;
    // int A[size];
    // cout<<sizeof A;    // SIZE * 4 : SINCE IT IS OF INTEGER TYPE AND TAKE 4 BITES.


    // DYNAMICALLY ALLOCATION OF POINTERS : it is useful if we want to change the size of an array in our program

    // int size ; 
   // cout<<"ENTER SIZE OF THE ARRAY";              
    // cin>>size;
    // int *p = new int[size];      //int *p = new int[20]
    // delete []p
    // cout<<"ENTER NEW SIZE ";
    // cin>>size;
    // p = new int[size];        //int *p = new int[40]




    // POINTER ARITHMETIC

    // int A[5] = {2,4,6,7,9};
    // int *p = A;

   // cout<<*p<<endl;

    //p++;

   // cout<<*p<<endl;;
    //p--;
   // cout<<*p<<endl;

    //p = p+2;
   // cout<<*p<<endl;
    //p = p-2;
   // cout<<*p<<endl;
   // cout<<p<<endl;
   // cout<<(p+2)<<endl;
    // cout<<p<<endl;
    // for (int i = 0 ; i<5 ; i++)
    // {
    //    // cout<<A[i]<<endl;
    //    //cout<<i[A]<<endl;
    //    //cout<<A+i<<endl;
    //    //cout<<*(A+i)<<endl;
    //    //cout<<p+i<<endl;
    //     cout<<*(p+i)<<endl;
    //    // cout<<p[i]<<endl;
    //     p++;
    // }
    // cout<<p<<endl;


    // int A[5] = {2,4,6,7,9};
    // int *p = A , *q = &A[4];
    // cout<<q-p;
    // cout<<p-q;


    // REFERENCE

    // int x= 10;
    // int &y = x;

    // cout<<x<<endl;
    // cout<<y<<endl;
    // x++;
    // y++;
    // cout<<x<<endl;
    // cout<<&x<<" "<<&y;

    return 0;
}
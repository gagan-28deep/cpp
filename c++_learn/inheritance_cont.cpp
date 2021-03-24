#include<iostream>
using namespace std;
class Base
{
public:
    Base(){cout<<"Non-Param of base class"<<endl;}
    Base(int x){cout<<"Param of base class"<<" "<<x<<endl;}
};
class Derived:public Base
{
public:
    Derived(){cout<<"Non-param of derived class"<<endl;}
    Derived(int a){cout<<"Param of derived class"<<" "<<a<<endl;}
    Derived(int x , int a):Base(x)
    {
        cout<<"Param of Base and Derived class"<<endl;
    }
};
int main()
{
    //Derived d;   // NON PARAM OF BASE CLASS AND DERIVED CLASS

    //Derived d(10);   // NON PARAM OF BASE CLASS , PARAM OF DERIVED CLASS

    //Derived d(10 , 5); // PARAM OF BASE AND DERIVED CLASS
}
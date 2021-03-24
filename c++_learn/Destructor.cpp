#include<iostream>
using namespace std;
// class Demo
// {
//     int *p;
// public:
//     Demo()
//     {
//         p = new int[10];
//         cout<<"Cnstructor of demo"<<endl;
//     }
//     ~Demo()
//     {
//         delete []p;
//         cout<<"Denstructor of demo"<<endl;
//     }
// };
// void fun()

// {
        // Demo d;
//     Demo *ptr = new Demo();
//     delete ptr;
// }
// int main()
// {
//     fun();
    
// }


//  DESTRUCTOR IN INHERITANCE AND VIRTUAL DESTRUCTOR


class Base
{
public:
    // Base()
    // {
    //     cout<<"Constructor of Base"<<endl;
    // }
    virtual ~Base()    // VIRTUAL IS USED IN POINTER SO DESTRUCTOR OF DERIVED CAN ALSO BE USED.
    {
        cout<<"Destructor of Base"<<endl;
    }
};


class Derived:public Base
{
public:
    // Derived()
    // {
    //     cout<<"Constructor of Derived"<<endl;
    // }
    ~Derived()
    {
        cout<<"Destructor of Derived"<<endl;
    }
};

void fun()
{
    //Derived d;
    // ONLY BASE CLASS IS CALLED
    Base *p = new Derived();
    delete p;
}

int main()
{
    fun();

}
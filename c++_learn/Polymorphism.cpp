#include<iostream>
using namespace std;
// FUNCTION OVERRIDING

// class Base
// {
// public:
//     void display()
//     {
//         cout<<"Display of parent"<<endl;
//     }
// };
// class Derived : public Base
// {public:
//     void display()
//     {
//         cout<<"Display of child";
//     }
// };

// int main()
// {
//     Derived d;
//     d.display();
//     d.Base::display();
// }


// VIRTUAL FUNCTION

// class Base
// {
// public:
//     virtual void fun()    // SO DERIVED CLASS FUNCTION IS CALLED
//     {
//         cout<<"I am base class ";
//     }
// };
// class Derived:public Base
// {
// public:
//     void fun()
//     {
//         cout<<"I am derived class ";
//     }

// };

// int main()
// {
//     Derived d;
//     Base *ptr = &d;
//     ptr->fun();
// }

// POLYMORPHISM

class Car
{
public:
    virtual void start() = 0;
    // {
    //     cout<<"Car Started";
    // }
};
class Innova:public Car
{
public:
    void start()
    {
        cout<<"Innova Started "<<endl;
    }
};
class Swift:public Car
{
public:
    void start()
    {
        cout<<"Swift Started";
    }
};

int main()
{
    Car *p = new Innova();
    p->start();
    p = new Swift();
    p->start();
}
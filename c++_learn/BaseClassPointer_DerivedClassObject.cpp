#include<iostream>
using namespace std;
// class Base
// {
// public:
//     void fun()
//     {
//         cout<<"fun1 of base class"<<endl;
//     }
// };
// class Derived : public Base
// {
// public:
//     void show()
//     {
//         cout<<"fun2 of derived class"<<endl;
//     }
// };
// int main()
// {
//     Derived d;
//     Base *ptr = &d;
//     ptr->fun();
// }


class Rectangle
{
public:
    void area()
    {
        cout<<"Area of Rectangle"<<endl;
    }
};

class Cuboid : public Rectangle
{
public:
    void volume()
    {
        cout<<"Volume of Cuboid"<<endl;
    }
};
int main()
{
    Cuboid c;
    Rectangle *ptr = &c;
    ptr->area();
}
#include<iostream>
using namespace std;
// class Rectangle
// {
// private:    
//     int lenth;
//     int breadth;
// public:
//     Rectangle(int length , int breadth)
//     {   
//         // THIS POINTER : It will point to the parameter of the current class.
//         this->lenth = length;
//         this->breadth = breadth;
//     }
// };


// STRUCTURE

struct Demo
{
    int x;
    int y;

    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    Demo d;
    d.x=10;
    d.y = 20;
    d.display();
}
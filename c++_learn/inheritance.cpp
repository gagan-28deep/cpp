#include<iostream>
using namespace std;
// class Base
// {
// public:
//     int a = 0;
//     void show()
//     {   
        
//         cout<<"Showing base class"<<" "<<a<<endl;;
//     }

// };

// class Derived:public Base{
// public: 
//     void display()
//     {
//         cout<<"Derived class";
//     }
// };

// int main()
// {
//     Derived d;
//     d.a = 100;
//     d.show();
//     d.display();
//     return 0;
// }


// INHERITANCE FROM RECTANGLE TO CUBOID CLASS


class Rectangle
{
private:
    int len;
    int bre;
public:
    Rectangle(int l=0 , int b = 0);
    Rectangle(Rectangle &r);
    void set_length(int l);
    void set_breadth(int b);
    int get_length(){return len;}
    int get_breadth(){return bre;}
    int area();
    int perimeter();
    bool issquare();
    ~Rectangle();
};

class Cuboid:public Rectangle
{
private:
    int height;
public:
    Cuboid(int h=0)
    {
        height = h;
    }
    void set_height(int h){height = h;}
    int get_height(){return height;}
    int volume()
    {
        return height * get_breadth() *get_length();
    }
    ~Cuboid();
};  

int main()
{
    Cuboid c(5);
    c.set_breadth(6);
    c.set_length(10);
    cout<<"Area is "<<c.area()<<endl;
    cout<<"Perimeter is "<<c.perimeter()<<endl;
    cout<<"Volume is "<<c.volume()<<endl;

}
Rectangle::Rectangle(int l,int b)
{
len=l;
bre=b;
}
Rectangle::Rectangle(Rectangle &r)
{
len=r.len;
bre=r.bre;
}
void Rectangle::set_length(int l)
{
    len=l;
}
void Rectangle::set_breadth(int b)
{
    bre=b;
}
int Rectangle::area()
{
return len*bre;
}
int Rectangle::perimeter()
{
return 2*(len+bre);
}
bool Rectangle::issquare()
{
    return len==bre;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle is destroyed"<<endl;
}
Cuboid ::~Cuboid()
{
    cout<<"Cuboid is destroyed"<<endl;
}
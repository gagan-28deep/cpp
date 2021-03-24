#include<iostream>
#include<memory>
using namespace std;
class Rectangle
{
private:
    int length; 
    int breadth;
public:
    Rectangle (int l  , int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth ; 
    }
};

int main()
{
    // UNIQUE-POINTER

    // unique_ptr<Rectangle> p1(new Rectangle(10,5));
    // cout<<p1->area()<<endl;

    // unique_ptr<Rectangle> p2;    
    // p2 = move(p1);    // P1 WILL BE MOVED TO p2 AND p1 will be deleted.
    // cout<<p2->area();


    // SHARED POINTER

    
    shared_ptr<Rectangle> p1(new Rectangle(10,5));
    cout<<p1->area()<<endl;

    shared_ptr<Rectangle> p2;    
    p2 = (p1);    
    cout<<"PTR2 "<<p2->area()<<endl;
    cout<<"PTR1 "<<p1->area();
    cout<<endl<<p1.use_count();
}

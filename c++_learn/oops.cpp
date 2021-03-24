#include<iostream>
using namespace std;

class Rectangle
{
private:

    // TO HIDE DATA 
    int len ; 
    int bre ;
public:
    
    // CONSTRUCTORS

    // NON - PARAMETERIZED
    // Rectangle()
    // {
    //     len = 1 ; 
    //     bre = 1;
    // }

    // PARAMETERIZED   : CAN ALSO BE PASSED WITH DEFAULT ARGUEMENETS

    Rectangle(int l = 1 , int b = 1 )
    {
        set_length(l);
        set_breadth(b);
    }

    // COPY
    Rectangle(Rectangle &r)
    {
        len = r.len;
        bre = r.bre;
    }

    
    // ONLY FUNCTIONS SHOULD BE SHOWN
    void set_length(int l )
    {
        if (l>=0)
        {
            len = l;

        }
        else
        {
            cout<<"NEGATIVE LENGTH NOT ALLOWED";
            len = 1;
        }
    }
    void set_breadth(int b )
    {
        if (b>=0)
        {
            bre = b;

        }
        else
        {
            cout<<"NEGATIVE BREADTH NOT ALLOWED";
            bre = 1;
        }
    }
    int get_length()
    {
        return len;
    }
    
    int get_breadth()
    {
        return bre;
    }
    int area()
    {
        return len * bre;
    }
    int perimeter()
    {
        return 2 * (len + bre);
    }
};
int main()
{
    Rectangle r1(10) ;
    Rectangle r2(5 , 10);
    Rectangle r3(r2);

    // r1.set_length(-10);
    // r1.set_breadth(5);
    // cout<<r1.get_length()<<" "<<r1.get_breadth()<<endl;
    cout<<r1.area()<<" "<<r1.perimeter()<<endl;
    cout<<r2.area()<<" "<<r2.perimeter()<<endl;
    cout<<r3.area()<<" "<<r3.perimeter();
}

// POINTER TO THE OBJECT

// int main()
//{
    // Rectangle r1 ; // MEMORY IN STACK

    // Rectangle *p ;  // POINTER TO OBJECT

//     Rectangle *p = new Rectangle; // MEMORY IN HEAP
//     // p = &r1;
//     p->len = 10;
//     p->bre = 5;
//     cout<<p->area()<<" "<<p->perimeter()<<endl;
// }



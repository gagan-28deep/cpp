#include<iostream>
using namespace std;
class Rectangle
{
private:
    int len ; 
    int bre ;
public:
    // FUNCTIONS DECLARATIONS ONLY
    Rectangle();
    Rectangle(int l , int b);
    Rectangle(Rectangle &r);

    int get_length()   // THEY BECOME INLINE FUNCTIONS
    {
        return len;
    }
    int get_breadth()
    {
        return bre; 
    }

    void set_length(int l);
    void set_breadth(int b);

    int area();
    int perimeter();
    bool issquare();
    ~Rectangle();
};

int main()
{
    Rectangle r(10,10);
    cout<<r.area()<<" "<<r.perimeter()<<endl;
    cout<<r.issquare();
}

Rectangle ::Rectangle()
{
    len = 1;
    bre = 1;
}

Rectangle ::Rectangle(int l , int b)
{
    len = l;
    bre = b;
}

Rectangle ::Rectangle(Rectangle &r)
{
    len = r.len;
    bre = r.bre;
}

void Rectangle :: set_breadth(int b)
{
    bre = b;
}
void Rectangle :: set_length(int l)
{
    len = l;
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
    cout<<" Constructor is destroyed "<<endl;
}




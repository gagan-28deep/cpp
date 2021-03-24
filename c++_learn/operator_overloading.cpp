#include<iostream>
using namespace std;
// class Complex
// {
// public:
//     int real ; 
//     int img ; 

//     //Complex add(Complex r)
//     Complex operator+(Complex r)
//     {
//         Complex temp;
//         temp.real = real + r.real;
//         temp.img = img + r.img;
//         return temp;
//     }
// };

// int main()
// {
//     Complex c1 , c2 , c3 ;
//     c1.real = 3 ; c1.img = 2;
//     c2.real = 6 ; c2.img = 5;
//     //c3 = c1.add(c2);
//     c3 = c1+c2;

//     cout<<c3.real<<" +i"<<c3.img;

//     return 0;
// }

// OPERATOR OVERLOADING USING FRIEND FUNCTION

// class Complex
// {
// private:
//     int real ; 
//     int img ; 
// public:
//     Complex(int r = 0 , int i = 0);
//     {
//         real = r;
//         img = i;        
//     }
//     void display()
//     {
//         cout<<real<<" i"<<img<<endl;
//     }
//     friend Complex operator+(Complex c1 , Complex c2);
// };
// Complex operator+(Complex c1 , Complex c2)
// {
//     Complex temp;
//     temp.real = c1.real + c2.real;
//     temp.img = c1.img + c2.img;
//     return temp;
// }

// int main()
// {
//     Complex c1 , c2 , c3;
//     c1.real = 3 ; c1.img = 6;
//     c2.real = 4 ; c2.img = 3;
//     c3 = c1+c2;
//     c3.display();
// }


// INSERTION OPERATOR OVERLOADING

class Complex
{
private:
    int real ; 
    int img ; 

public:
    Complex(int r = 0 , int  i = 0)
    {
        real = r;
        img = i;
    }

    friend ostream & operator<<(ostream &o , Complex &c1);

};
ostream & operator<<(ostream &o , Complex &c1)
{
    o<<c1.real<<" +i"<<c1.img;
    return o;
}

int main()
{
    Complex c(10,5);
    cout<<c; // operator<<(cout,c)
    return 0;
}


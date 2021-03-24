#include<iostream>
using namespace std;
// class Base
// {
// private : int a;
// protected : int b;
// public : int c;
//     friend void fun();
// };
// void fun()
// {
//     Base b;
//     b.a = 10;
//     b.b = 8;
//     b.c = 3;
// }
// class Your;
// class My
// {
// private: int a;
// protected :int b;
// public : int c;
// friend Your;
// };

// class Your
// {
//     public:
//         My m;
//         void fun()
//         {
//             m.a = 9;
//             m.b = 5;
//             m.c = 10;
//         }
// };
// int main()
// {
    
// }

// STATIC DATA MEMBERS AND FUNCTIONS

// class Test
// {
// public:
//     int a;
//     static int count;    // STATIC DATA MEMBER
//     Test()
//     {
//         a = 10;
//         count++;
//     }
//     static int getCount()
//     {
//         return count;
//     }
// };
// int Test::count = 0;   // GLOBAL DATA  , BUT WE WANT TO LIMIT ACCESS TO CLASS
// int main()
// {
//     Test t1,t2;
//     // cout<<t1.count<<endl;
//     // cout<<t1.count<<endl;
//     // t1.count = 25;
//     // cout<<t2.count<<endl;
//     // cout<<Test::count<<endl;
//     cout<<Test::getCount()<<endl;

// }


// class Student
// {
// public:
//     int rollno;
//     static int addno;
//     string name;
//     Student(string n)
//     {
//         name = n;
//         addno++;
//         addno = rollno;
//     }
//     void display()
//     {
//         cout<<" Roll "<<rollno<<endl<<" Student Name "<<name<<endl;
//     }
// };
// int Student::addno=0;
// int main()
// {
//     Student s1("gagan");
//     Student s2("John");
//     s1.display();
//     s2.display();
// }


// INNER CLASS
class Outer
{
public:
    void fun()
    {
        i.display();
    }
    class Inner
    {
    public:
        void display()
        {
            cout<<"Dispay of Inner";
        }
    };
    Inner i;
};
int main()
{
    Outer::Inner i;
    i.display();
    Outer j;
    j.fun();
}
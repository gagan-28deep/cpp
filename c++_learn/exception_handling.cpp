#include<iostream>
using namespace std;
// int division(int a , int b)
// {
//     if (b ==0)
//     {
//         throw 1.5 ;//string("Div by 0"); // 1
//     }
//     else
//     {
//         return a/b;
//     }
// }
// int main()
// {
//     int x = 10 , y = 0 , z;
//     try
//     {
//         z = division(x , y);
//         cout<<z<<endl;
//     }
//     catch(double e) //string e // int e
//     {
//         cout<<"Division by zero error "<<" "<<e<<endl;
//     }
//     cout<<"Bye";
// }

// class MyException:exception
// {

// };
// int division(int x , int y)throw(MyException // int)
// {
//     if (y==0)
//     {
//         throw MyException(); // 10
        
//     }
//     return x/y;
// }
// int main()
// {
//     int a =10 , b = 0 , c;
//     try
//     {  
//         c = division(a , b);
//         cout<<c;
//     }
//     catch(MyException e)
//     {
//         cout<<" Division by zero error "<<endl;
//     }
//     cout<<" Bye ";
// }


int main()
{
    try
    {
        throw 1.5;
    }
    catch(int e)
    {
        cout<<"Int catch ";
    }
    catch(double e)
    {
        cout<<"Double catch ";
    }
    catch(...)   // UNIVERSAL CATCH : SHOULD BE LAST AND ALSO ITS NOT RECOMMENDED AS IT SHOWS WE ARE NOT INTERESTED TO GET THE REAL EXCEPTIONS
    {
        cout<<"Char catch ";
    }
}
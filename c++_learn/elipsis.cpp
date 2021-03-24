#include<iostream>
#include<cstdarg>
using namespace std;
int sun(int n , ...)
{
    va_list list;   // TO GET LIST TYPE OBJECT
    va_start(list , n);   // TO GET THE VARIABLE No. OF ARGUEMENTS

    int x; 
    int s = 0;
    for(int i = 0 ; i<n ; i++)
    {
        x= va_arg(list , int);   // GETTING ARGUEMENTS OF DEFINED TYPE
        s+=x;
    }
    return s;
}
int main()
{
    cout<<sun(3,10,20,30)<<endl;
    cout<<sun(5,10,20,30 , 40 , 50);
}

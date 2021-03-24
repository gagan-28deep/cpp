#include<iostream>
using namespace std;

int main()
{
    // DISPAY DIGITS OF A NUMBER FROM LAST

    // int n , r ;
    // cin>>n;
    // while (n!=0)
    // {
    //     r = n%10;
    //     n/=10;
    //     cout<<r<<endl;
    // }


    // ARMSTRONG NUMBER


    // int n , r , sum = 0 , m ; 

    // cin>>n;
    // m = n;
    // while (n>0)
    // {
    //     r = n%10;
    //     n/=10;
    //     sum = sum + r*r*r;
    // }
    
    // if (m==sum)
    // {
    //     cout<<"ARMSTRONG NUMBER";

    // }
    // else
    // {
    //     cout<<"NOT A ARMSTRONG NUMBER";
    // }

    // REVERSE A NUMBER

    // int n , r , reve = 0 ; 

    // cin>>n;
    // while (n>0)
    // {
    //     r = n%10;
    //     reve = reve*10+r;
    //     n/=10;
    // }
    // cout<<reve;
    

    // PALINDROME
    
    // int n  , m , r , reve = 0; 
    // cin>>n;
    // m = n ;
    // while(n>0)
    // {
    //     r = n%10;
    //     reve = reve * 10+r;
    //     n = n/10;
    // }
    // if(reve == m)
    // {
    //     cout<<"NUMBER IS PALINDROME";
    // }
    // else
    // {
    //     cout<<"NUMBER IS NOT PALINDROME";
    // }


    // GCD OF 2 NUMBERS

    int n , m ;
    cin>>n>>m;
    while (m!=n)
    {
        if(m>n)
        {
            m = m-n;

        }
        else
        {
            n = n-m;
        }
    }
    cout<<n;
    

    return 0;

    

}
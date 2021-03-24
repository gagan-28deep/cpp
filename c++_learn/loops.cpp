#include<iostream>
using namespace std;

int main()
{
    // int n , i=1;
    // cin>>n;
    // WHILE LOOP
    // while (i<=n)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // DO-WHILE

    // do
    // {
    //     /* code */
    //     cout<<i<<endl;
    //     i++;
    // }while(i>=n);   
    // //while (i<=n);
    

    // FOR 

    // for (int j = 1 ; j<=n ; j++)
    // {
    //     cout<<j<<endl;
    // }

    // MULTIPLICATION TABLE USING LOOPS

    // int n ;
    // cout<<"ENTER NUMBER ";
    // cin>>n;

    // for (int i = 1 ; i<=10 ; i++)
    // {
    //     cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    // }

    // SUM OF FIRST N NATURAL NUMBERS

    // int n ;
    // int sum = 0;

    // cin>>n ; 
    // for (int i = 1 ; i<=n ; i++)
    // {
    //     sum +=i;
    // }
    //  cout<<sum ; 


    // FACTORIAL 

    // int n  , fact = 1;
    // cin>>n;
    // for (int i = 1 ; i<=n ; i++)
    // {
    //     fact *=i;
    // }
    // cout<<"FACTORIAL IS "<<fact;
    
    // FACTORS

    // int n ;
    // cin>>n;
    // for (int i = 1 ; i<=n ; i++)
    // {
    //     if (n%i==0)
    //     {
    //         cout<<i<<endl;
    //     }
    // }


    // PERFECT NUMBER : THE SUM OF THE FACTORS OF A NUMBER IS DOUBLE THE NUMBER THEN IT IS PERFECT NUMBER


    // int n  , sum=0; 
    // cin>>n;
    // for (int  i=1 ; i<=n ; i++)
    // {
    //     if (n%i==0)
    //     {
    //         sum+=i;
    //     }

    // }
    // cout<<"SUM IS "<<sum<<endl;
    // if (2 * n == sum)
    // {
    //     cout<<"PERFECT NUMBER"<<endl;
    // }
    // else
    // {
    //     cout<<"NOT PERFECT NUMBER";
    // }


    //PRIME NUMBER

    int n , count = 0;

    cin>>n;
    for (int i = 1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            count++;
        }

    }
    if (count==2)
    {
        cout<<"IT IS PRIME NUMBER";
    }
    else
    {
        cout<<"IT IS NOT PRIME NUMBER";
    }
    return 0;


    
}
#include<iostream>
using namespace std;

// void print( int n )
// {
//     if( n == 0 )
//     {
//         return;
//     }
//     cout<<n<<endl;
//     print( n - 1 ); // FAITH
// }


// void printReverse( int n )
// {
//     if( n == 0 )
//     {
//         return;
//     }
//     printReverse( n - 1 );
//     cout<<n<<endl;
// }

void printIncreaseDecreasing( int  n )
{
    if( n == 0 )
    {
        return;
    }
    cout<<n<<endl;
    printIncreaseDecreasing( n - 1 ); // faith
    cout<<n<<endl;

}

void solve()
{
    int n;
    cin>>n;
    
    //Normal Way

    // for( int i = n; i >= 0; i-- )
    // {
    //     cout<<i<<endl;
    // }

    // Recursion

    // print( n );

    // printReverse( n );

    printIncreaseDecreasing( n );
}

int main()
{
    solve();
    return 0;
}


// 5
// 5 4 3 2 1 1 2 3 4 5
#include<iostream>
using namespace std;

void print( int *arr, int idx, int  n )
{
    if( idx == n  )
    {
        return;
    }
    cout<<arr[idx]<<" ";
    print( arr, idx + 1, n );
    cout<<arr[idx]<<" ";
}



void loopPrint( int *arr, int n )
{
    for( int i = 0; i < n; i++ )
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[] = { 1,7,11,13,15,856 };
    // loopPrint( arr, 6);
    print( arr, 0, 6 );
}

// { 1 , 5 , 6 , 8 , 12 }
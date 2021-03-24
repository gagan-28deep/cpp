#include<iostream>
using namespace std;

int main()
{
    int arr[] = { 1, 9, 96, 63, 12};
    int n = 6;

    for( int i = 0; i < n; i++ )
    {
        int idxMax = 0;
        for( int j = 1; j < n - i; j++ )
        {
            if( arr[idxMax] < arr[j] )
            {
                idxMax = j;
            }
        }
        int temp = arr[idxMax];
        arr[idxMax] = arr[ n - 1 - i ];
        arr[ n - i - 1 ] = temp;

    }

    for( int ele : arr )
    {
        cout<<ele<<" ";
    }
}
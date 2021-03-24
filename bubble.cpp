#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,3,15,96,8};
    int n = 5;

    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < n-i; j++ )
        {
            if( arr[j] > arr[j+1] )
            {
                int temp = arr[ j ];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for( int ele : arr)
    {
        cout<<ele<<" ";
    }
}
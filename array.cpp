#include<iostream>
using namespace std;

void solve()
{

    int size;
    cin>>size;
    int arr[size];
    int idx = 0;
    for( ; idx < 4; idx++ )
    {
        cin>>arr[idx];
    }

    cout<<"Enter Extra value";
    int x;
    cin>>x;

    // // arr[idx++] = x;
    // idx--;

    for( int i = 3; i >=0 ; i-- )
    {
        arr[i+1] = arr[i];
    }

    arr[0] = x;
    idx++;
    

    for( int i = 0; i < idx; i++  )
    {
        cout<<arr[i]<<" ";
    }

    for( int i = 0; i < idx; i++ )
    {
        arr[i] = arr[i+1];
    }
    idx--;




}

int main()
{
    solve();
}
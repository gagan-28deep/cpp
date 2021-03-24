#include<iostream>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[ n ];

    int f = -1, r = -1;
    int ch = 0;
    do{
        cout<<endl;
        cout<<"1. Push "<<endl;
        cout<<"2. Pop "<<endl;
        cout<<"3. Size "<<endl;
        cout<<"4. Top "<<endl;
        cout<<"5. Display"<<endl;
        cout<<"6. Exit "<<endl;
        cin>>ch;
        switch( ch )
        {
            case 1: 
                {
                    int x;
                    cout<<"Enter Element";
                    cin>>x;
                    if( f == -1 )
                    {
                        f++;
                        r++;
                        arr[f] = x;
                    }
                    else
                    {
                        arr[++r] = x;
                    }
                }
                break;
            case 2:
                {
                    if( f == r )
                    {
                        cout<<"Queue Underflow"<<endl;
                    }
                    else
                    {
                    cout<<"Popping Element is "<<arr[f];
                    arr[f] = 0;
                    f++;
                    }
                    
                }
                break;
            case 3:
                {
                    cout<<"Size "<<" "<<(r-f+1)<<endl;
                }
                break;
            case 4:
                {
                    cout<<"Top"<<"  ";
                    cout<<arr[f]<<endl;
                }
                break;
            case 5:
                {
                    int i = f;
                    for( ; i <= r; i++ )
                    {
                        cout<<arr[ i ]<<" ";
                    }
                }
                break;
        }
    }while( ch != '6');


}



int main()
{
    solve();
    return 0;
}
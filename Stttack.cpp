#include<iostream>
#include<stack>
using namespace std;

void solve()
{
    stack<int> s;

    // int x;
    // cin>>x;

    s.push( 30 );

    s.push( 40 );

    s.push( 50 );

    s.pop();

    cout<<s.top();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    if( s.empty() )
    {
        cout<<"Empty";
    }
    cout<<s.empty();
    cout<<s.size();

}


int main()
{
    solve();
    return 0;
}
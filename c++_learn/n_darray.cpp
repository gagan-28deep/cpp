#include<iostream>
using namespace std;
int main()
{
    // 2-D ARRAY

    // int A[2][3] = {{2,3,4} , {6,7,8}};
    // // int A[2,3] = {2,3,4,6,7,8}

    // for (int i = 0 ; i<2 ; i++)
    // {
    //     for(int j = 0 ; j<3 ; j++)
    //     {
    //         cout<<A[i][j];
    //     }
    //     cout<<endl;
    // }

    //  A[2][3] = {{2,3,4} , {6,7,8}};
    // for (auto& x:A)      // REFERENCE TO ARRAY
    // {
    //     for (auto& y:x)      // REFERNCE OF COLUMNS
    //     {
    //         cout<<y<<" ";
    //     }
    //     cout<<endl;
    // }


     rows , columns ; 
    cout<<"ENTER NUMBER OF ROWS" ; 
    cin>>rows;
    cout<<"ENTER NUMBER OF COLUMNS";
    cin>>columns; 
     A[rows][columns];
    // TAKING VALUES
    for ( i = 0 ; i<rows ; i++)
    {
        for ( j = 0 ; j<columns ; j++)
        {
            cin>>A[i][j];
        }
    }
    // DISPLAYING
    for ( i = 0 ; i<rows ; i++)
    {
        for ( j = 0 ; j<columns ; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    
    //  A[2][3] = {{2,3,4} , {6,7,8}};
    
    // int B[2][3] = {{5,6,3} , {2,4,9}};
    
    // int C[2][3];

    // for (int i = 0 ; i<2 ;i++)
    // {
    //     for (int j = 0 ; j<3 ; j++)
    //     {
    //         C[i][j] = A[i][j] + B[i][j];
    //     }
    // }

    // for (int i = 0 ; i<2 ;i++)
    // {
    //     for (int j = 0 ; j<3 ; j++)
    //     {
    //         cout<<C[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0 ;
}
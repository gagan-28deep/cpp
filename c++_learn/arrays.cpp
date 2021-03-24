// #include<iostream>
// using namespace std;

// int main()
// {
    // int A[5] = {2,3,6,7,98};
    // float b[] = {1,1.2f,4.5,3,7};
    // for (int i = 0 ; i < 5 ; i++)
    // {
    //     cout<<A[i]<<endl;
    // }

    // for(int x:A) // x FOR ELEMENTS IN A . FOR EACH LOOP IS USED IN ARRAY LIKE DATA STRUCTURE. IT WORKS ON THE SIZE OF AN ARRAY
    // {
    //     cout<<x<<endl;
    // }
    // for (auto j:b)
    // {
    //     cout<<j<<endl;
    // }


    // SUM OF ALL THE ELEMENTS IN AN ARRAY

    // int n[10]  = {1,2,3,4,5,6,7,8,9,10};
    // int sum = 0;
    // for (int i = 0 ; i<=10 ; i++)
    // //for (auto i:n)
    // {
    //     sum = sum + n[i];
    // }
    // cout<<"SUM IS "<<sum;


    // MAXIMUM IN AN ARRAY

    // int n[10]  = {2,3,5,7,8,23,99,196,67,2};

    // int max = n[0];
    //int max = INT_MIN;  2nd 

    // for (int i =1 ; i<10 ; i++)    // 2nd  for(auto x:n)
    // {
    //     if (n[i]>max)     //2nd if(x>max)
    //     {                        // { max = x;}
    //         max = n[i];
    //     }
    // }
    // cout<<max;


    // LINEAR SEARCH

    // int n[10] , key;
    // int size  , key; 
    // cout<<"ENTER SIZE OF ARRAY";
    // cin>>size ;
    // int k[size];
    // cout<<"ENTER THE NUMBERS";
    // for (int i = 0 ; i<size ; i++)
    // {
    //     cin>>k[i];
    // }
    // cout<<"ENTER THE ELEMENTS YOU WANT TO SEARCH";
    // cin>>key;

    // for(int j = 0 ; j<size ; j++)
    // {
    //     if(key == k[j])
    //     {

    //         cout<<"ELEMENT FOUND AT "<<j;
    //         return 0 ;
    //     }
    // }
    // cout<<"ELEMENTS IS NOT PRESENT IN AN ARRAY";



    // BINARY SEARCH

    // int n[10] = {3,6,7,9,23,34,45,57,78,89};
    // int l = 0  , h = 9 , key , mid ;
    // cout<<"ENTER KEY ";
    // cin>>key;

    // while (l<=h)
    // {
    //     mid = (l+h)/2;
    //     if(key == n[mid])
    //     {
    //         cout<<"ELEMENT FOUND AT "<<mid<<" ELEMENTS IS "<<n[mid];
    //         return 0 ;  //exit(0);
    //     }
    //     else if (key<n[mid])
    //     {
    //         h = mid - 1;
    //     }
    //     else
    //     {
    //         l = mid + 1;
    //     }

    // }
    // cout<<"ELEMENT IS NOT PRESENT";
    


    //return 0;
//}
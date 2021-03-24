#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    // int x , y;
    // cin>>x>>y;
    // if(x>y)
    // {
    //     cout<<"GREATER IS "<<x;
    // }
    // else{
    //     cout<<"GREATER IS "<<y;
    // }


    // int hour;
    // cin>>hour;
    // if(hour>=9 && hour<=18)
    // {
    //     cout<<"LEISURE HOUR";
    // }
    // else{
    //     cout<<"WORKING HOUR";
    // }

    // NESTED IF-ELSE

    // int a,b,c;
    // cin>>a>>b>>c;

    // if(a>b && a>c)
    // {
    //     cout<<a;
    // }
    // else if (b>c)
    // {
    //     cout<<b;
    // }
    // else{
    //     cout<<c;
    // }

    //QUADRATIC EQUATION

    // float a,b,c,d,r1,r2;

    // cout<<"ENTER a,b,c "<<endl;
    // cin>>a>>b>>c;

    // d = b*b-4*a*c;

    // if (d==0)
    // {
    //     cout<<"ROOTS ARE REAL AND EQUAL"<<endl;
    //     cout<<(-b/(2*a));
    // }
    // else if (d>0)
    // {
    //     cout<<"ROOTS ARE REAL AND UNEQUAL"<<endl;
    //     cout<<(-b+sqrt(d))/(2*a);
    //     cout<<(-b-sqrt(d))/(2*a);

    // }
    // else
    // {
    //     cout<<"ROOTS ARE IMAGINARY"<<endl;
    // }

    // int a = 10 , b = 5;

    // if (int c = a+b ; c>10;)
    // {
    //     cout<<c<<endl;
    // }


    // SWITCH CASE

    // int day;
    // cout<<"ENTER VALUE OF DAY";
    // cin>>day;

    // switch (day)
    // {
    // case 1:
    //     cout<<"MONDAY";
    //     break;
    // case 2:
    //     cout<<"TUESDAY";
    //     break;
    // case 3:
    //     cout<<"WEDNESDAY";
    //     break;
    // case 4:
    //     cout<<"THURSDAY";
    //     break;
    // case 5:
    //     cout<<"FRIDAY";
    //     break;
    // case 6:
    //     cout<<"SATURDAY";
    //     break;
    // case 7:
    //     cout<<"SUNDAY";
    //     break;

    // default:
    //     cout<<"INVALID DAY";
    // }
    


    int a , b ,c, option ;

    cout<<"MENU\n";
    cout<<"1. ADD \n"<<"2. SUBTRACT\n"<<"3. MULTIPLY\n"<<"4. DIVIDE\n";
    cout<<"ENTER YOUR CHOICE ";
    cin>>option;
    cout<<"ENTER 2 NUMBERS \n";
    cin>>a>>b;

    switch (option)
    {
    case 1:
        c = a+b;
        break;
    case 2: 
        c = a-b;
        break;
    case 3:
        c = a*b;
        break;
    case 4:
        c = a/b;
        break;
    default:
        cout<<"INVALID CHOICE";
    }
    cout<<c<<endl;



    return 0;
}
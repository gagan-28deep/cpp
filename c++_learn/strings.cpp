#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    // char S[10] = "Hello";
    // char U[] = "Hello";
    // char T[] = {'H' , 'e' , 'l' , 'l' , 'l' , 'o'  , '\0'};
    // string s = "HEllo";
    // cout<<S<<endl;
    // cout<<U<<endl;
    // cout<<T<<endl;
    // cout<<s<<endl;


    // READ FROM STRINGS 

    // char S[50];
    // cout<<"ENTER YOUR NAME";
    // //cin.get(S , 50);
    // cin.getline(S , 50);
    // cout<<"NAME IS "<<S;

    // char S[100];
    // cin.get(S,100);
    // cout<<"NAME "<<S<<endl;
    // cin.ignore(); // TO CLEAR KEYBOARD BUFFER : TO CLEAR THE FIRST GET METHOD
    // char T[30];
    // cin.get(T,30);
    // cout<<"HELLO "<<T;


    // char S[100];
    // cin.getline(S,100);
    // cout<<"NAME "<<S<<endl;

    // char T[30];
    // cin.getline(T,30);
    // cout<<"HELLO "<<T;

    // STRING FUNCTIONS

    // char S[100];
    // cin.getline(S,100);
    // cout<<strlen(S);


    // char S[20] = "GOOD";
    // char S1[20] = "MORNING";
    // //strcat(S,S1);
    // strncat(S , S1 , 4);
    // cout<<S<<endl;
    // //cout<<strncat(S , S1 , 5);

    // char S1[10] = "Gooddddd";
    // char S2[] = "";

    // //strcpy(S2 , S1);
    // strncpy(S2, S1 , 2);
    // cout<<S2<<endl;

    //char S1[] = "Programming";
    // char S2[] = "m";
    // if (strstr(S1 , S2)!= NULL)
    // {
    //     cout<<strstr(S1 , S2);
    // }
    // else{
    //     cout<<"WORD NOT FOUND";
    // }


    // char S1[] = "Programming";
    // cout<<strchr(S1 , 'r')<<endl;
    // cout<<strrchr(S1 , 'r');
    

    // char s[] = "Hello";
    // char e[] = "Hello";
    // char r[] = "hello";
    // char p[] = "apple";
    // cout<<strcmp(s,e)<<endl;
    // cout<<strcmp(s,r)<<endl;
    // cout<<strcmp(p ,s)<<endl;


    // char s[] = "234";
    // char t[] = "54.65";
    // int long x = strtol(s , NULL , 10);
    // float y = strtof(t , NULL);
    // cout<<x<<endl;
    // cout<<t;


    char s[] = "x=10 ; y=20 ; z=35";
    //cout<<strtok(s , "=;");

    char *token = strtok(s , "=;");
    while (token != NULL)
    {
        cout<<token<<endl;
        token = strtok(NULL , "=;");
    }
    

    return 0 ;

}
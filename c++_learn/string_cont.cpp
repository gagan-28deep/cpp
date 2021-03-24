#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    // COUNT THE LENGTH OF THE STRING

     //string str = "WELCOME";
    // int counter = 0;
    // for (int i = 0 ; str[i] !='\0' ; i++)
    // {
    //     counter++;
    // }
    // cout<<counter<<endl;

    // USING STRING ITERATOR

    // int counter = 0;
    // string::iterator it;
    // for (it = str.begin() ; it !=str.end() ; it++)
    // {
    //     counter++;
    // }
    // cout<<counter<<endl;


    // CHANGE FROM UPPER CASE TO LOWER CASE:
    // for (int i = 0 ;str[i]!='\0' ; i++)
    // {
    //     if(str[i]>=65 && str[i] <=90)     // CONDITION IF SOMETHING IS ALREADY IN LOWER CASE 
    //     {

    //         str[i] = str[i] + 32;
    //     }
    // }
    // cout<<str;


    // CHANGE FROM LOWER CASE TO UPPER CASE

    // string s = "welcome";
    // for (int i = 0 ; s[i]!='\0' ; i++)
    // {   
    //     if(s[i]>=97 && s[i]<=122 )
    //     {
    //         s[i] = s[i] - 32;

    //     }
    // }
    // cout<<s;

    // COUNT NUMBER OF VOWELS , CONSONENTS , WORDS

    // string str = "how Many words";
    // int v_count = 0;
    // int c_count = 0;
    // int w_count = 1;

    // for (int i = 0 ; str[i]!='\0' ; i++)
    // {
    //     if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    //     {
    //         v_count ++;
    //     }
    //     else if (str[i] ==' ')
    //     {
    //         w_count ++;
    //     }
    //     else
    //     {
    //         c_count++;
    //     }
    // }
    //     cout<<"VOWELS = " <<v_count<<endl;
    //     cout<<"CONSONENTS = " <<c_count<<endl;
    //     cout<<"WORDS = " <<w_count<<endl;

    // PALINDROME 

    // string s = "Honey";
    // string rev = "";
    // int len = s.length();
    // rev.resize(len);

    // for (int i = 0 ,  j =len-1 ; i<len ; i++ , j--)
    // {
    //     rev[i] = s[j];
    // }
    // rev[len] = '\0';
    // if (s.compare(rev)==0)
    // {
    //     cout<<"PALINDROME STRING";
    // }
    // else
    // {
    //     cout<<"NOT PALINDROME STRING";
    // }



    // FIND USERNAME FROM EMAIL ID
    // string s = "gagandeep1234@gmail.com";
    // int i = s.find('@');
    // //cout<<s.find('@');
    // cout<<endl<<s.substr(0,i);
    



    return 0 ;
}
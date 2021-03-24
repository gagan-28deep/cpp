#include<iostream>
using namespace std;

// 8 

template<typename T>
void fun(T p)
{
    p();
}


int main()
{
    // //1
    // [](){cout<<"Hello"<<endl;}();
    // //2
    // [](int x , int y){cout<<"Sun is "<<x+y<<endl;}(10,5);

    // // 3

    // auto f = [](int x , int y){cout<<"Sun is "<<x+y<<endl;};

    // f(20,43);

    // //4

    // cout<<([](int x , int y){return x+y;}(23,56));

    // //5

    // int a = [](int x , int y)->int{return x+y;}(10,30);
    // cout<<endl<<a;

    // 6

    // int a = 10;

    // auto f = [a](){cout<<a<<endl;};

    // f();
    // a++;
    // f();

    // 7

    // int a = 10;

    // auto f = [&a](){cout<<a++<<endl;};

    // f();
    // a++;
    // f();

    // 8  LAMBDA EXPRESSION TO FUNCTION

    
    int a = 10;

    auto f = [&a](){cout<<a++<<endl;};

    fun(f);
    a++;
    fun(f);






}
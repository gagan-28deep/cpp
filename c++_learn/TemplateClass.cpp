#include<iostream>
using namespace std;
template<class T>
class Stack
{
private:
    T *stk; // int
    int size;
    int top;
public:
    Stack(int sz)
    {
        size = sz;
        top=-1;
        stk = new T[size]; //int
    }
    void push(T x); //int 
    T pop(); //int

};
template <class T> // FOR TEMPATE FUNCTION
void Stack<T>::push(T x) //int
{
    if(top==size-1)
    {
        cout<<"Stack is full"<<endl;
    }
    else{
        top++;
        stk[top] = x;
    }
}

template <class T>
int Stack<T>::pop()
{
    T x = 0;  //int
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        x = stk[top];
        top--;
    }
    return x; 
}
int main()
{
    Stack<int> s(10); // FOR INT
    Stack<float> s(10); // FLOAT
    Stack s(10);
    s->push(10);
    s->push(90);
    s->push(78);
}
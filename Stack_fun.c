#include<stdio.h>
int n;
int stack[100];
int top = -1;
void push()
{
    int x;
    printf("Enter number \n ");
    scanf("%d",&x);
    if (  top+1 > n)
    {
        printf("Stack Overflow \n");
    }
    else 
    {
        top++;
        stack[top]=x;
    }
}
int pop()
{   
    if (top ==-1)
    {
        printf("Stack Underflow \n");
       return -1 ;
    }
    else 
    {
        int r = stack[top];
        top -- ;
        return r;
    }
}
int topelement()
{
    if (top ==-1)
    {
        printf("Stack underflow \n");
        return -1 ; 
    }
    else 
    {
        return stack[top];
        // printf("%d",stack[top]);
    }
}
void size()
{
    int size = top+1;
    printf(" size is %d \n",size);
}
int main()
{
    printf("ENTER THE SIZE OF THE STACK  ");
    scanf("%d",&n);

    
    
    int ch = 1;

    do{
        printf("Opertions on Stack \n");
        printf("Enter Your choice \n");
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. Top \n");
        printf("4. Size \n");
        printf("5. Exit\n");

        scanf("%d",&ch);

        if( ch == 1 )
        {
            push();
            printf("\n");
        }
        else if (ch == 2)
        {
            int x = pop();
            printf("%d",x);
        }
        else if (ch == 3)
        {
            //topelement()
            printf("%d", topelement());
        }
        else if (ch == 4)
        {
            size();
        }
    }
    while ( ch != 5);
        
}


#include<stdio.h>

int add (int a,int b)
{
    return a+b;
}
int multiply (int a,int b)
{
    return a*b;
}
void subtract(int a ,int b)
{
    printf("%d",a-b);
}
int main()
{
    int a=0 , b=0 ,c=0;
    printf("ENTER VALUE OF A ");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B");
    scanf("%d",&b);

    c = add(a,b);
    printf("THE ADDITION OF 2 NUMBERS IS %d",c);
    
    //int d=0;
    multiply(a,b);
    printf("THE MULTIPLICATION OF 2 NUMBERS IS %d",a*b);

    subtract(a,b);
}
#include<stdio.h>

int main()
{
    int n=0;
    printf("ENTER THE SIZE OF THE ARRAY");
    scanf("%d" , &n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int k; 
    printf("ENTER THE VALUE TO BE ADDED");
    scanf("%d",&k);
    for(int i =0; i<n;i++ )
    {
        arr[i]+=k;
    }
    for(int i  =0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}

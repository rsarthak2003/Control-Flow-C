#include<stdio.h>
int main()
{
    int x;
    printf("enter integer:\n");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;

}
#include<stdio.h>
int main()
{
    int x;
    printf("enter number:");
    scanf("%d",&x);
    if (x>0)
    {
        printf("positive");
    }
    else if(x==0)
    {
        printf("zero");
    }
    if(x<0)
    {
        printf("neagtive");
    }
    return 0;
}
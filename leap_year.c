#include<stdio.h>
int main()
{
    int x;
    printf("enter year:");
    scanf("%d",&x);
    if(x%4==0&&x%100!=0)
    {
        printf("is a leap year");
    }
    else if(x%400==0)
    {
        printf("is a leap year");
    }
    else 
    {
        printf("not a leap year");
    }
    return 0;
}
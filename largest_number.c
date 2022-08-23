#include<stdio.h>
int main()
{
    int a,b,c;
    printf("write number:");
    scanf("%d",&a);
    printf("second number:");
    scanf("%d",&b);
    printf("third number:");
    scanf("%d",&c);
    if(a>=b && a>=c)
    {
        printf("a is largest number");
    }
    else if(b>=a && b>=c)
    {
        printf("b is largest number");
    }
    else
    {
        printf("c is largest number");
    }
    return 0;
}
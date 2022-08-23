#include<stdio.h>
int main()
{
    int operation,x,y;
    printf("operation:");
    scanf("%d",&operation);
    printf("value of x:");
    scanf("%d",&x);
    printf("value of y:");
    scanf("%d",&y);
    int result;
    if(operation==1)
    {
        result=(x+y);
        printf("addition is %d+%d=%d",x,y,result);
    }
    else if(operation==2)
    {
        result=(x-y);
        printf("substraction is %d-%d=%d",x,y,result);
    }
    else if(operation==3)
    {
        result=(x*y);
        printf("multiplication is %d*%d=%d",x,y,result);
    }
    else
    {
        printf("not valid operation");
    }
    return 0;
}
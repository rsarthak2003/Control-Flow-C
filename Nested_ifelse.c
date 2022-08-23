#include<stdio.h>
int main()
{
    int x;
    printf("enter number:");
    scanf("%d",&x);
    if (x>0&x%2==0)
    {
        printf("positive even");
    }
    else if (x>0&x%2!=0)
    {
        printf("postive odd");
    }
    else if (x<0&x%2==0)
    {
        printf("negative even");
    }
    else if(x<0&x%2!=0)
    {
        printf("negative odd");
    }
   else
   {
    printf("zero");
   }
    return 0;
}
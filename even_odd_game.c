#include<stdio.h>
int main()
{
    int n;
    printf("enter cups:");
    scanf("%d",&n);
    if(n%2==0)
   {
    printf("opponent wins");
   }
   else
    {
        printf("player wins");
    }
    return 0;
}


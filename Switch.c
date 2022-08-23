#include<stdio.h>
int main()
{
    int x=0,y=0;
    printf("enter choice:\n");
    char c;
    scanf("%c",&c);
    switch(c)
    {
        case 'l':x--;
                break;
        case 'r':x++;
                break;
        case 'u':y++;
                break;
        case 'd':y--;
                break;
        default:printf("invalid move");
    }
    printf("%d %d",x,y);
    return 0;                
    }


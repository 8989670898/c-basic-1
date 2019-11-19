#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter the two number:");
    scanf("%d %d", &x, &y);

    if(y>0)
    {
        while(y!=0){
            x++;
            y--;
        }
    }
    else if(y<0)
    {
        while(y!=0){
            x--;
            y++;
    }
    }
    printf("The sum of two number is: %d",x);
    return 0;
}

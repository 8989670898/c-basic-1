#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter any two number:");
    scanf("%d %d", &x, &y);

    while(y!=0)
    {
        x++;
        y--;
    }
    printf("The sum of two number is: %d",x);
    return 0;
}

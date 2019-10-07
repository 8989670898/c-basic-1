#include<stdio.h>
int main()
{
    int a,num,fact=1;
    printf("Enter the number =");
    scanf("%d",&num);
    if(num==0)
        fact=1;
    else if(num>0)
    {
        for(a=1;a<=num;a++)
            fact=fact*a;
    }
    printf("The factorial of a number is %d is =%d ");

}

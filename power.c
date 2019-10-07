#include<stdio.h>
int main()
{
    int a,b,c,d,result=1;
    printf("\n Enter any two number= ");
    scanf("%d %d",&a,&b);
    c=a;
    d=b;
    while(b>0)
    {
        result=result*a;
        b--;
    }
    printf("%d raised to the powwer %d= %d",c,d,result);
}

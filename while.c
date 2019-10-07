#include<stdio.h>
int main()
{
    int hours,employee,overtime,pay;
    for(employee=1;employee<=10;employee++);
    {
        printf("Enter no. of hours worked by %d employee:",employee);
        scanf("%d",&hours);
        if(hours>40)
        {
            overtime=overtime+40;
            pay=overtime*12;
            printf("The overtime pay for employee= %d\n ",pay);
        }
        else if(hours<40)
        printf("this is no overtime pay for employee");
    }
}

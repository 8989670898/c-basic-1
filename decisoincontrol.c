#include<stdio.h>
int main()
{
    int cy,yoj,bonus,yr_of_ser;
    printf("Enter the current year and year of join:");
    scanf("%d%d",&cy,&yoj);
    yr_of_ser=cy-yoj;
    if(yr_of_ser > 3){
        bonus=2500;
        printf("Bonus=Rs.%d",bonus);
    }
}

#include<stdio.h>

int main()
{
    int bs;
    float a1,a2,gs;
    printf("Enter basic salary of Ramesh:");
    scanf("%d",&bs);
    a1=bs*0.4;
    a2=bs*0.2;
    gs=bs-a1-a2;
    printf("The gross salary is %f", gs);
    getch();

}

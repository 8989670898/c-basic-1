#include<stdio.h>
int main()
{
    int qnt,dis=0;
    float rate,tot;
    printf("Enter the quantity and rate: ");
    scanf("%d %f",&qnt,&rate);

    if(qnt>1000)
        dis=10;
    tot=(qnt*rate)-(qnt*rate*dis/100);
    printf("The amount is = Rs. %f",tot);
}



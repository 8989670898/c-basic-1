#include<stdio.h>
int main()
{
    int i;
    printf("Enter choice 1 or 2:");
    scanf("%d",&i);
    if(i==1)
        printf("You have achieved what you want ");
        else{
            if(i==2)
                printf("You have to work harder");
            else
                printf("How about to talk about parents");
        }
}

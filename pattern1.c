#include<stdio.h>
#include<conio.h>

int main()
{
    int r,sp,p,no,n;
    printf("Enter no. of rows:");
    scanf("%d", &no);
    n=no;
    for(r=1;r<=no;r++){
        for(sp=1;sp<=n;sp++)
        {
            printf(" ");
        }
        n--;
        for(p=1;p<=r;p++)
        {
            printf("%d ",p);
        }
        printf("\n");
    }
}

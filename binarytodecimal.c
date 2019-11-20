#include<stdio.h>
int main()
{
    int rem,num,decimal=0,base=1,binary;
    printf("Enter the binary number");
    scanf("%d",&binary);

    num = binary;
    while(binary!=0)
    {
        rem=binary%10;
        decimal=decimal+rem*base;
        binary = binary /10;
        base = base*2;
    }
    printf("The equivalent decimal number %d is: %d", num,decimal);
    return 0;
}

#include<stdio.h>

extern int a, b;
extern int c;
extern float f;

int main()
{

    int a, b;
    int c;
    float f;

    a=10;
    b=20;
    c=a+b;
    printf("Value of c is : %d\n", c);

    f=30.0/7.0;
    printf("Value of f is : %d\n", f);
    return 0;
}

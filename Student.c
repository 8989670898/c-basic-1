#include<stdio.h>
int main()
{
    float A,B;
    printf("Enter the percent of subject in A and In subsidiary B:");
    scanf("%f %f",&A,&B);
    if((A>=55)&&(B>=45))
        printf("The Student is qualified\n");
    else if((A<55)&&(B>=55)&&(A>=45))
        printf("The Student is qualified\n");
    else if((A>=65)&&(B<45))
        printf("The student is allowed to reappear");
    else
        printf("He is not qualified");
}

#include<stdio.h>
 main()
{
    float dkm,dm,df,dc;
    printf("Enter the distance between two cities:");
    scanf("%f",&dkm);
    dm=dkm*1000;
    df=dkm*3280.0899;
    dc=dkm*100000;
    printf("\nDistance in \nmeters = %f\nfeet =%f\ncentimeter = %f",dm,df,dc);
    getch();
}

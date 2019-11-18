#include<stdio.h>
void main()
{
    char print="#";
    int row,col;
    int noofrows=8;

    for(row=1;row<=noofrows;row++){
        for(col=1;col<=row;col++){
            printf("%c",print);
        }
        printf("\n");
    }
}

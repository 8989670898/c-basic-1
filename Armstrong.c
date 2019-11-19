#include<stdio.h>
int main()
{
    int number,count=0, result=0, mul=1, cnt, rem;
    printf("Enter any number: ");
    scanf("%d",&number);

    int q=number;
    while((q!=0)){
        q=q/10;
        count++;
    }
cnt=count;
q=number;

while(q!=0)
{
    rem=q%10;
    while(cnt!=0)
        {
            mul=mul*rem;
            cnt--;
        }
        result= result + mul;
        cnt= count;
        q=q/10;
        mul =1;

    }
    if(result==number)
        printf("This is a armstrong number", number);
    else
        printf("This is not a armstrong number",number);
    return 0;
}

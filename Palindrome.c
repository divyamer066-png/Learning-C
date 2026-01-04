#include<stdio.h>
int main()
{
    int n,rem,rev=0,temp;
    printf("enter numbers of terms");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("\n reverse is%d",rev);
    if(temp==rev)
    {
        printf("number is pallindrone");
    }
    else
    {
        printf("number is not pallindrone");
    }
    return 0;
}

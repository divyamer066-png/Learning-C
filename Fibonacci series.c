#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    printf("enter numbers of terms");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d\t%d",a,b);
    for(i=2;i<=n;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    return 0;
}

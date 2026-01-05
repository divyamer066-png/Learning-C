#include<stdio.h>

int main()
{
int a[10],n,i,search,f=0;
printf("enter number of elements=");
scanf("%d",&n);
printf("enter values in arrays=");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter any number to be search=");
scanf("%d",& search);
for(i=0;i<n;i++)
{
	if (search==a[i])
	{f=1;
	break;
	}
}
if(f==1)
{
	printf("number is present");
}
else
{
	printf("number is not present");
}

return 0;
}

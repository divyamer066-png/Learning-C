#include<stdio.h>
int main()
{
    float basic_sal,hra,ta,da,total;
    printf("enter basic salary");
    scanf("%f",&basic_sal);
    hra=0.03*basic_sal;
    ta=0.05*basic_sal;
    da=0.03*basic_sal;
    total=basic_sal+hra+ta+da;
    printf("total salary is: %.2f\n",total);
    return 0;
}
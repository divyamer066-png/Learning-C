// swap two numbers using function in c



#include<stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int x,y;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("after swaping numbers are x=%d and y=%d",x,y);
    return 0;
}

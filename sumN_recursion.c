// sum of N numbers using recursion function...


#include<stdio.h>
int sum(int n){
    if(n==0)
    return 1;
    return n+sum(n-1);
}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("sum=%d",sum(n));
    return 0;
}

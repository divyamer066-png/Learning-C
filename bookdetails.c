// WAP to store details of 5 books using an array of structures and display them.


#include<stdio.h>
struct book{
    int id;
    char name[50];
    float price;
};
int main(){
    struct book b;
    int i;
    printf("enter id , name and price of the book");
    for(i=0;i<=5;i++){
        scanf("%d%s%f",&b.id,b.name,&b.price);
    }
    printf("All Details of the book\n");
    for(i=0;i<=5;i++){
        printf("id:%d\n",b.id);
        printf("name:%s\n",b.name);
        printf("price:%.2f\n",b.price);
    }
    return 0;
}

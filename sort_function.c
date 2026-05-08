// sorting array using function...

#include<stdio.h>
int sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("enter size");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort (arr,n);
    printf("sorted array");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}

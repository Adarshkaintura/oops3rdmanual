#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int n;
    printf("Enter the total number of elments in the array:");
    scanf("%d",&n);
    printf("Enter the element in the array:");
    arr=(int*)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",arr+i);
    }
    printf("Elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(arr+i));
    }   
    free(arr);
return 0;
}
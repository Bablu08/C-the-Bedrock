#include<stdio.h>
int main(){
    int n, arr[n], i;

    printf("Enter array Index:");
    scanf("%d", &n);
    printf("Enter an Element on array:\n");

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Value of an array:\n");
    for(i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
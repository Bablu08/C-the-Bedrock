#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, arr[n], i;

    system("clear");
    printf("Enter array Index:");
    scanf("%d", &n);
    printf("Enter an Element on array:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Value of an array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nReverse of an Array: ");
    for ( i = n - 1 ; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}
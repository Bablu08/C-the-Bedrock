#include<stdio.h>
int main(){
    int n, arr[n], i;

    printf("Enter Array Index: ");
    scanf("%d", &n);

    printf("Enter array No:");

    for(i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Value Is:");
    for ( i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    printf("After deleting last element the array is:\n");
    for ( i = 0; i < n-1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
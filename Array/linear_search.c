#include<stdio.h>
int main(){
    int n, arr[n], i, item;

    printf("Enter array index: ");
    scanf("%d", &n);

    printf("Enter Elements an Array:\n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Array value is:\n");

    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter Element to be found: ");
    scanf("%d", &item);

        for (i = 0; i < n; i++)
        {
            if(item == arr[i]){
                printf("Element found\n");
            }
            else{
                printf("Element not found\n");
            }
        }
    return 0;
}
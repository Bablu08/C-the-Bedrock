#include<stdio.h>
int main(){
    int temp, n, arr[n], i;

    printf("Enter Array Index: ");
    scanf("%d", &n);

    printf("Enter array No:\n");

    for(i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Value Is:");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe Largest element in an Array is: ");
    for(i = 0; i < n; i++){

        for ( i = 0; i < n ; i++)
        {

            if ( arr[0] >= arr[i] )
            {
                
            }else{
                temp = arr[i];
                arr[i] = arr[0];
                arr[0] = temp;
            }

        }
        printf("%d\n", arr[0]);

    }

    return 0;
}
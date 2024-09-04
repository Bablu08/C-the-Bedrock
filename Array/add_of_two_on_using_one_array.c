#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");

    int arr[3];

    printf("Enter first element: ");
    scanf("%d", &arr[0]);
    
    printf("Enter second element: ");
    scanf("%d", &arr[1]);
    
    // printf("%d %d \n", arr[0], arr[1]);

    arr[2] = arr[0] + arr[1];

    printf("The sum of two no is: %d\n", arr[2]);

    return 0;
}
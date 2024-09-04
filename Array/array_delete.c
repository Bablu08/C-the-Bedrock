#include <stdio.h>

int main() {
    int n, x, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Value of the array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter position of element to delete (0 to %d): ", n-1);
    scanf("%d", &x);

    if (x >= 0 && x < n) {
        for (i = x; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Invalid position!\n");
    }

    return 0;
}
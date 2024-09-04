#include <stdio.h>

int main() {
    int n, i, searchElement, found = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    // Linear search algorithm
    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            printf("Element %d found at position %d.\n", searchElement, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, searchElement, low, high, mid;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array (must be sorted)
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    // Initialize low and high
    low = 0;
    high = n - 1;

    // Binary search loop
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == searchElement) {
            printf("Element %d found at position %d.\n", searchElement, mid + 1);
            return 0;
        } else if (arr[mid] < searchElement) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // If the element is not found
    printf("Element %d not found in the array.\n", searchElement);
    return 0;
}

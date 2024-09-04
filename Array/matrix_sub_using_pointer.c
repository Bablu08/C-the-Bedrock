#include <stdio.h>

int main() {
    int rows, cols;

    // Input the size of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
    int *p1 = &matrix1[0][0];
    int *p2 = &matrix2[0][0];
    int *p3 = &result[0][0];

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows * cols; i++) {
        printf("Enter element [%d][%d]: ", i / cols, i % cols);
        scanf("%d", (p1 + i));
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows * cols; i++) {
        printf("Enter element [%d][%d]: ", i / cols, i % cols);
        scanf("%d", (p2 + i));
    }

    // Subtracting the matrices
    for (int i = 0; i < rows * cols; i++) {
        *(p3 + i) = *(p1 + i) - *(p2 + i);
    }

    // Display the result
    printf("Resultant matrix after subtraction:\n");
    for (int i = 0; i < rows * cols; i++) {
        printf("%d\t", *(p3 + i));
        if ((i + 1) % cols == 0) {
            printf("\n");
        }
    }

    return 0;
}

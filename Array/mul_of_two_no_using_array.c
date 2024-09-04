#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");

    int a[1], b[1], c[1];

    printf("Enter first Element: ");
    scanf("%d", &a[1]);

    printf("Enter second Element: ");
    scanf("%d", &b[1]);

    c[1] = a[1] * b[1];

    printf("The mul of two no is: %d \n", c[1]);

    return 0;
}
#include<stdio.h>
int main(){
    char s[10] = "Nalanda";

    printf("\n\n");
    for ( int i = 0; s[i] != '\0'; i++)
    {
        printf("%c ", s[i]);
    }
    printf("\n\n");

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

/*
/-----------------------------------------------\
   Function for Creating tree structure
\-----------------------------------------------/
*/

void treeStructure(){}

/*
/-----------------------------------------------\
   Function for In-order Traversal
\-----------------------------------------------/
*/

void inOrder(){
    
}

/*
/-----------------------------------------------\
   Function for Preorder Traversal
\-----------------------------------------------/
*/

void preOrder(){}

/*
/-----------------------------------------------\
   Function for Postorder Traversal
\-----------------------------------------------/
*/

void postOrder(){}

/*
/-----------------------------------------------\
   Function for Main
\-----------------------------------------------/
*/

int main(){
    system("clear");

    // Your code here
    printf("< < < Create a Tree > > >");
    printf("\nEnter data on tree:\n");
    // Call function
    
    // Tree operations
    int choice;
    while (1)
    {
        /* code */
        printf("\n< < < Tree Operations > > >\n");
        printf("\n1.In-order\n2.Pre-order\n3.Post-order");

        printf("\nEnter Operations:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            inOrder();
            break;
        case 2:
            preOrder();
            break;
        case 3:
            postOrder();
            break;
        default:
            printf("You enter wrong Number.\nPlease try again!\n");
            break;
        }
    }
    return 0;
}
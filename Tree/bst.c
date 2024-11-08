#include <stdio.h>
#include <stdlib.h>

// Define the structure of a binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

/*
/-----------------------------------------------\
   Function for Insertion in BST
\-----------------------------------------------/
*/

struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    } else {
        printf("Duplicate values are not allowed in BST.\n");
    }
    return root;
}

/*
/-----------------------------------------------\
   Function for Searching in BST
\-----------------------------------------------/
*/

struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }
    if (key < root->data) {
        return search(root->left, key);
    }
    return search(root->right, key);
}

/*
/-----------------------------------------------\
   Function for Finding Minimum Value Node
\-----------------------------------------------/
*/

struct Node* findMin(struct Node* root) {
    while (root && root->left != NULL) {
        root = root->left;
    }
    return root;
}

/*
/-----------------------------------------------\
   Function for Deletion in BST
\-----------------------------------------------/
*/

struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL) {
        return root;
    }
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node with only one child or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        // Node with two children
        struct Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

/*
/-----------------------------------------------\
   Function for In-order Traversal (to verify BST)
\-----------------------------------------------/
*/

void inOrder(struct Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

/*
/-----------------------------------------------\
   Main Function
\-----------------------------------------------/
*/

int main() {
    system("clear");
    struct Node* root = NULL;
    int choice, data;

    printf("< < < Create a Binary Search Tree > > >\n");

    while (1) {
        printf("\n< < < BST Operations > > >\n");
        printf("1. Insertion\n2. Searching\n3. Deletion\n4. In-order Traversal\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 2:
                printf("Enter data to search: ");
                scanf("%d", &data);
                struct Node* found = search(root, data);
                if (found != NULL) {
                    printf("Element %d found in the BST.\n", data);
                } else {
                    printf("Element %d not found in the BST.\n", data);
                }
                break;
            case 3:
                printf("Enter data to delete: ");
                scanf("%d", &data);
                root = deleteNode(root, data);
                break;
            case 4:
                printf("In-order Traversal: ");
                inOrder(root);
                printf("\n");
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("You entered an invalid option. Please try again.\n");
                break;
        }
    }
    return 0;
}

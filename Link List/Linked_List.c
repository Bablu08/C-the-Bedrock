#include<stdio.h>
#include<stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to append a node to the linked list
void appendNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    
    if (*head == NULL) {
        *head = newNode; // If list is empty, the new node is the head
        return;
    }
    
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next; // Traverse to the last node
    }
    temp->next = newNode; // Append new node at the end
}

// Function to print the linked list
void printList(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    system("clear");

    // Your code here
    // Main function to take user input and create the linked list
    struct Node* head = NULL;
    int n, data;
    
    // Input the Number of nodes
    printf("\n< < < Create a Linked List > > >\n");
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Input data for nodes
    for(int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        appendNode(&head, data);
    }

    // Print the linked list
    printf("The linked list is: \n");
    printList(head);




    // Linked List operations
    int choice, option;
    while (1)
    {
        /* code */
        printf("\n< < < Linked List Operations > > >\n");
        printf("\n1.Insertion\n2.Deletion\n3.Searching\n4.Update Node\n5.List Display\n6.List Reverse\n7.Node Count\n8.List Sort\n9.Merge List\n");
        printf("Enter one Operation: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            /* code */
            // system("clear");
            printf("\nEnter One Insert Operation\n");

            printf("\n1.Insert at Beginning\n2.Insert at End\n3.Insert at Specific Position\n");
            scanf("%d", &option);
            switch (option)
            {
            case 1:
                /* code */
                printf("\nInsert at Beginning\n");
                break;
            case 2:
                printf("\nInsert at End\n");
                break;
            case 3:
            printf("\nInsert at Specific Position\n");
                break;
            default:
                printf("\nEnter Correct Operation\nThank You!\n");
                break;
            }
            break;
        case 2:
            system("clear");
            printf("\nEnter One Delete Operation\n");
            printf("\n1.Delete from Beginning\n2.Delete from End\n3.Delete from Specific Position\n");
            switch (option)
            {
            case 1:
                /* code */
                printf("\Delete at Beginning\n");
                break;
            case 2:
                printf("\Delete at End\n");
                break;
            case 3:
            printf("\Delete at Specific Position\n");
                break;
            default:
                printf("\nEnter Correct Operation\nThank You!\n");
                break;
            }
            break;
        case 3:
            printf("\nSearch Operation\n");
            break;
        case 4:
            printf("\nUpdate Node\n");
            break;
        case 5:
            printf("\nDisplay the List\n");
            printf("The linked list is: \n");
            printList(head);
            break;
        case 6:
            printf("\nReverse the List\n");
            break;
        case 7:
            printf("\nCount Nodes\n");
            break;
        case 8:
            printf("\nSort the List\n");
            break;
        case 9:
            printf("\nMerge two List\n");
            break;
        default:
            printf("\nEnter Correct Operation\nThank You!\n");
            break;
        }
    }

    return 0;
}

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

/*
\-----------------------------------------------/
   Function to print the linked list
/-----------------------------------------------\
*/
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

/*
\-----------------------------------------------/
   Function to insert node at beginning
/-----------------------------------------------\
*/
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

/*
\-----------------------------------------------/
   Function to insert node at end
/-----------------------------------------------\
*/
void insertAtEnd(struct Node** head, int data) {
    appendNode(head, data);
}

/*
\-----------------------------------------------/
   Function to insert node at specific Position
/-----------------------------------------------\
*/
void insertAtPosition(struct Node** head, int data, int position) {
    if (position == 1) {
        insertAtBeginning(head, data);
        return;
    }

    struct Node* temp = *head;
    struct Node* newNode = createNode(data);
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

/*
\-----------------------------------------------/
   Function to delete node at beginning
/-----------------------------------------------\
*/
void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

/*
\-----------------------------------------------/
   Function to delete node at end
/-----------------------------------------------\
*/
void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = *head;
    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}

/*
\-----------------------------------------------/
   Function to delete node at specific position
/-----------------------------------------------\
*/
void deleteAtPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (position == 1) {
        deleteAtBeginning(head);
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position out of bounds\n");
        return;
    }

    struct Node* delNode = temp->next;
    temp->next = temp->next->next;
    free(delNode);
}

/*
\-----------------------------------------------/
   Function to searching node
/-----------------------------------------------\
*/
void searchNode(struct Node* head, int key) {
    struct Node* temp = head;
    int position = 1;
    while (temp != NULL) {
        if (temp->data == key) {
            printf("Node with data %d found at position %d\n", key, position);
            return;
        }
        temp = temp->next;
        position++;
    }
    printf("Node with data %d not found\n", key);
}

/*
\-----------------------------------------------/
   Function to update node
/-----------------------------------------------\
*/
void updateNode(struct Node* head, int oldData, int newData) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == oldData) {
            temp->data = newData;
            printf("Node updated from %d to %d\n", oldData, newData);
            return;
        }
        temp = temp->next;
    }
    printf("Node with data %d not found\n", oldData);
}

/*
\-----------------------------------------------/
   Function to Reverse list
/-----------------------------------------------\
*/
void reverseList(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* curr = *head;
    struct Node* next = NULL;
    
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}

/*
\-----------------------------------------------/
   Function to count nodes
/-----------------------------------------------\
*/
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

/*
\-----------------------------------------------/
   Function to sort the list
/-----------------------------------------------\
*/
void sortList(struct Node* head) {
    struct Node* i, *j;
    int temp;
    for (i = head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

/*
\-----------------------------------------------/
   Function to merge two linked list
/-----------------------------------------------\
*/
struct Node* mergeLists(struct Node* head1, struct Node* head2) {
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;

    struct Node* mergedHead = NULL;
    if (head1->data <= head2->data) {
        mergedHead = head1;
        mergedHead->next = mergeLists(head1->next, head2);
    } else {
        mergedHead = head2;
        mergedHead->next = mergeLists(head1, head2->next);
    }
    return mergedHead;
}

/*
\-----------------------------------------------/
   Now continue main function
/-----------------------------------------------\
*/

int main(){
    system("clear");

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
        int choice, option, position, key, oldData, newData;
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
            // For data input in list
            printf("Enter the data to insert: ");
            scanf("%d", &data);
            switch (option)
            {
            case 1:
                /* code */
                printf("\nInsert at Beginning\n");
                insertAtBeginning(&head, data);
            break;
            case 2:
                printf("\nInsert at End\n");
                insertAtEnd(&head, data);
            break;
            case 3:
                printf("\nInsert at Specific Position\n");
                printf("Enter position: ");
                scanf("%d", &position);
                insertAtPosition(&head, data, position);
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
                printf("\nDelete at Beginning\n");
                deleteAtBeginning(&head);
            break;
            case 2:
                printf("\nDelete at End\n");
                deleteAtEnd(&head);
            break;
            case 3:
                printf("\nDelete at Specific Position\n");
                printf("Enter position: ");
                scanf("%d", &position);
                deleteAtPosition(&head, position);
            break;
            default:
                printf("\nEnter Correct Operation\nThank You!\n");
            break;
            }
            break;
        case 3:
            printf("\nSearch Operation\n");
            scanf("%d", &key);
            searchNode(head, key);
        break;
        case 4:
            printf("\nUpdate Node\n");
            printf("Enter old data: ");
            scanf("%d", &oldData);
            printf("Enter new data: ");
            scanf("%d", &newData);
            updateNode(head, oldData, newData);
        break;
        case 5:
            printf("\nDisplay the List\n");
            printf("The linked list is: \n");
            printList(head);
        break;
        case 6:
            printf("\nReverse the List\n");
            reverseList(&head);
        break;
        case 7:
            printf("\nCount Nodes\n");
            printf("Total nodes: %d\n", countNodes(head));
        break;
        case 8:
            printf("\nSort the List\n");
            sortList(head);
        break;
        case 9:
            printf("\nMerge two List\n");
            struct Node* head2 = NULL;
            printf("Enter the number of nodes for second list: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++) {
                printf("Enter data for node %d: ", i + 1);
                scanf("%d", &data);
                appendNode(&head2, data);
            }
            head = mergeLists(head, head2);
            printf("Lists merged\n");
        break;
        default:
            printf("\nEnter Correct Operation\nThank You!\n");
        break;
        }
    }
    return 0;
}

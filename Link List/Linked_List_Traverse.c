#include <stdio.h>
#include <stdlib.h>

// Node Structure
struct Node
{
    /* data */
    int data;
    struct Node* next;
};

// createNode Function (new node)
struct Node* creatNode(int value)
{
    /* data */
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
};

// append Function
void append(struct Node** head, int value){
    struct Node* newNode = creatNode(value);
    
    if (*head == NULL)
    {
        /* code */
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    while (temp->next != NULL)
    {
        /* code */
        temp = temp->next;
    }
    temp->next = newNode;
}

// displayList Function
void displayList(struct Node* head){
    struct Node* temp = head;

    if (head == NULL)
    {
        /* code */
        printf("the list is empty.\n");
        return;
    }
    
    while (temp != NULL)
    {
        /* code */
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main Function
int main(){
    system("clear");
    struct Node* head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);
    append(&head, 50);

    printf("Linked List:");
    displayList(head);

    return 0;
}
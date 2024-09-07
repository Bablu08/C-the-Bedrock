#include<stdio.h>
#include<stdlib.h>
#define size 5
int rear = -1;
int front = -1;
int circularQueue[size];
void enqueue();
void dequeue();
void show();

int main(){
    system("clear");

    int choice;
    while (1)
    {
        /* code */
        printf("Perform circularQueue Operation");
        printf("\n 1.Enqueue\n 2.Dequeue\n 3.Show\n 4.Exit\n");

        printf("\nEnter the choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            /* code */
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;
        default:
            printf("\nyou enter wrong choice.\nPlease try again!");
        }
    }
}

    // circularQueue Insert Operation;

void enqueue(){

    int item;
    if((rear+1) % size == front)
    {
        printf("\nCircularQueue is Overflow!\n");
        return;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear+1) % size;
    }

    printf("Enter the item to insert: ");
    scanf("%d", &item);
    circularQueue[rear] = item;
}

    // circularQueue Delete Operation;

void dequeue(){

    if (front == -1 && rear == -1)
    {
        printf("\nCircular Queue is Underflow!\n");
        return;
    }
    int item = circularQueue[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front+1) % size;
    }
    printf("Dequeued element: %d\n", item);
}

void show() {
    if (front == -1) {
        printf("\nCircular Queue is Empty!\n");
        return;
    }
    printf("\nCircular Queue elements are:\n");
    
    int i = front;
    while (i != rear) {
        printf("%d ", circularQueue[i]);
        i = (i + 1) % size;
    }
    printf("%d ", circularQueue[rear]); // printing the last element
}
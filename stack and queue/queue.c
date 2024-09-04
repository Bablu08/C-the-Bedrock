#include<stdio.h>
#include<stdlib.h>
#define size 5
int rear = -1;
int front = -1;
int queue[size];
void enqueue();
void dequeue();
void show();

int main(){
    system("clear");

    int choice;
    while (1)
    {
        /* code */
        printf("Perform queue operation");
        printf("\n 1.Enqueue\n 2.Dequeue\n 3.Show\n 4.Exit\n");

        printf("Enter the choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("You enter wrong Number.\nPlease try again!\n");
        }
    }
}
    // Queue Insert Operation;

void enqueue(){

    int item;
    if(rear == size - 1)
    {
        printf("\nQueue is overflow\n");
        return;
    }
    else if(front == -1)
    {
        front = 0;
    }
    
    rear = rear+1;
        printf("Enter element:\n");
        scanf("%d", &item);
        queue[rear] = item;
}

void dequeue(){

    int item;
    if(front == -1 || front > rear){
        printf("\nQueue is underflow\n");
        return;
    }
    else{
        item = queue[front];
        front = front + 1;
    }
}

void show(){
    int i;
    for(i = front; i <= rear; i++){
        printf("%d\n",  queue[i]);
    }
}
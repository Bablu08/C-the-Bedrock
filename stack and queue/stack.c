#include<stdio.h>
#include<stdlib.h>
#define size 5
int top = -1;
int stack[size];
void push();
void pop();
void show();

int main(){

    int choice;
    while (1)
    {
        /* code */
        printf("Perform Stack Operation\n");
        printf("\n 1.push\n 2.pop\n 3.show\n 4.exit\n");

        printf("Enter the choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            system("clear");
            break;
        case 2:
            pop();
            system("clear");
            break;
        case 3:
            show();
            break;
        case 4:
            show(0);
            break;
        default:
            printf("You enter wrong Number!");
        }
    }
}

// Stack Push Operation;

void push(){

    int item;
    if (top == size -1)
    {
        printf("Stack is Overflow\n");
    }
    else{
        printf("Enter element on stack top: ");
        scanf("%d", &item);
        top = top+1;
        stack[top] = item;
    }
}

void pop(){

    if(top==-1){
        printf("\n stack is empty");
    }
    else{
        printf("%d element is deleted\n",stack[top]);
        top=top-1;
    }

}

void show() {
    int i;
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
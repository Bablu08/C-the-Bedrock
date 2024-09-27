#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");

    // Your code here
    int choice, option;
    while (1)
    {
        /* code */
        printf("\n< < < Linked List Operations > > >\n");
        printf("\n1.Insert\n2.Delete\n3.Search\n4.Update Node\n5.List Display\n6.List Reverse\n7.Node Count\n8.List Sort\n9.Merge List\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            /* code */
            system("clear");
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
            printf("\nEnter One Delete Operation\n");
            printf("\n1.Delete from Beginning\n2.Delete from End\n3.Delete from Specific Position\n");
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
        case 3:
            printf("\nSearch Operation\n");
            break;
        case 4:
            printf("\nUpdate Node\n");
            break;
        case 5:
            printf("\nDisplay the List\n");
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
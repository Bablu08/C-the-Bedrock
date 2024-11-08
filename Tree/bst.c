#include<stdio.h>
#include<stdlib.h>

/*
/-----------------------------------------------\
   Function for Creating binary search structure
\-----------------------------------------------/
*/

void bstStructure(){}

/*
/-----------------------------------------------\
   Function for Creating Insertion
\-----------------------------------------------/
*/

void insert(){}

/*
/-----------------------------------------------\
   Function for searching
\-----------------------------------------------/
*/

void search(){}

/*
/-----------------------------------------------\
   Function for Deletion
\-----------------------------------------------/
*/

void delete(){}

/*
/-----------------------------------------------\
   Function for Main
\-----------------------------------------------/
*/

int main(){
   system("clear");

   // Your code here
   printf("< < < Create a Binary Search Tree > > >");
   printf("\nEnter Data on BST:\n");
   // call function

   // BST Operation
   int choice;
   while (1)
   {
      /* code */
      printf("\n< < < BST Operations > > >\n");
      printf("\n1.Insertion\n2.Searching\n3.Deletion\n");

      printf("\nEnter Operations\n");
      scanf("%d", &choice);
      
      switch (choice)
      {
      case 1:
         insert();
         break;
      case 2:
         search();
         break;
      case 3:
         delete();
         break;
      default:
         printf("You enter wrong Number.\nPlease try again!\n");
         break;
      }
   }
   return 0;
}

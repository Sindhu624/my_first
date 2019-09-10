
#include <stdio.h>
#include <stdlib.h>
#include<string.h>


struct Node {
  int data;
  struct Node *next;
} *head = NULL;





// top of a list 
void insert_top(struct Node *nn, struct Node *head)
 {
 struct Node *new_node;
 new_node = (struct Node *) malloc(sizeof(struct Node));
 nn->next= head;
 head=nn;

return;
}


// bottom of a list 
 void insert_bottom(int num, struct Node *head) {
  struct Node *current_node = head;
  struct Node *new_node;
 while ( current_node != NULL && current_node->next != NULL) {
   current_node = current_node->next;
  }

  new_node = (struct Node *) malloc(sizeof(struct Node));
  new_node->data = num;
  new_node->next= NULL;
  if (current_node != NULL)
    current_node->next = new_node;
  else
     head = new_node;
return ;
}

//Print list 
 void print(struct Node *head) {
  struct Node *temp;
    temp = head;
    if (temp == NULL) {
        printf("no elements\n");
        return;
    }
    printf("elements in linked list are\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

 
int main()
{
   
   int num;
   int option;
struct Node* nn = (struct Node *) malloc(sizeof(struct Node));
   
   
do{
     
     printf("\n *  Linked list operations:        *\n");
     printf("\n *  1. Insert at the top of list   *\n");
     printf("\n *  2. Insert at bottom of list    *\n");
     
     printf("\n *  3. Show all elements           *\n");
     printf("\n *  4. Quit                        *\n");
     printf("\n ***********************************\n");
     printf("\n Choose an option [1-4] : ");
     scanf("%d", &option); 
     

     switch (option) 
	{
      case 1:        /* Add to top*/
          printf(" Enter a number to insert : ");
          scanf("%d", &nn->data);
             nn->next=NULL; 
          insert_top(nn, head);
          printf("Number %d added to the top of the list", num);
          
          break;

      case 2:    /* add to bottom */
          printf(" Enter a number to insert : ");
          scanf("%d", &num);
              
          insert_bottom(num, head);
          printf("%d added to the bottom of the list", num);
         
          break;

   

      case 3: /* Show all elements */
          printf("\nElements in the list: \n [ ");
          print(head);
          printf("]\n");
        
          break;

      case 4:  /* Exit */
          return(0);
          break;

      default:
          printf("Invalid Option. Please Try again.");
        

      } 
}while(option!=6);

   

return 0;
}

//Inserting node at beginning of linked list

#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node* next;  //stores address of next node
};

struct Node* head;

void Insert(int x)
{
   struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
   temp->data=x;
   temp->next = head;
   head=temp;

}


void Print()
{
  struct Node* temp =head;
  printf("List is:");
  while(temp!=NULL)
 {

    printf("%d",temp->data);
    temp=temp->next;
 }
    printf("\n");
}


   int main()
{
   head=NULL;
   int n,x,i;
   printf("How many  numbers/n");
   scanf("%d",&n);
  
   for(i=0;i<n;i++)
   {
    printf("Enter the numbers/n");
    scanf("%d",&x);
    Insert(x);
    Print();
   }
}


~                                                                                                                                                                                                           
~                                                                                                                                                                                                           
~                                                                                                                                                                                                           
~                                                                                                                                                                                                           
~                                                                                                                                                                                                           
~                                                                                                                                                                                                           
~                                                                                                                                                                                                           
                                                                                                                                                                                          42,30         All



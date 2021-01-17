#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
 int data;
 struct node *next;
};
struct node *head=NULL;
void main()
{
 int opt;
 clrscr();
 do
 {
  printf("\n LINKED STACK OPERATIONS \n");
  printf("\n 1) PUSH \n 2) POP \n 3) DISPLAY \n 4) EXIT \n");
  printf("\n Enter your option : ");
  scanf("%d",&opt);
  switch(opt)
  {
   case 1:push();break;
   case 2:pop();break;
   case 3:display();break;
   case 4:exit(0);
   default:printf("\n Invalid option \n");
  }
 }while(opt!=4);
}
void push()
{
 int item;
 struct node *ptr;
 ptr=(struct node*)malloc(sizeof(struct node));
 if(ptr==NULL)
 {
  printf("\n Overflow condition(Stack is full) \n");
 }
 else
 {
  printf("\n Enter value : ");
  scanf("%d",&item);
  if(head==NULL)
  {
   ptr->data=item;
   ptr->next=NULL;
   head=ptr;
  }
  else
  {
   ptr->data=item;
   ptr->next=head;
   head=ptr;
  }
  printf("\n Item is pushed \n");
 }
}
void pop()
{
 struct node *ptr;
 if(head==NULL)
 {
  printf("\n Underflow condition(Stack is empty) \n");
 }
 else
 {
  ptr=head;
  head=ptr->next;
  free(ptr);
  printf("\n Popped item is :%d ",ptr->data);
 }
}
void display()
{
 struct node *ptr;
 ptr=head;
 if(ptr==NULL)
 {
  printf("\n Empty stack \n");
 }
 else
 {
  printf("\n \ Printing values...\ \n");
  while(ptr!=NULL)
  {
   printf("%d",ptr->data);
   ptr=ptr->next;
   printf("\t");
  }
 }
}



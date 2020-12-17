#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define NULL 0

void addbegining();
void addmiddle();
void addend();
void deletebegining();
void deletemiddle();
void deleteend();
void display();
int count=0;

struct node
{
 int data;
 struct node *link;
}
*start=NULL;


void main()
{
 int opt;
 clrscr();
 do
 {
  printf("\n 1.Insert begining \n 2.Insert middle \n 3.Insert end \n4.Delete begining \n5.Delete middle\n6.Delete end\n7.Display\n8.Exit\n");
  printf("Enter your option:");
  scanf("%d",&opt);
  switch(opt)
  {
   case 1:addbegining();break;
   case 2:addmiddle();break;
   case 3:addend();break;
   case 4:deletebegining();break;
   case 5:deletemiddle();break;
   case 6:deleteend();break;
   case 7:display();break;
   case 8:exit(0);break;
   default:printf("Invalid option");
  }
 }while(opt!=8);
 getch();
}
void addbegining()
{
 int no;
 struct node *temp;
 temp=(struct node*)malloc(sizeof (struct node));
 printf("Enter the number:");
 scanf("%d",&no);
 temp->data=no;
 if(count==0)
 {
 temp->link=NULL;
 }
 else
 {
 temp->link=start;
 }
 start=temp;
 count++;
}
void addmiddle()
{
 int no,loc,i,flag;
 struct node *ptr;
 struct node *temp;
 temp=(struct node*)malloc(sizeof (struct node));
 printf("Enter the number:");
 scanf("%d",&no);
 temp->data=no;
 printf("Enter the location after which you want to insert:");
 scanf("%d",&loc);
 ptr=start;
 for(i=0;i<loc;i++)
 {
  ptr=ptr->link;
  if(ptr==NULL)
  {
  flag=1;
  }
 }
 if(flag==1)
 {
  printf("Can not insert");
 }
 else
 {
  temp->link=ptr->link;
  ptr->link=temp;
 }
}
void addend()
{
  int no;
  struct node *temp;
  temp=(struct node*)malloc(sizeof (struct node));
  printf("Enter a number:");
  scanf("%d",&no);
  temp->data=no;
  temp->link=NULL;
  if(count==0)
  {
   start=temp;
  }
  else
  {
   struct node *t;
   t=start;
   while(t->link!=NULL)
   {
    t=t->link;
   }
   t->link=temp;
  }
  count++;
}
void deletebegining()
{
 struct node *t;
 if((count==0)|(start==NULL))
 {
  printf("No node to delete");
 }
 else
 {
  if(count==1)
  {
   t=start;
   start=NULL;
   printf("Deleted element is : %d",t->data);
   free(t);
   count--;
  }
  else
  {
   t=start;
   start=start->link;
   printf("Deleted element is : %d",t->data);
   free(t);
   count--;
  }
 }
}
void deleteend()
{
 struct node *t;
 struct node *temp;
 if(start==NULL)
 {
  printf("No node to delete");
 }
 else
 {
 t=NULL;
 temp=start;
 while(temp->link!=NULL)
 {
  t=temp;
  temp=temp->link;
 }
 printf("The deleted element is : %d",temp->data);
 free(temp);
 t->link=NULL;
 count--;
 }
}
void deletemiddle()
{
 int loc,i,flag;
 struct node *ptr1,*ptr;
 printf("Enter the location of the node you want to delete:");
 scanf("%d",&loc);
 ptr=start;
 for(i=0;i<loc;i++)
 {
  ptr1=ptr;
  ptr=ptr->link;
  if(ptr==NULL)
  {
   flag=1;
  }
 }
 if(flag==1)
 {
  printf("Can not delete");
 }
 else
 {
  ptr1->link=ptr->link;
  printf("The deleted element is : %d",ptr->data);
  free(ptr);
 }
}
void display()
{
 struct node *ptr;
 for(ptr=start;ptr!=NULL;ptr=ptr->link)
 {
  printf("%d",ptr->data);
  printf("\t");
 }
}
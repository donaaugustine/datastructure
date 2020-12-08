/*Circular queue insertion,deletion and display*/
#include<stdio.h>
#include<conio.h>
#define size 10
int cq[size],front,rear;
void insert();
void delete();
void display();
void main()
{
 int opt;
 front=rear=-1;
 clrscr();
 do
 {
  printf("\n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit \n");
  printf("Enter your option:");
  scanf("%d",&opt);
  switch(opt)
  {
   case 1:insert();break;
   case 2:delete();break;
   case 3:display();break;
   case 4:exit(0);
   default:printf("\n Invalid option\n");
  }
 }while(opt!=4);
 getch();
}
void insert()
{
 int no;
 if(front==(rear+1)%size)
 {
  printf("Circular queue is full");
 }
 else
 {
  if(rear==-1)
  {
   rear=front=0;
  }
  else
  {
   rear=(rear+1)%size;
  }
  printf("Enter element:");
  scanf("%d",&no);
  cq[rear]=no;
  printf("Element inserted\n");
 }
}
void delete()
{
 if(front==-1)
 {
  printf("Circular queue is empty");
 }
 else
 {
  printf("\n The deleted element is:%d",cq[front]);
  if(front==rear)
  {
   front=rear=-1;
  }
  else
  {
   front=(front+1)%size;
  }
 }
}
void display()
{
 int i;
 if(front==-1)
 {
  printf("Circular queue is empty");
 }
 else
 {
  printf("Elements in circular queue: \n");
  if(front<=rear)
  {
   for(i=front;i<=rear;i++)
   {
    printf("%d",cq[i]);
    printf("\t");
   }
  }
  else
  {
   for(i=front;i<=size;i++)
   {
	printf("%d",cq[i]);
	printf("\t");
   }
   for(i=0;i<=rear;i++)
   {
	printf("%d",cq[i]);
	printf("\t");
   }
  }
 }
}


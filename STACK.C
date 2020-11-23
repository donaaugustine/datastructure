#include<stdio.h>
#include<conio.h>
void push();
void pop();
void display();
int stk[10],opt,n,top,x,i;
void main()
{
 top=-1;
 clrscr();
 printf("\n enter size of stack:");
 scanf("%d",&n);
 do
 {
  printf("\n 1.push \n 2.pop \n 3.display \n 4.exit\n");
  printf(" enter the option:\n");
  scanf("%d",&opt);
  switch(opt)
   {
    case 1:push();break;
    case 2:pop();break;
    case 3:display();break;
    case 4:printf("exit");break;
    default:printf("invalid option");
   }
 }while(opt!=4);
}
void push()
{
 if(top>=n-1)
 {
  printf("stack is full");
 }
 else
 {
  printf("enter a value:\n");
  scanf("%d",&x);
  top++;
  stk[top]=x;
 }
}
void pop()
{
 if(top<=-1)
 {
  printf("stack is empty");
 }
 else
 {
  printf("the popped element is %d",stk[top]);
  top--;
 }
}
void display()
{
 printf("the elements in stack:\n");
 for(i=0;i<=top;i++)
 {
  printf("%d",stk[i]);
  printf("\t");
 }
}

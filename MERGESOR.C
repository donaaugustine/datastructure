#include<conio.h>
#include<stdio.h>
void main()
{
 int m,n,a[15],b[15],c[30],i,j,k=0;
 clrscr();
 printf("\n Enter size of first array:\n");
 scanf("%d",&m);
 printf("Enter the elements in first array(ascending order)\n");
 for(i=0;i<m;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter size of second array:\n");
 scanf("%d",&n);
 printf("Enter the elements in second array(ascending order)\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&b[i]);
 }
 i=0;
 j=0;
 while((i<m)&&(j<n))
 {
  if(a[i]<=b[j])
  {
   c[k]=a[i];
   i++;
  }
  else
  {
   c[k]=b[j];
   j++;
  }
  k++;
 }
 while(i<m)
 {
  c[k]=a[i];
  i++;
  k++;
 }
 while(j<n)
 {
  c[k]=b[j];
  j++;
  k++;
 }
 printf("\n First array \n");
 for(i=0;i<m;i++)
  {
   printf("%d",a[i]);
   printf("\t");
  }
 printf("\n Second array \n");
 for(i=0;i<n;i++)
 {
  printf("%d",b[i]);
  printf("\t");
 }
 printf("\n Merged array is\n");
 for(i=0;i<m+n;i++)
 {
  printf("%d",c[i]);
  printf("\t");
 }
 getch();
}

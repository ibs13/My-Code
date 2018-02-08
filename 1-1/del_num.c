#include<stdio.h>
#include<conio.h>

void main()
{
 int j,i,a[100],n,key,l;

 printf("Enter the number of elements:");
 scanf("%d",&n);
 printf("\nEnter the elements:\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("\nEnter the element to delete:");
 scanf("%d",&key);
 l=n;  //Length of the array
 for(i=0;i<l;i++)
 {
  if(a[i]==key)
  {
   for(j=i;j<l;j++)
    a[j]=a[j+1];
   l--;    //Decreasing the length of the array
  }
 }

 printf("\nThe new array is \n");
 for(i=0;i<l;i++)
  printf("%d ",a[i]);
 getch();
}

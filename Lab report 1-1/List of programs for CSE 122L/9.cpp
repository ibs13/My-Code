#include<stdio.h>

int main()
{
   int n, a = 0, b = 1, c,d;

   printf("Enter the number of terms\n");
   scanf("%d",&n);

   printf("First %d terms of Fibonacci series are :-\n",n);

   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         d = c;
      else
      {
         d = a + b;
         a = b;
         b = d;
      }
      printf("%d ",d);
   }

   return 0;
}

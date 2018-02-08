#include<stdio.h>

int fact(int);

int main()
{
  long long int num,f;
  printf("Enter a number: ");
  scanf("%lld",&num);
  f=fact(num);
  printf("Factorial of %lld is: %lld",num,f);
  return 0;
}

int fact(int n){
   if(n==1)
       return 1;
   else
       return(n*fact(n-1));
 }

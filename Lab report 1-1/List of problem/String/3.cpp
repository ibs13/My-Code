#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i, l, flag = 1,j;
    printf("Enter a word : ");
    scanf("%s", a);
    printf("\nThe word is %s", a);

    l = strlen(a);

     for (i = l-1,j=0; i >= 0 && j<l; i--,j++)
   {
       b[j] = a[i];
   }


    for(i = 0; i < l; i++)
   {
       if(a[i] != b[j])
       {
           flag = 0;
           break;
       }
   }
   if(flag == 1)
   {
       printf("\nNot Palindrome\n");
   }
   else
   {
       printf("\nPalindrome\n");
   }


    return 0;
}

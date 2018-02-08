#include<stdio.h>

int main()
{
    int n,m,p,s=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    m=n;

    while(n!=0)
    {
        p = n%10;

        n = n/10;
        s =(s*10)+p;
    }

    if(s==m)
    {
        printf("Palindrome number.\n");
    }
    else{
        printf("Not palindrome number.\n");
    }

    return 0;
}

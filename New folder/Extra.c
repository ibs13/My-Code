#include <stdio.h>

int main()
{
    char st[20];
    int n,i,j,sum=0;

    scanf("%d\n",&n);

    for(i=0;i<n;i++)
    {
        gets(st);

        for(j=0;j<3;j++)
         {
             sum=sum+st[j];
         }
         printf("%d",sum);
         sum=0;
    }

        return 0;
}


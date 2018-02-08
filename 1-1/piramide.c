#include<stdio.h>

int main()
{
    int n,i,j;

        printf("How many lines:\n");
        scanf("%d",&n);
        printf("\n\n\n\n\n");

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf( " %d",j);
            }
            printf("\n");
        }


        return 0;
}


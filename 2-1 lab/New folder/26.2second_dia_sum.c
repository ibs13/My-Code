#include <stdio.h>

int main()
{
    int a[100][100],n,m,i,j,sum=0;

    printf("How many column and row:");
    scanf("%d %d",&n,&m);

    printf("Enter the elements of the matrix:");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The matrix are:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i-j==0)
            {
                sum = sum +a[i][j];
            }
        }
    }

    printf("summation of secondary diagonal elements of the the matrix are: %d\n",sum);

    return 0;
}


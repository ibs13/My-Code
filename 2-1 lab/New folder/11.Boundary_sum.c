#include <stdio.h>

int main()
{
    int a[100][100],n,m,i,j,sum=0;

    printf("How many column and row:");
    scanf("%d %d",&n,&m);

    printf("Enter the elements of the array from your keyboard:\n");

    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("\nThe desiring matrix are:\n");

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
                if((i==0|| i==n-1) || (j==0 || j==m-1))
                {
                    sum = sum + a[i][j];
                }
            }
        }

        printf("\nThe summation of the boundary elements of a two dimensional array: %d\n",sum);

        return 0;
}

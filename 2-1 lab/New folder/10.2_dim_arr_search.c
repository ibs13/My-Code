#include <stdio.h>

int main()
{
    int a[100][100],n,m,i,j,p,s,t,r;

    printf("How many column and row:");
    scanf("%d %d",&n,&m);

    printf("Enter the elements of the array from your keyboard:\n");

    for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("\nThe desiring matrix are:\n");

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }

    printf("\nWhat element do you want to search:");
    scanf("%d",&p);

    for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(p==a[i][j])
                {
                    s = j;
                     break;
                }
            }
            if(p==a[i][j])
            {
                t = i;
                break;
            }
        }

        r = (t*10)+s;

        if(p==a[i][j])
        {
            printf("\n\nFound\nThe position of the desiring element is: %d\n",r);
        }
        else{
            printf("\n\nNot found\n");
        }

        return 0;
}

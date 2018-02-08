#include <stdio.h>
int main()
{
    int n,x,y,t,a[100],i,j;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&x,&y);

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }

        if(x==a[0] && y==a[n-1])
        {
            printf("BOTH\n");
        }
        else if(x==a[0])
        {
            printf("EASY\n");
        }
        else if(y==a[n-1])
        {
            printf("HARD\n");
        }
        else
        {
            printf("OKAY\n");
        }

    }

    return 0;
}

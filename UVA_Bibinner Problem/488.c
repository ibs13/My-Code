#include <stdio.h>

int main()
{
    int t,n,m,i,j,k,l;

    scanf("%d",&t);

    printf("\n");

    while(t--)
    {
        scanf("%d",&n);
        scanf("%d",&m);


        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                for(k=0;k<j;k++)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
            for(l=j-2;l>0;l--)
            {
                 for(k=0;k<l;k++)
                {
                    printf("%d",l);
             }
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}

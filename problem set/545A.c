#include <stdio.h>

int main()
{
    int n,i,j,a[101][101],b[101],p,k=0,f;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    if(n==1)
    {
        printf("1\n1\n");
    }

    else{
        for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            if(i!=j)
            {
                if(a[i][j]==3 || a[i][j]==2)
                {
                    f = 0;
                    break;
                }
                else{
                    f = 1;
                }
            }
        }
        if(f==1){
            b[k] = j;
            k++;
        }
    }

    printf("%d\n",k);

    for(i=0;i<k;i++)
    {
        printf("%d",b[i]);
        if(i<k-1)
        {
            printf(" ");
        }
    }
    if(k>0){
        printf("\n");
    }

    }

    return 0;
}

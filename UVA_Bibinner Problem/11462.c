#include <stdio.h>

int main()
{
    int a[2000000],n,i,j,temp;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        else{
            for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        for(i=0;i<n;i++)
        {
            printf("%ld ",a[i]);
        }
        printf("\n");
        }

    }

    return 0;
}


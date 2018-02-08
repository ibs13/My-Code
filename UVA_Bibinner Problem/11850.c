#include <stdio.h>

int main()
{
    long int a[10000],n,i,j,p,temp;

    while(scanf("%ld",&n))
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

            for(i=0;i<n;i++)
            {
                for(j=n-1;j>i;j--)
                {
                    if(a[i]>a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;

                    }
                }
            }

            for(i=0;i<n-1;i++)
            {
                p = a[i+1] - a[i];

                if(p>200)
                {
                    break;
                }
            }

            if(p>200)
            {
                printf("IMPOSSIBLE\n");
            }
            else{
                printf("POSSIBLE\n");
            }
        }
    }
    return 0;
}

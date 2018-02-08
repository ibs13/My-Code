#include <stdio.h>

int main()
{
    int a[100],i,j,t,l,p,k;

    scanf("%d",&t);

    while(t--)
    {
        k = 0;

        scanf("%d",&l);

        for(i=0;i<l;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<l-1;i++)
        {
            for(j=i+1;j<l;j++)
            {
                if(a[i]>a[j])
                {
                    p = a[i];
                    a[i] = a[j];
                    a[j] = p;
                    k++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n",k);
    }
    return 0;
}

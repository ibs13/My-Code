#include <stdio.h>

int main()
{
    int a[10000],b[10000],n,k1,k2,i,p,q,r,s;

    scanf("%d",&n);

    scanf("%d",&k1);

    for(i=0;i<k1;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&k2);

    for(i=0;i<k2;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<k1,i<k2;i++)
    {
        k1--;
        k2--;
        if(a[i]>b[i]){
            p = k1 + 1;
            q = k1 + 2;

            k1=k1+2;

            a[p] = b[i];
            a[q] = a[i];
        }
        else{
            r = k2 + 1;
            s = k2 + 2;

            b[r] = a[i];
            b[s] = b[i];
            k2=k2+2;
        }
    }

    printf("%d ",i+1);

    if(i<k1)
    {
        printf("1\n");
    }
    else{
        printf("2\n");
    }

    return 0;
}

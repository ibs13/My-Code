#include <stdio.h>

int main()
{
    int n,i,p,s,a[1100],j;

    while(scanf("%d",&n)==1)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=1;i<n;i++)
        {
            for(j=n-1;j>=i;j--)
            {
                if(a[j-1]>a[j])
            {
                p=a[j-1];
                a[j-1]=a[j];
                a[j]=p;
                s++;
            }
            }
        }

        printf("Minimum exchange operations : %d\n",s);
    }

    return 0;
}

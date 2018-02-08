#include <stdio.h>

int main()
{
    int t,n,i,h,l,ca=1,a[52],p;

    scanf("%d",&t);

    while(t--)
    {
        h=0;
        l=0;

        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            p=a[i+1]-a[i];

            if(p>0)
            {
                h=h+1;
            }
            else if(p<0)
            {
                l=l+1;
            }
        }

        printf("Case %d: %d %d\n",ca++,h,l);
    }
    return 0;
}

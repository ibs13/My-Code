#include <stdio.h>

int main()
{
    int n,p,q,i,t,a[35],ca=1,sum,g;

    scanf("%d",&t);

    while(t--)
    {
        sum = 0;
        g = 0;

        scanf("%d %d %d",&n,&p,&q);

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;(i<p && i<n);i++)
        {
            sum = sum + a[i];

            if(sum<=q){
                g++;
            }
            else{
                break;
            }
        }

        printf("Case %d: %d\n",ca++,g);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int t,n,k,p,r,s,ca=1,q;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d",&n,&k,&p);

        if(n<=p)
        {
            r=p%n;
            q=r+k;
            if(q>n)
            {
                q=q-n;
            }
        }
        else{
                s=k+p;
            if(s<=n)
            {
                q=s;
            }

            else{
                q=s-n;
            }
        }

        printf("Case %d: %d\n",ca++,q);
    }

    return 0;
}

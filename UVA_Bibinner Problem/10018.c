#include <stdio.h>

int main()
{
    int n,m,p,t,s,i,j;

    scanf("%d",&t);

    while(t--)
    {
        s=0;
        p=0;

        scanf("%d",&n);

        for(i=n;j!=p;j=i+p)
        {

        m=i;
        p=0;

        while(m!=0)
        {
            p = p * 10;
            p = p + m%10;
            m = m/10;
        }

             s=s+1;

        }


        printf("%d\n",m);
    }

    return 0;
}

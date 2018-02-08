#include <stdio.h>

int main()
{
    long int t,n,i,s,a[1005],p;
    float avg,r;
    char v='%';

    scanf("%ld",&t);

    while(t--)
    {
        s=0;
        p=0;
        scanf("%ld",&n);

        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);

            s=s+a[i];
        }

        avg=s/n;

        for(i=0;i<n;i++)
        {
            if(avg<a[i])
            {
                p++;
            }
            else{
                continue;
            }
        }

        r=(((float)p*100)/(float)n);

        printf("%.3f%c\n",100-r,v);

        }

        return 0;
}

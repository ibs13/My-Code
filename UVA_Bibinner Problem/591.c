#include <stdio.h>

int main()
{
    int n,h,a[100],ca=1,p,s,avg;

    while(scanf("%d",&n)==1)
    {
        p=0;
        s=0;

        if(n==0)
        {
            break;
        }
        else{
            for(h=0;h<n;h++)
            {
                scanf("%d",&a[h]);

                s=s+a[h];
            }

            avg=s/n;

            for(h=0;h<n;h++)
            {
                if(a[h]>avg)
                {
                    p=p+(a[h]-avg);
                }
                else{
                    continue;
                }
            }

            printf("Set #%d\n",ca++);
            printf("The minimum number of moves is %d.\n\n",p);
        }
    }
    return 0;
}

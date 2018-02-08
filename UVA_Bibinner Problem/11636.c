#include <stdio.h>

int main()
{
    int ca=1,n,p,s;

    while(scanf("%d",&n)==1)
    {
        p=0;
        s=1;
        if(n<0)
           break;
        else{

           while(s<n)
            {
                s=s+s;

                p=p+1;
            }

            printf("Case %d: %d\n",ca++,p);
        }
    }
    return 0;
}

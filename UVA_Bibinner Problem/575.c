#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    long long int r,p,s,i,j,n=2^2;
    char a[10000];

    while(gets(a))
    {
        s=0;
        if(a[0]=='0')
        {
            break;
        }
        else{
            r=strlen(a);

            for(i=0,j=r;i<r;i++,j--)
            {
                p=((a[i]-48)*((pow(2,j))-1));

                s=s+p;
            }

            printf("%lld\n",s);
        }
    }

    return 0;
}

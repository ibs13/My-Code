#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,p,q,r;
    long long a,b;

    while(scanf("%lld %lld",&a,&b))
    {
        s=0;

        if(a==0 && b==0)
        {
            exit(0);
        }
        else{
        while(a!=0 || b!=0)
        {
            p=a%10;
            a=a/10;
            q=b%10;
            b=b/10;

            if(r>9)
            {
                r=p+q+1;
            }
            else{
                r=p+q;
            }


            if(r>9)
            {
                s=s+1;
            }
            else{
                s=s;
            }
        }

        if(s==0)
        {
            printf("No carry operation.\n");
        }
        else if(s==1)
            {
            printf("%d carry operation.\n",s);
        }
        else{
             printf("%d carry operations.\n",s);
        }
        }
        r=0;
    }

    return 0;
}

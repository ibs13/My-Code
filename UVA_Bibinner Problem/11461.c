#include <stdio.h>
#include <math.h>

int main()
{
    long int a,b,s,i;
    float r;

    while(scanf("%ld %ld",&a,&b)==2)
    {
        s=0;
        if(a==0 && b==0)
        {
            break;
        }
        else{
            for(i=a;i<=b;i++)
            {
                r=sqrt(i);

                if(r==(int)r)
                {
                    s++;
                }
                else{
                    continue;
                }
            }

        }
        printf("%ld\n",s);
    }
    return 0;
}

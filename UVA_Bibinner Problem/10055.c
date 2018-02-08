#include<stdio.h>

int main()
{
    long long int h,o,r;

    while(scanf("%lld %lld",&h,&o)==2)
    {
           if(h<o)
        {
           r = o - h;
           printf("%lld\n",r);
        }
        else{
            r=h-o;
            printf("%lld\n",r);
        }
    }
    return 0;
}

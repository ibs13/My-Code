#include <stdio.h>

int main()
{
    int a,b,c,m,n,o,p,s,t;

    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        else{
            m=a*a+b*b;
            o=a*a+c*c;
            s=b*b+c*c;
            t=a*a;
            p=b*b;
            n=c*c;

            if(m==n || o==p || s==t)
            {
                printf("right\n");
            }
            else{
                printf("wrong\n");
            }
        }
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int t,i,j,a,b,c,s;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);

        s=0;

        if(a%2==0)
        {
            a=a+1;
        }
        else{
            a=a;
        }
        if(b%2==0)
        {
            b=b-1;
        }
        else{
            b=b;
        }
        {

        for(j=a;j<=b;j=j+2)
        {
            s=s+j;
        }

        printf("Case %d: %d\n",i,s);

        }
    }

    return 0;
}

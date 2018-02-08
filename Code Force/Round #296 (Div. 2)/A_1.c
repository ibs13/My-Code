#include <stdio.h>

int main()
{
    long long int a,b,i,p,s=0;

    scanf("%I64d %I64d",&a,&b);

    while(1)
    {
        p = a/b;
        i = a%b;

        if(i==0)
        {
            s = s+p;
            break;
        }

        else if(i==1)
        {
            s = s + p +b;
            break;
        }

        else{
            a = b;
            b = i;
            s = s + p;
        }
    }
    printf("%I64d\n",s);

    return 0;
}

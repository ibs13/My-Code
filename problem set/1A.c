#include <stdio.h>

int main()
{
    long long int m,n,a,p,q,s;

    scanf("%I64d %I64d %I64d",&m,&n,&a);

    if(m<=a && n<=a){
        s = 1;
    }
    else if(m<=a){
        p = n / a;

        if(n%a==0){
            s = p;
        }
        else{
            s = p + 1;
        }
    }
    else if(n<=a){
        p = m / a;

        if(m%a==0){
            s = p;
        }
        else{
            s = p + 1;
        }
    }
    else{
        p = m / a;
        q = n / a;

        if(m%a==0){
            p = p;
        }
        else{
            p = p + 1;
        }

        if(n%a==0){
            q = q;
        }
        else{
            q = q + 1;
        }

        s = p * q;
    }

    printf("%I64d\n",s);

    return 0;
}

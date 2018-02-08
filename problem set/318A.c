#include <stdio.h>

int main()
{
    long long int n,k,m,p;

    scanf("%I64d %I64d",&n,&k);

    if(n%2==1){
        n++;
    }

    m = n /2;

    if(m>=k){
        p = (k * 2) - 1;
    }
    else{
        p = (k - m) * 2;
    }

    printf("%I64d\n",p);

    return 0;
}

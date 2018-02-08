#include <stdio.h>

int main()
{
    int m,n,a,b1,b2;

    scanf("%d %d",&n,&m);

    if(m==1 && n==1){
        a = 1;
    }
    else{
        b1 = n - m;
        b2 = m - 1;

    if(b1>=b2){
        a = m + 1;
    }
    else{
        a = m - 1;
    }
    }

    printf("%d\n",a);

    return 0;
}

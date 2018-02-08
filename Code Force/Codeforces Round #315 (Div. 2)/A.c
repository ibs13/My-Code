#include <stdio.h>

int main()
{
    int t,s,q,i=0;

    scanf("%d %d %d",&t,&s,&q);

    if(q!=1){
        q = q - 1;
    }

    while(t>0){
        t = t - s;

        s = s * q;

        if(t>0){
            i++;
        }
    }

    printf("%d\n",i);

    return 0;
}

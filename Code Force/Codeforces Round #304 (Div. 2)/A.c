#include <stdio.h>

int main()
{
    long int k,n,w,i,s=0;

    scanf("%I32d %I32d %I32d",&k,&n,&w);

    for(i=1;i<=w;i++)
    {
        s = s + (i*k);
    }

    if(n>=s){
        printf("0\n");
    }
    else{
        s = s - n;

        printf("%I32d\n",s);
    }

    return 0;
}

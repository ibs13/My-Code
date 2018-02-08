#include<stdio.h>
int main()
{
    int n,b,c;

    while(scanf("%d",&n)==1)
    {
        if(n<=0)
            break;

        b=n%2;
    if(b==0)
        c=n/2;
    else
        c=(n-1)/2;

    printf("%d\n",c+n);
}
    return 0;
}

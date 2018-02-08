#include <stdio.h>

int main()
{
    int n;

    while(scanf("%d",&n)){
        if(1)
            printf("%d\n",n*(n+1)*(2*n+1)/6);
        else
            break;
    }

    return 0;
}

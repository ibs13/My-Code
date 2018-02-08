#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int n,m;


    while(scanf("%ld",&n))
    {

    if(n>=0)
    {
        m=((n*n)+n+2)/2;

        printf("%ld\n",m);
    }

    else{
        break;
        }
    }

    return 0;
}

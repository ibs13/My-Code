#include <stdio.h>

int main()
{
    int a,b,n;

    scanf("%d %d",&a,&b);

    if(a>b){
        n = a % b;
    }
    else{
        n = b % a;
    }

    if(n){
        printf("Nao sao Multiplos\n");
    }
    else{
        printf("Sao Multiplos\n");
    }

    return 0;
}

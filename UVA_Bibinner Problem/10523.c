#include <stdio.h>

int main()
{
    long long int s[200][200],a,n,p,i,j,sum;

    for(i=1;i<=15;i++)
    {
        p = 1;
        for(j=1;j<=150;j++)
        {
            p = p * i;

            s[i][j] = j * p;
        }
    }

    while(scanf("%lld %lld",&n,&a)==2)
    {
        sum = 0;

        if(a==0){
            printf("%lld\n",sum);
        }
        else{
            for(j=1;j<=n;j++){
                sum = sum + s[a][j];
            }

            printf("%lld\n",sum);
        }
    }

    return 0;
}

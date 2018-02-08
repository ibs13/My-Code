#include <stdio.h>

int main()
{
    int t,n,p,q,ca=1,m;

    scanf("%d",&t);

    while(t--)
    {
        p = 0;

        scanf("%d",&n);

        m = n;

        while(n!=0){

            q = n % 10;

            p = (p * 10) + q;

            n = n / 10;
        }

        if(m==p){
            printf("Case %d: Yes\n",ca++);
        }
        else{
            printf("Case %d: No\n",ca++);
        }
    }

    return 0;
}

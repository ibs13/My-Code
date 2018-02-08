#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,p,q,t,ca=1,n,m;

    while(scanf("%d",&n)==1){
        q = 1;
        t = 0;

        for(i=1;q<n;i++){
            q*=i;
            m= n / i;
            p = 1;

            for(j=2;p<m;j++){
                p*=j;
            }

            if(p/q==n){
                t = 1;
                break;
            }
        }

        if(t==1){
            printf("Case %d: %d %d\n",ca++,j-1,i);
        }
        else{
            printf("Case %d: Impossible\n",ca++);
        }
    }

    return 0;
}

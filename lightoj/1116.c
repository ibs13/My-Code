#include <stdio.h>

int main()
{
    long long int n,m,i,w,t,ca=1;

    scanf("%I64d",&t);

    while(t--)
    {
        scanf("%I64d",&w);

        if(w%2==1){
            printf("Case %I64d: Impossible\n",ca++);
        }

        else{
            i = 2;
            while(1)
            {
                n = w / i;

                if(n%2==1){
                    m = i;
                    break;
                }
                else{
                    i+=2;
                }
            }

            if(n==1){
                printf("Case %I64d: Impossible\n",ca++);
            }
            else{
                printf("Case %I64d: %I64d %I64d\n",ca++,n,m);
            }
        }
    }

    return 0;
}

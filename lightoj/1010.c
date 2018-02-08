#include <stdio.h>

int main()
{
    int m,n,t,ca=1,p;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&m,&n);

        if(m==1 || n==1){
            if(m==1)
            printf("Case %d: %d\n",ca++,n);

            else
            printf("Case %d: %d\n",ca++,m);

        }

        else{
            p = n * m;

            if(p%2==0)
            printf("Case %d: %d\n",ca++,p/2);

            else
            printf("Case %d: %d\n",ca++,(p/2)+1);

            }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int m,n,t,q,ca=1;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&m,&n);

        if(m>n){
            q = (((2*m) - n) * 4) + 9 + 10;

            printf("Case %d: %d\n",ca++,q);
        }
        else{
            q = 9 + 10 + (n*4);

            printf("Case %d: %d\n",ca++,q);
        }
    }

    return 0;
}

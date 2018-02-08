#include <stdio.h>

int main()
{
    int n,a[1010],ca=1,i,p,q;

    while(scanf("%d",&n)==1)
    {
        p = 0;
        q = 0;
        if(n==0){
            break;
        }
        else{
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                if(a[i]==0){
                    q++;
                }
                else{
                    p++;
                }
            }

            printf("Case %d: %d\n",ca++,p-q);
        }
    }

    return 0;
}

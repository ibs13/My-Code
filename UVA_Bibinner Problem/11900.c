#include <stdio.h>

int main()
{
    int a[1000],t,n,p,q,i,ca=1,j,temp,m;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d",&n,&p,&q);

        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = a[i];
                }
            }
        }

        for(i=0,m=0;i<p && i<n;i++){
            m = m + a[i];
            if(m>q){
                break;
            }
        }

        printf("Case %d: %d\n",ca++,i);
    }

    return 0;
}

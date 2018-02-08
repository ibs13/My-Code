#include <stdio.h>

int main()
{
    int a[4000],b[100],i,j,n,p,t;

    scanf("%d",&t);

    while(t--){
        scanf("%d %d",&n,&p);

        for(i=1;i<=n;i++){
            a[i] = 0;
        }
        for(i=1;i<=p;i++){
            scanf("%d",&b[i]);
        }

        for(i=1;i<=p;i++){
            for(j=b[i];j<=n;j+=b[i]){
                a[j] = 1;
            }
        }

        for(i=6;i<=n;i+=7){
            a[i] = 0;
            a[i+1] = 0;
        }

        for(i=1,j=0;i<=n;i++){
            {
                if(a[i]==1){
                    j++;
                }
            }
        }

        printf("%d\n",j);
    }

    return 0;
}

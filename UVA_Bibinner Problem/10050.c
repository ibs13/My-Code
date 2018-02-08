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
                a[i] = 1;
            }
        }

        for(i=1,j=0;i<=p;i++){
            if(i%6!=0 && i%7!=0){
                if(a[i]==1){
                    j++;
                }
            }
        }

        printf("%d\n",j);
    }

    return 0;
}

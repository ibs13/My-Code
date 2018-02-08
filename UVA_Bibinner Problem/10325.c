#include <stdio.h>

int main()
{
    int n,m,i,j,sum,a[20],f;

    while(scanf("%d %d",&n,&m)==2){
        for(i=0;i<m;i++){
            scanf("%d",&a[i]);
        }

        sum = 0;

        for(i=1;i<=n;i++){
                f = 0;
        for(j=0;j<m;j++){
            if(i%a[j]==0){
                f = 1;
                break;
            }
        }
            if(f==0){
                sum++;
            }
        }

        printf("%d\n",sum);
    }
    return 0;
}

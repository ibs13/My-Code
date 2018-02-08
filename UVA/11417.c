#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,a,p,q,sum;

    while(scanf("%d",&n)==1){
        if(n==0){
            break;
        }
        else{
            sum = 0;

            for(i=1;i<n;i++){
                for(j=i+1;j<=n;j++){
                    p = i;
                    q = j;

                    while(p%q!=0){
                        a = q;
                        q = p % q;
                        p = a;
                    }
                    sum = sum + q;
                }
            }

            printf("%d\n",sum);
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,m,i,j,k,z,a[1120],b[500],sum;

    for(i=1;i<=1120;i++){
        a[i] = 0;
    }

    a[1] = 1;

    for(i=4;i<=1120;i+=2){
        a[i] = 1;
    }

    for(i=3;i<=sqrt(1120);i+=2){
        for(j=i*i;i<=1120;i+=2){
            a[j] = 1;
        }
    }

    for(i=1,j=0;i<=1120;i++){
        if(a[i]==0){
            b[j] = i;
            j++;
        }
    }

    while(scanf("%d %d",&n,&m))
    {
        if(n==0 && m==0){
            break;
        }
        else{

            z = 0;

            for(i=0;b[i]<=n;i++){
                j = i;
                k = 0;
                sum = 0;

                while(k<m){
                    sum = sum + b[j];
                    j++;
                    k++;
                }
                if(sum==n){
                    z++;
                }
            }

        printf("%d\n",z);
        }
    }

    return 0;
}

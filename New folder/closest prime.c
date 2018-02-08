#include <stdio.h>
#include <math.h>

int main()
{
    int a[10000],i,j,n,t,k,m1,m2;

    a[0] = 2;

    for(i=3,k=1;i<=10000;i++){
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                break;
            }
        }
        if(i%j!=0){
                a[k++] = i;
            }
    }

    a[k++] = 10007;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        printf("Input value: %d\n",n);

        for(i=0;a[i]<=n;i++){
            if(a[i]==n){
                break;
            }
        }

        if(a[i]==n){
            printf("Would you believe it, it is a prime!\n\n");
        }
        else{
            m1 = fabs(n - a[i-1]);
            m2 = fabs(a[i] - n);

            if(m1>m2){
                printf("Missed it by that much(%d)!\n\n",m2);
            }
            else{
                printf("Missed it by that much(%d)!\n\n",m1);
            }
        }

    }

    return 0;
}

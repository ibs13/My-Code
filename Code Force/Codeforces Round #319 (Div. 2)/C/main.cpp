#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n,m,p,i,j,k,v,z,a[1000],b[1000],c[1000];

    for(i=1;i<=1000;i++){
        a[i] = 0;
    }

    m = sqrt(1000);

    a[1] = 1;

    for(i=4;i<=1000;i+=2){
        a[i] = 1;
    }

    for(i=3;i<=m;i+=2){
            if(a[i]==0){
                for(j=i*i;j<=1000;j+=i){
                    a[j] = 1;
                }
            }
    }

    for(i=1,j=0;i<=1000;i++){
        if(a[i]==0){
            b[j++] = i;
        }
    }

    scanf("%d",&n);

    for(i=0,k=0;i<n;i++){
        for(j=1; ;j++){
            p = j * b[i];
            if(p<=n){
                    v = 0;
                for(z=0;b[z]<=p && v<2;z++){
                    if(p%b[z]==0){
                        v++;
                    }
                }
                if(v<2)
                c[k++]=p;
            }
            else
                break;
        }
    }

    printf("%d\n",k);

    for(i=0;i<k;i++){
        printf("%d",c[i]);
        if(i!=k-1){
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}

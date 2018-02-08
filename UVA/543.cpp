#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>

int a[1000000];
int b[1000000];

using namespace std;

int main()
{
    int n,i,j,m,p;


    for(i=1;i<=1000000;i++){
        a[i] = 0;
    }

    a[1] = 1;

    for(i=4;i<=1000000;i+=2){
        a[i] = 1;
    }

    m = sqrt(1000000);

    for(i=3;i<=m;i+=2){
        for(j=i*i;j<=1000000;j+=i){
            a[j] = 1;
        }
    }

    for(i=1,j=0;i<=1000000;i++){
        if(a[i]==0){
            b[j] = i;
            j++;
        }
    }

    while(scanf("%d",&n)){
            if(n==0){
                break;
            }
       else{
            p = 0;

        for(i=1;a[i]<n;i++){
            for(j=i;a[i]<n;j++){
                if(b[i]+b[j]==n){
                    p = 1;
                    break;
                }
                else if(b[i]+b[j]>n){
                    break;
                }
            }
            if(b[i]+b[j]==n){
                    p = 1;
                    break;
                }
        }

        if(p==1){
            printf("%d = %d + %d\n",n,b[i],b[j]);
        }
        else{
            printf("Goldbach's conjecture is wrong.\n");
        }
       }

    }

    return 0;
}

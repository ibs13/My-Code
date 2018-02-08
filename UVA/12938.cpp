#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,d,t,n,m,i,k,ca=1;
    double p;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);

        k = 0;

        d = n % 10;
        n/=10;
        c = n % 10;
        n/=10;
        b = n % 10;
        n/=10;
        a = n;

        for(i=1;i<=9;i++){
                if(i!=a){
                    m = (i * 1000) + (b * 100) + (c * 10) + d;

                    p = sqrt(m);

                    if(p==(int)p){
                        k++;
                    }
                }
        }

        for(i=0;i<=9;i++){
            if(i!=b){
                m = (a * 1000) + (i * 100) + (c * 10) + d;

                p = sqrt(m);

                if(p==(int)p){
                    k++;
                }
            }
        }

        for(i=0;i<=9;i++){
            if(i!=c){
                m = (a * 1000) + (b * 100) + (i * 10) + d;

                p = sqrt(m);

                if(p==(int)p){
                    k++;
                }
                    }
            }

    for(i=0;i<=9;i++){
            if(i!=d){
                m = (a * 1000) + (b * 100) + (c * 10) + i;

                p = sqrt(m);

                if(p==(int)p){
                    k++;
                }
            }
        }

        printf("Case %d: %d\n",ca++,k);
    }
    return 0;
}

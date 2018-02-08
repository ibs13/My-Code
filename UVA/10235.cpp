#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n,p,i,j,t,z,r,m,k;

    while(scanf("%d",&n)==1){

        if(n==0){
            z = 0;
            r = 0;
        }
        else{
             m = 0;
        z = 1;
        r = n;
        t = sqrt(n);

        for(i=2;i<=t;i++){
            if(n%i==0){
                z = 0;
                break;
            }
        }

        if(z==1){
            while(n!=0){
                    p = n % 10;
                    m = (m*10)+p;
                    n = n / 10;
                }
            k = sqrt(m);

            if(m!=r){
                z = 2;

            for(i=3;i<=k;i++){
            if(m%i==0){
                z = 1;
                break;
            }
            }
        }
    }
        }


           if(z==0){
            printf("%d is not prime.\n",r);
        }
        else if(z==1){
            printf("%d is prime.\n",r);
        }
        else if(z==2){
            printf("%d is emirp.\n",r);
        }
    }

    return 0;
}

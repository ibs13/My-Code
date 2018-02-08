#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int x,n=1,m,p=0,v,y,z,i,j,a[100000];

    scanf("%d",&x);

    if(x==1){
        m = 1;
    }
    else{
        for(i=0;n<x;i++){
            n*=2;
            if(n==x){
                p = 1;
                m = 1;
                break;
            }
        }

        if(p!=1){
            v = sqrt(x);
            for(i=0;i<v;i++){
                z = i + 1;
                for(j=1;;j++){
                    z*=2;
                    if(z>x){
                        break;
                    }
                    y = z;
                }
                a[i] = x - y + i + 1;
            }
            sort(a,a+i);
            m = a[0];
        }
    }

    printf("%d\n",m);

    return 0;
}

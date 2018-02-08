#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int a[200][200],n,m,i,j,k,maxi,maxim,b[200],v,t;

    scanf("%d %d",&n,&m);

    for(i=1;i<=m;i++){

            b[i] = 0;
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=1;i<=m;i++){
            maxim = a[i][1];
            v = 1;
        for(j=2;j<=n;j++){
            if(maxim<a[i][j]){
                maxim = a[i][j];
                v = j;
            }
        }
        for(k=1;k<=n;k++){
            if(k==v){
                b[k] = b[k] + 1;
                break;
            }
        }
    }

    maxi = b[1];
    t = 1;
    for(i=2;i<=n;i++){
        if(maxi<b[i]){
            maxi = b[i];
             t = i;
        }
    }

    printf("%d\n",t);

    return 0;
}

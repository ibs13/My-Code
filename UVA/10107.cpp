#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int a[10000],i=0,j,n,m;

    while(scanf("%d",&n)==1){
        a[i] = n;
        i++;
        j = i / 2;
        sort(a,a+i);

        if(i%2==1){
            m = a[j];
        }
        else{
            m = (a[j]+a[j-1])/2;
        }

        printf("%d\n",m);
    }

    return 0;
}

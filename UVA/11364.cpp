#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n,a[1000],i,sum,t;

    scanf("%d",&t);

    while(t--){
        sum = 0;

        scanf("%d",&n);

        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        sort(a,a+n);

        for(i=0;i<n-1;i++){
            sum+=(a[i+1]-a[i]);
        }

        printf("%d\n",sum*2);
    }

    return 0;
}

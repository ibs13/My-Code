#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t,n,a[1000],sum,ca=1;

    scanf("%d",&t);

    while(t--){
        printf("\n");
        sum = 0;

        scanf("%d",&n);

        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);

            if(a[i]<0)
                a[i]*=-1;

            sum+=a[i];
        }

        printf("Case %d: %d\n",ca++,sum);
    }
    return 0;
}

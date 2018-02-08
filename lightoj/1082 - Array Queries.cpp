#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int t,n,q,x,y,i,j,a[100000],b[100000],ca=1;

    scanf("%d",&t);

    while(t--){
        printf("\n");
        printf("Case: %d\n",ca++);

        scanf("%d %d",&n,&q);

        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }

        while(q--){
            scanf("%d %d",&x,&y);

            for(j=0,i=x;i<=y;i++,j++){
                b[j] = a[i];
            }

            sort(b,b+(y-x+1));

            printf("%d\n",b[0]);
        }
    }

    return 0;
}

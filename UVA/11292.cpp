#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,i,j,s,a[20010],b[20010];

    while(scanf("%d %d",&n,&m)==2)
    {
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        for(i=0;i<m;i++){
            scanf("%d",&b[i]);
        }

        s = 0;

        if(n==0 && m==0){
            break;
        }
        else if(n>m){
            printf("Loowater is doomed!\n");
        }
        else{
            sort(a,a+n);
            sort(b,b+m);

            for(i=0,j=0;i<n;j++)
            {
                if(a[i]>b[j]){
                    i=i;
                }
                else{
                    i++;
                    s = s + b[j];
                }
                if(j<m){
                    continue;
                }
                else{
                    break;
                }
            }
            if(j<=m && i==n){
                    printf("%d\n",s);
                }
                else{
                    printf("Loowater is doomed!\n");
                }

        }
    }

    return 0;
}


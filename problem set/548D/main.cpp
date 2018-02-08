#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int a[200000],n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    sort(a,a+n);
    reverse(a,a+n);

    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);

        if(i!=n-1){
            printf(" ");
        }
        else{
            printf("\n");
        }
    }

    return 0;
}

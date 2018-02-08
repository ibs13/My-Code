#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n,a[100000],b[100000],i;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    reverse(a,a+n);

    b[0] = 0;

    for(i=1;i<n;i++){
        if(a[i]<=a[i-1]){
            b[i] = a[i-1] - a[i] + 1;
            swap(a[i],a[i-1]);
        }
        else{
            b[i] = 0;
        }
    }

    reverse(b,b+n);

    for(i=0;i<n;i++){
        printf("%d",b[i]);

        if(i!=n-1){
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}

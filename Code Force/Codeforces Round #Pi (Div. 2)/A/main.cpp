#include <iostream>
#include <cstdio>
#include <cmath>

long long int a[200010];

using namespace std;

int main()
{
    long long int n,i,min1,min2,min3,max1,max2,max3;

    scanf("%I64d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
    }

    max1 = fabs(a[n-1]-a[0]);
    min1 = fabs(a[1]-a[0]);

    printf("%I64d %I64d\n",min1,max1);

    if(n>2){
        for(i=1;i<n-1;i++)
        {
            min2 = fabs(a[i] - a[i+1]);
            min3 = fabs(a[i-1] - a[i]);

            if(min2>min3){
                printf("%I64d ",min3);
            }
            else{
                printf("%I64d ",min2);
            }

            max2 = fabs(a[i] - a[0]);
            max3 = fabs(a[n-1] - a[i]);

            if(max2>max3){
                printf("%I64d\n",max2);
            }
            else{
                printf("%I64d\n",max3);
            }
        }
        min3 = fabs(a[n-2] - a[n-1]);
        printf("%I64d %I64d\n",min3,max1);
    }

    else{
        printf("%I64d %I64d\n",max1,min1);
    }

    return 0;
}

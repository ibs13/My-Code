#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,j,k,a[2050],b[2050],c[2050],d[2050];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);

        a[i] = b[i];
    }

    sort(a,a+n);

    for(i=n-1,j=1;i>=0;i--)
    {
        c[i] = j;

        if((a[i]==a[i-1]) && (i!=0)){
            c[i] = j;
            c[i-1] = j;
        }
        else{
            c[i-1] = (n-i)+1;
            j = (n-i) + 1;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]==b[i]){
                d[i] = c[j];
                break;
            }
        }
        printf("%d",d[i]);
        if(i<n-1)
            printf(" ");
    }

    printf("\n");

    return 0;
}

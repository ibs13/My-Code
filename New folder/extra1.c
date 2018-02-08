#include <stdio.h>

int main()
{
    int n,i,j,a[100],mini,max;

    scanf("%d",&n);

    for(j=0;j<n;j++)
    {
    for(i=0;i<5;i++)
    {
        scanf("%d ",&a[i]);
    }
        mini=a[0];
        for(i=0;i<5;i++)
        {
            if(mini>a[i])
                mini=a[i];
        }

        max=a[0];
        for(i=0;i<5;i++)
        {
            if(max<a[i])
                max=a[i];
        }

        printf("%d %d\n",max,mini);

    }
        return 0;

}


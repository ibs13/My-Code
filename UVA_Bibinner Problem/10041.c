#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,a[3010],i,j,temp,p,s,dis,min;

    scanf("%d",&t);

    while(t--)
    {
        p = 0;
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]>a[i]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
             }
        }


        for(i=0;i<n;i++)
            {
                dis=0;
                for(j=0;j<n;j++)
            {
                dis+=abs(a[j]-a[i]);
            }
            if(i==0)
                min=dis;
            if(dis<min)
                min=dis;
            }
            printf("%d\n",min);

    }

    return 0;
}

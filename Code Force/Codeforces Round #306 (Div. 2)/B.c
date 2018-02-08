#include <stdio.h>

int main()
{
    long int a[20],l,r,x,n,i,j,s=0,p,temp;

    scanf("%I32d %I32d %I32d %I32d",&n,&l,&r,&x);

    for(i=0;i<n;i++)
    {
        scanf("%I32d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i=0;i<n-1;i++)
    {
        p = a[i];

        for(j=i+1;j<n;j++)
        {
            if(a[j]-a[i]>=x){

                p = p + a[j];

                if(p>=l && p<=r){
                    s++;
                }
                else{
                    break;
                }

            }
        }
    }

    printf("%I32d\n",s*2);

    return 0;
}

#include <stdio.h>

int main()
{
    long long int a[10000],n,i=0,m,j,temp,p,g,k,h,d;

    while(scanf("%lld",&n)==1)
    {
        a[i] = n;
        d = i+1;
        m = d;
        j = 0;

        while(j<d-1)
        {
            k=j+1;
            while(k<d)
            {
                if(a[k]<a[j])
            {
                temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
            k++;
            }
            j++;
        }


        if(m%2==1)
        {
            h = (m+1)/2;

            printf("%lld\n",a[h-1]);
        }
        else{
            p = m/2;

            g = (a[p-1]+a[p])/2;

            printf("%lld\n",g);
        }

        i++;
    }

    return 0;
}

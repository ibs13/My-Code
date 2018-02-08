#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,i,t=0,p,r;
    char a[200009];

    scanf("%ld",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]=='-1')
        {
            t++;
            break;
        }
        }

    for(i=0;i<n-1;i++)
    {
        if(a[i]!='-1')
        {
            i++;
                p = a[i+1]-a[i];

                    if(p!=r)
                        {
                            t++;
                        }
                r = p;
        }
    }

    if(t==0)
    {
        printf("%ld\n",t+1);
    }
    else{
        printf("%ld\n",t-1);
    }

    return 0;
}

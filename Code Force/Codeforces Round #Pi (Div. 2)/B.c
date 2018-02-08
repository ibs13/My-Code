#include <stdio.h>

int main()
{
    char a[150];
    int b[150],c[150],d[150],n,i,j,k,p,q,t,s;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%c %d",&a[i],&b[i]);
    }

    for(i=0,j=0,k=0;i<n;i++)
    {
        if(a[i]=='+'){
            c[j] = b[i];
            j++;
        }
        else{
            c[k] = b[i];
            k++;
        }
    }

    p = j;
    q = k;

    for(i=0,t=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            if(c[i]==d[j]){
                t++;
                q--;
                break;
            }
        }
    }

    s = n -(q+t);

    printf("%d\n",s);

    return 0;
}

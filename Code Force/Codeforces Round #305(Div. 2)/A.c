#include <stdio.h>
#include <string.h>

int main()
{
    int m,n,p=1,q,j,k,s=0,o,g;
    char a[1050],b[1050],c[1050];

    gets(a);
    scanf("%d",&q);

    n = strlen(a);

    m = n / q;
    g = m;

    printf("\n%d %d %d\n",n,m,g);

    while(p!=0 || j<n){
    for(j=s,k=0;j<g-1 && k<m;j++,k++)
    {
        b[k] = a[j];
    }

        for(k=g-1,o=0;k>=0 && o<g;k--,o++)
        {
            c[o] = b[k];
        }

        if(strcmp(b,c)){
                p = 1;
        }
        else{
            p = 0;
        }
        s = s + m;
        g = (g-1) + m;

        printf("\n%d %d\n",s,g);
    }

    if(p==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}

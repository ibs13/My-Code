#include <stdio.h>
#include <string.h>

int main()
{
    int t,h,m,c[150],i,j,k,s,r;
    char st[10009],str[150];
    double a;

    scanf("%d",&t);

    while(t--)
    {
        s = 0;

        scanf("%d",&h);

        for(i=0;i<h;i++)
        {
            scanf("%c %d",&str[i],&c[i]);
        }

        scanf("%d",&m);

        for(i=0;i<m;i++)
        {
            gets(st);

            r = strlen(st);

            for(j=0;j<r;j++)
            {
                for(k=0;k<h;k++)
                {
                    if(str[k]==st[j])
                    {
                        s = s+c[k];
                        break;
                    }
                }
            }
        }
        a = (double)s/100;

        printf("%.2lf$\n",&a);
    }
    return 0;
}

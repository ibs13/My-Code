#include <stdio.h>
#include <string.h>

int main()
{
    int r,i,j,s,p,q,m,n,z,t,g,v;
    char a[20],b[20];

    scanf("%d",&g);
    getchar();
    while(g--)
    {
        gets(a);
        j = 0;
        m = 0;
        n = 0;
        r = strlen(a);

        for(i=0;i<r;i++)
        {
            if(a[i]!=' ')
            {
                b[j] = a[i];
                j++;
            }
        }

        p = strlen(b);

        for(i=0;i<p-3;i++)
        {
            if(i%2==0)
            {
              int s = (b[i]-48);

                s = 2*s;
                v = s;
                while(v!=0)
                {
                    t = v%10;
                    v = v/10;

                    n = n+t;
                }
            }
            else{
               int q = (b[i]-48);

                m = m+q;
            }
        }
        z =n+m;

        if(z%10==0)
        {
            printf("Valid\n");
        }
        else{
            printf("Invalid\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,p,q,g,h,r,s,t,m,n;
    float f,love;
    char a[26],b[26],z ='%';

    while(gets(a))
    {
        gets(b);

        s = 0;
        t = 0;
        g = 0;
        h = 0;

        p = strlen(a);
        q = strlen(b);

        for(i=0;i<p;i++)
        {
            if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
            {
                    if(a[i]>=65 && a[i]<=90)
                    {
                        s = s + a[i]-64;
                    }
                    else{
                        s = s + a[i]-96;
                    }
            }
        }

        while(s!=0)
        {
            m = s%10;
            g = g+m;
            s = s/10;

            if(s==0 && g>9)
            {
                s = g;
                g = 0;
            }
        }

         for(j=0;j<q;j++)
        {
            if((b[j]>=65 && b[j]<=90) || (b[j]>=97 && b[j]<=122))
            {
                    if(b[j]>=65 && b[j]<=90)
                    {
                        t = t + b[j]-64;
                    }
                    else{
                        t = t + b[j]-96;
                    }
            }
        }

         while(t!=0)
        {
            n = t%10;
            h = h+n;
            t = t/10;
            if(t==0 && h>9)
            {
                t = h;
                h = 0;
            }
        }

        if(h>g)
        {
            f = (float)g/h;
        }
        else{
            f = (float)h/g;
        }

        love = f*100;

        printf("%.2f %c\n",love,z);
    }

        return 0;
}


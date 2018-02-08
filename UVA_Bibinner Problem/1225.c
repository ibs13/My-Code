#include <stdio.h>

int main()
{
    long int t,n,a,b,c,d,e,f,g,h,i,j,k,r,z;

    scanf("%ld",&t);

    while(t--)
    {
        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
        f=0;
        g=0;
        h=0;
        i=0;
        j=0;

        scanf("%ld",&n);

        for(k=n;k>0;k--)
        {
            z=k;
            while(z!=0)
            {
                r=z%10;
                z=z/10;

                if(r==0)
                {
                   a++;
                }
                else if(r==1)
                {
                    b++;
                }
                else if(r==2)
                {
                    c++;
                }
                else if(r==3)
                {
                    d++;
                }
                else if(r==4)
                {
                    e++;
                }
                else if(r==5)
                {
                    f++;
                }
                else if(r==6)
                {
                    g++;
                }
                else if(r==7)
                {
                    h++;
                }
                else if(r==8)
                {
                    i++;
                }
                else if(r==9)
                {
                    j++;
                }
            }
        }

        printf("%ld %ld %ld %ld %ld %ld %ld %ld %ld %ld\n",a,b,c,d,e,f,g,h,i,j);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,r,j,d;
    char a[1100],ch,b[1100];

    scanf("%d\n",&t);

    while(t--)
    {
        d=0;
        do
        {
            ch=getchar();
            a[d]=ch;
            d++;
        }
        while(ch!='\n');
        {
            d=d-1;
            a[d]='\0';
        }

        r=strlen(a);

        for(i=0;i<r;i++)
        {
            if((a[i]>96 && a[i]<123) || (a[i]>64 && a[i]<91))
            {
                a[i]=a[i]+3;

            }
            else{
                a[i]=a[i];
            }
        }

        for(j=0,i=r-1;i>=0,j<r;j++,i--)
            {
                b[j]=a[i];
            }

        for(i=0;i<r;i++)
        {
            if((b[i]>96 && b[i]<126) || (b[i]>64 && b[i]<94))
            {
                if(i<r/2)
                {
                    b[i]=b[i];
                    }

                else{
                    b[i]=b[i]-1;
                }
                }
        }

        for(i=0;i<r;i++)
        {
            putchar(b[i]);
        }
        printf("\n");
    }

    return 0;
}

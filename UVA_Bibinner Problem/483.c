#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,c,r,s,p;
    char a[1000],b[1000];

    while(gets(a))
    {
        c = 0;
        s = 0;
        r = strlen(a);

        for(i=0;i<r+1;i++)
        {
            if(a[i]!=' ' && a[i]!='\0')
            {
                s++;
                c++;
            }
            else{
                p = c-s;

                for(j=c-1;j>=0;j--)
                {
                    b[p] = a[j];
                    p++;
                }
                s= 0;
                c++;
                if(a[i]!='\0')
                {
                    b[i] = ' ';
                }
            }
        }
        for(j=0;j<r;j++)
        {
            putchar(b[j]);
        }
        printf("\n");
    }

    return 0;
}

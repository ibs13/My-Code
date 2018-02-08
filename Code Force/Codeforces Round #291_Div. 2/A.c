#include <stdio.h>
#include <string.h>

int main()
{
    int i,r,min,p,q,b[50];
    char a[50];

    gets(a);

    r = strlen(a);

    min = '9';
    for(i=0;i<r;i++)
    {
        if(min>a[i] && a[i]!='0')
        {
            min = a[i];
        }
    }

    q = min-'0';

    for(i=0;i<r;i++)
    {
        p = a[i]-'0';

        if(q<p)
        {
            b[i] = 9-p;
        }

        else{
            b[i] = q ;
            }
    }

    for(i=0;i<r;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");

    return 0;
}

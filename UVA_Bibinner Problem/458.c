#include <stdio.h>
#include <string.h>

int main()
{
    int r,i;
    char a[100000],b[100000];

    while(scanf("%c",&a)==1)
    {

        r=strlen(a);

        for(i=0;i<r;i++)
        {
            b[i]=a[i]-7;
        }

        puts(b);
        printf("\n");
    }
    return 0;
}

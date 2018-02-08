#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,s=0;
    char p,e, f[4];

    while(scanf("%d%c%d%c",&a,&p,&b,&e)!=EOF)
    {
        gets(f);
        if(f[0] == '?')
        {
            continue;
        }
        else
        {
            c = atoi(f);
        }
        if(p == '+' && (a+b == c))
            s++;
        else if(p == '-' && (a-b == c))
            s++;
    }
    printf("%d\n",s);

    return 0;
}

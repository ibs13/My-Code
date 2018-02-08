#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n,r,i,p,q,s,t;
    char a[130];

    scanf("%d",&n);

    while(n--)
    {
        p=0;
        q=0;
        t=0;
        s=0;
        fflush(stdin);
        gets(a);

        r=strlen(a);

        for(i=0;i<r;i++)
        {
            if(a[i]=='(')
            {
                p++;
            }
            else if(a[i]==')')
            {
                q++;
            }
            else if(a[i]=='[')
            {
                s++;
            }
            else if(a[i]==']')
            {
                t++;
            }
        }

        if((p==q && s==t) || r==0)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }

    }

    return 0;
}

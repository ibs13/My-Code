#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i,r,s;
    char st[10000];

    while(gets(st))
    {
        s=0;
        i=0;

        r=strlen(st);

       while(i<r)
       {
           while(!isalpha(st[i]))
           {
               i++;
           }
           if(i<r)
           {
               s++;
           }
           while(isalpha(st[i]))
           {
               i++;
           }
       }

        printf("%d\n",s);
    }

    return 0;

}

#include <stdio.h>
#include <string.h>

int main()
{
    int t,r,s,ca=1,i;
    char st[101];

    scanf("%d",&t);

    getchar();

    while(t--)
    {
        s=0;

        gets(st);

        r=strlen(st);

        for(i=0;i<r;i++)
        {
            if(st[i]=='a' || st[i]=='d' || st[i]=='g' || st[i]=='j' || st[i]=='m' || st[i]=='p' || st[i]=='t' ||st[i]=='w' || st[i]==' ')
            {
                s=s+1;
            }
            else if(st[i]=='b' || st[i]=='e' || st[i]=='h' || st[i]=='k' || st[i]=='n' || st[i]=='q' || st[i]=='u' || st[i]=='x')
                {
                    s=s+2;
                }
            else if(st[i]=='c' || st[i]=='f' || st[i]=='i' || st[i]=='l' || st[i]=='o' || st[i]=='r' || st[i]=='v' || st[i]=='y')
                {
                    s=s+3;
                }
            else if(st[i]=='s' || st[i]=='z')
            {
                s=s+4;
            }
        }

        printf("Case #%d: %d\n",ca++,s);
    }
    return 0;
}

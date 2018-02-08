#include <stdio.h>
#include <string.h>

int main()
{
    char s[650];
    int i,n,a,b,c,d,e,f,t,p;

    scanf("%d",&t);

    getchar();

    while(t--)
    {
        a=0,b=0,c=0,d=0,e=0,f=0,p=0;

        scanf("%s",&s);

        n = strlen(s);

        for(i=0;i<n;i++)
        {
            if(s[i]=='M')
                a++;
            else if(s[i]=='A')
                b++;
            else if(s[i]=='R')
                c++;
            else if(s[i]=='G')
                d++;
            else if(s[i]=='I')
                e++;
            else if(s[i]=='T')
                f++;

            if(a>=1 && b>=3 && c>=2 && d>=1 && e>=1 && f>=1){
                p++;
                a-=1;
                b-=3;
                c-=2;
                d-=1;
                e-=1;
                f-=1;
            }
        }

        printf("%d\n",p);
    }

    return 0;
}

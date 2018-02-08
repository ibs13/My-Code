#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,t,n,m;
    char a[1000000],b[10000],c[10000],s[26],p[26];

    scanf("%d",&t) ;

    while(t--)
    {

    for(i=0;i<26;i++)
    {
        s[i] = 65 + i;
    }

        scanf("%s",&a);

        scanf("%d",&n);

       m = strlen(a);

       for(i=0;i<n;i++)
       {
            scanf("%s %s",&b,&c);

            for(j=0;j<26;j++)
           {
               if(s[j]==c[0]){
                   s[j] = b[0];
               }
           }
       }

        for(i=0;a[i];i++)
        {
            printf("%c",s[a[i]-65]);
        }

        printf("\n");
    }

    return 0;
}


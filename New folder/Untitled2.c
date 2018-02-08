#include <stdio.h>
#include <string.h>


int main()
{
    int p,t,i,r,ca=0;
    char str[51],b;


    scanf("%d",&t);
    getchar();

    while(t--)
    {
        getchar();
        p=0;
        gets(str);

        scanf("%c",&b);


        for(i=0;i<strlen(str);i++)
        {
            if(str[i]>96)
            {
                str[i]=str[i]-32;
            }
            else{
                str[i]=str[i];
            }

            if(str[i]==b)
                p++;
            else
                p=p;

        }

        printf("Case %d: %d\n",++ca,p);
    }

    return 0;
}

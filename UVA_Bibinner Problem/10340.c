#include <stdio.h>
#include <string.h>

int main()
{
    int i,r1,r2,j,g,k;
    char a[100000],b[100000];

    while(scanf("%s",a)!=EOF)
    {
        k=0;

        scanf("%s",b);

        r1 = strlen(a);
        r2 = strlen(b);

        for(i=0;i<r1;i++)
        {
            g = 0;
            for(j=k;j<r2;)
            {
                if(b[j]==a[i])
                {
                    k = j+1;
                    g = 1;
                    break;
                }
                else{
                    j++;
                }

            }
            if(g==0)
            {
                break;
            }
        }

        if(g==0 || r1>r2)
        {
            printf("No\n");
        }

        else if(g==1)
        {
            printf("Yes\n");
        }

    }

    return 0;
}

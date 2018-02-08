#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n,m,p,s=0,i,b[100],g=0,j;
    char a[110];

    for(i=0;i<n;i++)
            {
                b[i] = 0;
            }

    while(scanf("%s",a)==1)
    {
        if(a[0]=='0'){
            break;
        }

        else{
            n = strlen(a);
            m = n;
            if(n<g){
                m = g;
            }

            strrev(a);
            for(i=0;i<n;i++)
            {
                if(i==0){
                    s = 0;
                }
                p = (int)a[i]-48;

                m = b[i] + p + s;

                if(m>9){
                    s = 1;
                }
                else{
                    s = 0;
                }
                if(i==n-1){
                    b[i] = m;
                }
                else{
                    b[i] = m%10;
                }
            }
            g = m;
        }
    }

        for(i=m-1;i>=0;i--)
    {
        printf("%d",b[i]);
    }

    printf("\n");


    return 0;
}

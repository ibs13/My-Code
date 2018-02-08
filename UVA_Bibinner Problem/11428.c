#include <stdio.h>
#include <math.h>

int main()
{
    int n,p,s,i,j;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        else{
            p = sqrt(n);

            for(i=1;i<=p;i++)
            {
                for(j=0;j<=i;j++)
                {
                    s = pow(i,3) - pow(j,3);

                if(s==n)
                {
                    break;
                }
                else{
                    continue;
                    }
                }

                if(s==n)
                {
                    break;
                }

            }

            if(s==n)
            {
                printf("%d %d\n",i,j);
            }
            else{
                printf("No solution\n");
            }
        }
    }

    return 0;
}

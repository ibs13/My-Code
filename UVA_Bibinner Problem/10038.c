#include <stdio.h>
#include <math.h>

int main()
{
    int a[3050],n,i,j,b[3050],c,p,temp,s;

    while(scanf("%d",&n)!=EOF)
    {
        s = 1;

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<n-1;i++)
        {
            p = fabs(a[i+1] - a[i]);

            b[i] = p;
        }

        for(i=0;i<n-1;i++)
        {
            for(j=n-2;j>i;j--)
            {
                if(b[i]<b[j])
                {
                    temp = b[j];
                    b[j] = b[i];
                    b[i] = temp;
                }
            }
        }

        for(i=0;i<n-1;i++)
        {
            c = b[i]-b[i+1];
            if(c==1){
                s = 1;
            }
            else{
                s = 0;
                break;
            }
        }

        if(s==1)
        {
            printf("Jolly\n");
        }
        else{
            printf("Not jolly\n");
        }
    }

    return 0;
}

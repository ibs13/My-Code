#include <stdio.h>

int main()

{
    int d1,d2,m1,m2,y1,y2,y3,t,i;

    while(scanf("%d",&t)==1)
    {

    for(i=1;i<=t;i++)
        {

            scanf("%d/%d/%d",&d2,&m2,&y2);
            scanf("%d/%d/%d",&d1,&m1,&y1);

            if(d2<d1)
                {
                    d2=d2+30;
                    m1=m1+1;
                }

            if(m2<m1)
                {
                    m2=m2+12;
                    y1=y1+1;
                }

                    y3=y2-y1;

            if(y3<0)
                {
                    printf("Case #%d: Invalid birth date\n",i);
                }
            else if(y3>130)
                {
                    printf("Case #%d: Check birth date\n",i);
                }
            else{
                    printf("Case #%d: %d\n",i,y3);
                }

        }
    }
    return 0;
}

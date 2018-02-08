#include <stdio.h>

int main()
{
    int d1,m1,y1,d2,m2,y2,d3,m3,y3;

    printf("Enter your birth of date:\n");
    scanf("%d %d %d",&d1,&m1,&y1);

    printf("Enter today's date:\n");
    scanf("%d %d %d",&d2,&m2,&y2);

    if(d2<d1)
        {
            d2=d2+30;
            m1=m1+1;
    }
    else{
        d2=d2;
        m1=m1;
    }
    d3=d2-d1;

    if(m2<m1)
    {
        m2=m2+12;
        y1=y1+1;
    }
    else{
        m2=m2;
        y1=y1;
    }
    m3=m2-m1;

    y3=y2-y1;

    if(y1>y2)
    {
        printf("\n\nInvalid input");
    }
    else{
        printf("\n\nMy age is: %d years %d months %d days\n\n",y3,m3,d3);
    }

    return 0;
}


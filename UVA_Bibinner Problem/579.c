#include <stdio.h>

int main()
{
    int h,m;
    float a,b,c,d,e,p=0.5;
    char ch;

    while(scanf("%d%c%d",&h,&ch,&m)==3)
    {
        if(h==0 && m==00)
            {
                break;
            }

        else{
            a=(float)h*30;
            b=(float)m*(float)p;
            c=(float)m*6;
            d=a+b;
            if(d>c)
            {
                e=d-c;
            }
            else{
                e=c-d;
            }
            if(e>180)
            {
                e=360-e;
            }

            printf("%.3f\n",e);
        }

    }

    return 0;
}

#include <stdio.h>

int main()
{
    int h1,h2,m1,m2,M;

    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && h2==0 && m1==0 && m2==0){
            break ;
        }
        else{
            if(m1>m2){
                m2+=60;
                h1++;
            }

            if(h1>h2){
                h2+=24;
            }

            M = ((h2 - h1)*60)+(m2 - m1);

            printf("%d\n",M);
        }
    }

    return 0;
}

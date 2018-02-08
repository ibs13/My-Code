#include <stdio.h>

int main()
{
    int h1,h2,m1,m2,t;
    char s;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%c%d",&h1,&s,&m1);

        if(h1==12 && m1==00)
        {
            printf("12:00\n");
        }
        else{
            if(h1==12)
            {
                h2 = 11;
                m2 = 60-m1;
            }
            else if(h1!=12 && m1!=00)
            {
                h2 = 11-h1;
                m2 = 60-m1;
            }
            if(h2==0)
            {
                h2 = 12;
            }

            if(m1==00)
            {
                h2 = 12-h1;
                if(h2<10)
                {
                    printf("0%d:00\n",h2);
                }
                else{
                    printf("%d:00\n",h2,00);
                }
            }
            else{
                if(h2<10)
                {
                    if(m2<10)
                    {
                         printf("0%d:0%d\n",h2,m2);
                    }
                    else{
                         printf("0%d:%d\n",h2,m2);
                    }
                }
                else{
                     if(m2<10)
                    {
                         printf("%d:0%d\n",h2,m2);
                    }
                    else{
                         printf("%d:%d\n",h2,m2);
                    }
                }
            }

        }
    }

    return 0;
}

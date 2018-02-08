#include <stdio.h>

int main()
{
    long int n[5],i,t,temp,max,total,p,a,b,c,d;

    scanf("%ld",&t);

    while(t--)
    {
        for(i=0;i<4;i++)
        {
            scanf("%ld",&n[i]);
        }

        a = n[0];
        b = n[1];
        c = n[2];
        d = n[3];

        if((a==b && b==c && c==d && d==a))
        {
            printf("square\n");
        }

        else if((a==b && c==d) || (a==b && c==d) || (a==d && b==c) || (a==c && b==d))
        {
            printf("rectangle\n");
        }

        else{
            total = (n[0]+n[1]+n[2]+n[3]);

            max = 0;

        for(i=0;i<4;i++)
        {
            if(n[i]>max)
                max = n[i];
        }

        p = total - max;

          if(max<p)
          {
              printf("quadrangle\n");
          }
          else{
            printf("banana\n");
          }
        }
    }
    return 0;
}

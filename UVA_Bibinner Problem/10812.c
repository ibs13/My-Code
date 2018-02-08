#include <stdio.h>

int main()
{
    long int n,a,b,c,d;

    scanf("%ld",&n);

    while(n--)
    {
        scanf("%ld %ld",&c,&d);

        a=(c+d)/2;
        b=c-a;

        if((2*a)<c || c<d || (a-b)!=d)
        {
            printf("impossible\n");
        }
        else{
                if(a>b){
                    printf("%ld %ld\n",a,b);
                }
                else{
                    printf("%ld %ld\n",b,a);
                }
            }
    }

   return 0;
}

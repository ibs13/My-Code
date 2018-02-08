#include <stdio.h>

int main()
{
    int a,b,c,d,l,i,k,m;

    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)==5)
    {
        k = 0;

        if(a==0 && b==0 && c==0 && d==0 && l==0){
            break;
        }
        else{
            for(i=0;i<=l;i++)
            {
                m = ((a*(i*i))+(b*i)+c);

                if(m%d==0){
                    k++;
                }
            }
        }

        printf("%d\n",k);
    }

    return 0;
}

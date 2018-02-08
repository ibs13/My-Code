#include <stdio.h>

int main()
{
    long long int a,b,c,t,temp;
    int ca=1;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }

        if(a>c){
            temp = a;
            a = c;
            c = temp;
        }

        if(b>c){
            temp = b;
            b = c;
            c = temp;
        }

        if(a+b>c){
            if(a==b && b==c){
                printf("Case %d: Equilateral\n",ca++);
            }
            else if(a==b || b==c || c==a){
                printf("Case %d: Isosceles\n",ca++);
            }
            else{
                printf("Case %d: Scalene\n",ca++);
            }
        }
        else{
            printf("Case %d: Invalid\n",ca++);
        }
    }

    return 0;
}

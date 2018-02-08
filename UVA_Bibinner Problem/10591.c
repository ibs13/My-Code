#include <stdio.h>

int main()
{
    int n,i,t,ca=1,g,p,s;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        g = n;

        if(n<10){
            n = n * n;
        }

        while(n>9)
        {
            s = 0;
            while(n!=0)
            {
                p = n % 10;
                n = n / 10;
                s = s + (p*p);
            }
            n = s;
        }

        if(n==1){
            printf("Case #%d: %d is a Happy number.\n",ca++,g);
        }
        else{
            printf("Case #%d: %d is an Unhappy number.\n",ca++,g);
        }
    }

    return 0;
}

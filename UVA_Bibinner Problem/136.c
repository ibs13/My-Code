#include <stdio.h>

int main()
{
    long int i=2,s=1,n,a;

    while(s!=5)
    {
        if(i%2==0 || i%3==0 || i%5==0)
        {
            n=i;

            while(n!=0 && n!=1)
            {
                if(n%2==0)
                {
                    n=n/2;
                }
                else if(n%3==0)
                {
                    n=n/3;
                }
                else if(n%5==0)
                {
                    n=n/5;
                }
                else{
                    break;
                }
            }
            if(n==1)
            {
                s++;
            }
            else{
                s=s;
            }
        }
        a=i;
        i++;
    }

    printf("The 1500'th ugly number is %ld.\n",a);

    return 0;
}

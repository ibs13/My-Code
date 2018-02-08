#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,r,p,j,t,s;
    while(scanf("%d",&n))
    {
        i=2,p=0;
        if(n==0)
        {
            break;
        }

    else
    {
        while(sqrt(n)>i){
            r=n%i;
            i++;
            if(r==0){
                break;
            }

        }
        if(r==0)
        {
        printf("%d is not prime.\n",n);
        }
        else
        {
            t=n;
            while (n != 0)
   {
      p = p * 10;
      p = p + n%10;
      n = n/10;
   }

    if(p%2==0)
    {
        printf("%d is prime.\n",t);
    }
    else{
        j=2;
        while(sqrt(p)>j){

            s=p%j;
            j++;
            if(s==0){
                break;
            }
        }

        if(s==0){
                printf("%d is prime.\n",t);
            }
            else{
                printf("%d is emirp.\n",t);
            }
    }
    }

        }

        }
return 0;
}


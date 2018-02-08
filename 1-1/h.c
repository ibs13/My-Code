#include <stdio.h>

int main()
{
    int n,i=2,r;

    printf("Enter a number:\n");
    scanf("%d",&n);

    printf("Is %d prime?\n",n);

    if(n<=0)
    {
        printf("Invalid input");
    }
    else if(n==2)
    {
        printf("Yes");
    }
    else if(n%2==0 || n==1)
    {
        printf("No");
    }
    else
    {
        while(n>i){
            r=n%i;
            i++;
            if(r==0){
                break;
            }

        }
        if(r==0)
        {
        printf("NO");
        }
        else
        {
            printf("Yes");
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,i=1;

    printf("Enter any number:\n",n);
    scanf("%d",&n);

    for(;;)
    {
       printf("%d X %d = %d\n",n,i,n*i);
        i++;
        if(i>10)
        {
            break;
        }
    }

    return 0;
}


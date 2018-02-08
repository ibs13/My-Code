#include <stdio.h>

int main()
{
    int a,b,m,i;

    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);

    if(a==0 || b==0)
    {
        printf("The greatest common divisor of %d & %d is: 0",a,b);
    }
    else if(a<0 ||b<0)
    {
        printf("The greatest common divisor of %d & %d is: -1",a,b);
    }
    else if(a>0 && b>0)
    {
        if(a>b)
            {
                m=b;
            }
        else
    {
            m=a;
    }
        for(i=m;i>0;i--)
        {
            if(a%i==0 && b%i==0)
            {
                printf("The greatest common divisor of %d & %d is: %d",a,b,i);
                break;
            }

        }

    }
    return 0;
}

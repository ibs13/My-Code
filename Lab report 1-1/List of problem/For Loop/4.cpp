#include <stdio.h>

int main()
{
    int i;

    for(i=100;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d is even\n",i);
        }
        else{
            printf("%d is odd\n",i);
        }
    }

    return 0;
}



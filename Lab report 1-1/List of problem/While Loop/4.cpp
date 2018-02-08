#include <stdio.h>

int main()
{
    int i=100;

    while(i>=1)
    {
        if(i%2==0)
        {
            printf("%d is even\n",i);
        }
        else{
            printf("%d is odd\n",i);
        }

        i--;
    }

    return 0;
}




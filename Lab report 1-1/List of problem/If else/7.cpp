#include <stdio.h>

int main()
{
    int a;

    printf("Enter an age:");
    scanf("%d",&a);

    if(a<10)
    {
        printf("Minor\n");
    }
    else if(a<20)
    {
        printf("Teen\n");
    }
    else if(a<40)
    {
        printf("Young\n");
    }
    else if(a<50)
    {
        printf("Adult\n");
    }

    else
    {
        printf("OLD\n");
    }

    return 0;
}


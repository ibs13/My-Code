#include <stdio.h>

int main()
{
    int age,index;

    printf("Enter an age:");
    scanf("%d",&age);

    index = age/10;

    switch(index)
    {
    case 0:
        printf("MINOR\n");
        break;
    case 1:
        printf("TEEN\n");
        break;
    case 2:
    case 3:
        printf("YOUNG\n");
        break;
    case 4:
        printf("ADULT\n");
        break;
    default:
        printf("OLD\n");
        break;
    }

}



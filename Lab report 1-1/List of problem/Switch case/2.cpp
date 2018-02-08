#include <stdio.h>

int main()
{
    int marks,index;

    printf("Enter an marks:");
    scanf("%d",&marks);

    index = marks/10;

    switch(index)
    {
    case 0:
    case 1:
    case 2:
    case 3:
        printf("FAIL\n");
        break;
    case 4:
        printf("D\n");
        break;
    case 5:
        printf("C\n");
        break;
    case 6:
        printf("B\n");
        break;
    case 7:
        printf("A\n");
        break;
    case 8:
    case 9:
    case 10:
        printf("A+\n");
        break;
    }
    return 0;
}




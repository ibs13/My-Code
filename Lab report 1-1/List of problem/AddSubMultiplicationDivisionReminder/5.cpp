#include <stdio.h>

int main()
{
    int len,wid,area;

    printf("Enter the length of the rectangle:");
    scanf("%d",&len);
    printf("Enter the width of the rectangle:");
    scanf("%d",&wid);

    area = len * wid;

    printf("The area of the rectangle is %d\n",area);

    return 0;
}

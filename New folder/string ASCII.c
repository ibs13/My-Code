#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char string[50];
    int i, sum;
    scanf("%s", string);
    sum = 0;
    for(i = 0; i < strlen(string); i++)
        sum += (int)string[i];

    printf("(%d)\n", sum);
    system("pause");
    return 0;
}

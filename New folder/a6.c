#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any letter: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
        printf("%c is a lower case\n\n",ch);
    }

    else if(ch>='A' && ch<='Z')
    {
        printf("%c is an upper case\n\n",ch);
    }

    return 0;
}

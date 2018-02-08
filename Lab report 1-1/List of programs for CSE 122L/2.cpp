#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a alphabet:");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u'  || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("The alphabet is vowel.\n");
    }
    else{
        printf("The alphabet is not vowel.\n");
    }

    return 0;
}

#include<stdio.h>
int main()
{
    char a;

    printf("Enter any letter: ");
    scanf("%c",&a);

    if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("The letter is Vowel");
    }

    else
    {
        printf("The letter is consonant");
    }

    return 0;
}

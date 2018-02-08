#include<stdio.h>

int main()
{
    int a;

    printf("Enter any number:");
    scanf("%d",&a);

    if(a<=1 || a>=10)
    {
        printf("YES\n\n");
    }

    else
    {
        printf("NO\n\n");
    }

    return 0;

}

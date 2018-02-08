#include<stdio.h>
int main()
{
    long long int a,b,add,sub,mul,div,mod;

    printf("Enter the first number:");
    scanf("%lld",&a);

    printf("Enter the second number:");
    scanf("%lld",&b);

    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;

    printf("The addition of a& b is: %lld\n",add);
    printf("The subtraction of a& b is: %lld\n",sub);
    printf("The multiplication of a& b is: %lld\n",mul);
    printf("The division of a& b is: %lld\n",div);
    printf("The modulus of a& b is: %lld\n",mod);

    return 0;
}


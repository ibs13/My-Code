#include <stdio.h>

int main()
{
    int n,r1,p1,s1,r2,p2,s2,o2,a2;

    printf("Enter a number:\n");
    scanf("%d",&n);
    if(n<100)
    {
        r1=n/10;
        p1=n%10;

        s1=(p1*10)+r1;

        printf("The inverse of %d is %d\n",n,s1);
    }
    else if(n<1000)
    {
        r2=n/100;
        p2=n%100;
        o2=p2%10;
        a2=p2/10;

        s2=(o2*100)+(a2*10)+r2;

        printf("The inverse of %d is %d\n",n,s2);
        }
    return 0;
}

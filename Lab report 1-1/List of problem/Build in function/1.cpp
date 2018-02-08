#include <stdio.h>
#include <math.h>

int main()
{
    int num,power,ans;

    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the power:");
    scanf("%d",&power);

    ans = pow(num,power);

    printf("The power value of that number is %d\n",ans);

    return 0;
}

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,m,i;

    printf("Enter the first number of the range:\n");
    scanf("%d",&n);

    printf("Enter the last number of the range:\n");
    scanf("%d",&m);

    for(i=n;i<=m;i++)
    {
        if(i%4!=0)
        {
            continue;
        }
        else if(i%4==0 && i!=(m-n))
            {
            printf("%d ",i);
        }
    }

    printf("\n\n\n");

    return 0;
}

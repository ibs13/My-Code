#include <stdio.h>
#include <conio.h>

int div();

int main()
{
    div();
    getch();
}

int div()
{
    int m,n,d,i;

    printf("Enter the first number of the range:\n");
    scanf("%d",&m);

    printf("Enter the last number of the range:\n");
    scanf("%d",&n);

    printf("Which number are divided by 4:\n");
    for(i=m;i<=n;i++)
    {

        if(i%4==0)
        {
            printf(" %d",i);
        }

        else{
            continue;
        }
    }
    return 0;
}

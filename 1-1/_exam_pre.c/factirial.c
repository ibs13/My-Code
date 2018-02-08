#include <stdio.h>
#include <conio.h>

int n,f=1,i;

int declare();
int con();
int res_1();
int res_2();

int main()
{
    declare();
    con();
    getch();
}

int declare()
{

    printf("Enter any number:");
    scanf("%d",&n);

    return 0;
}

int con()
{
    if(n<=0)
    {
        return res_1();
    }
    else{
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        return res_2();
    }

}

int res_1()
{
    printf("\n\nInvalid input\n\n");

    return 0;
}

int res_2()
{
    printf("\n\n The factorial of %d is %d\n\n",n,f);

    return 0;
}



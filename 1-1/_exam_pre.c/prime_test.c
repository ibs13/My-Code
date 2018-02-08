#include <stdio.h>
#include <conio.h>

int n,i=2,r;

int dec();
int con();


int main()
{
    dec();
    con();
    getch();
}

int dec()
{
    printf("Enter any number:");
    scanf("%d",&n);

    printf("\n\nIs it prime\n\n");

    return 0;
}

int con()
{
    if(n<=0)
    {
        return res_1();
    }
    else if(n==2)
    {
        return res_2();
    }

    else if(n%2==0 || n==1)
    {
        return res_3();
    }
    else{
        while(n>i)
        {
            r=n%i;
            i++;
            if(r==0)
            {
                break;
            }
            if(r==0)
            {
                printf("    NO\n\n");

            }

        else{
            printf("    YES\n\n");
        }
    }

    return 0;
}

}




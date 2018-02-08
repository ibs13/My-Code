#include <stdio.h>
#include <conio.h>

int a,b,m,i;

int dec();
int con();
int res_1();
int res_2();
int res_3();

int main()
{
    dec();
    con();
    getch();
}

int dec()
{
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("\nEnter the second number:");
    scanf("%d",&b);

    return 0;
}

int con()
{

    if(a==0 || b==0)
    {
        return res_1();
    }
    else if(a<0 || b<0)
    {
        return res_2();
    }
    else if(a>0 && b>0)
            {
                return res_3();
            }
         return 0;
}


int res_1()
{
    printf("\n\nThe Greatest Common Divisor of %d & %d is: 0\n\n",a,b);

    return 0;
}

int res_2()
{
    printf("\n\nThe Greatest Common Divisor of %d & %d is: -1\n\n",a,b);

    return 0;
}

int res_3()
{
    if(a>b)
                    {
                        m=b;
                    }
                else{
                        m=a;
                    }

               for(i=m;i>0;i--)
            {
                if(a%i==0 && b%i==0)
                {
                    printf("\n\nThe Greatest Common Divisor of %d & %d is: %d\n\n",a,b,i);
                    break;
                }

            }

            return 0;
}



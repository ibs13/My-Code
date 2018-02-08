#include <stdio.h>
#include <conio.h>

int d1,d2,d3,m1,m2,m3,y1,y2,y3;

int declare();
int con_cal();
int result();

int main()
{
    declare();
    con_cal();
    result();
    getch();
}

int declare()
{

     printf("Enter my birth of date:\n\n");
     printf("Enter the day:");
     scanf("%d",&d1);
     printf("\nEnter the month:");
     scanf("%d",&m1);
     printf("\nEnter the year:");
     scanf("%d",&y1);


     printf("\n\nEnter today's date:\n\n");
     printf("Enter the date:");
     scanf("%d",&d2);
     printf("\nEnter the month:");
     scanf("%d",&m2);
     printf("\nEnter the year:");
     scanf("%d",&y2);

    return 0;
}

int con_cal()
{

    if(d2<d1)
    {
        d2=d2+30;
        m1=m1+1;
    }
    else{
        d2=d2;
        m1=m1;
    }

    if(m2<m1)
    {
        m2=m2+12;
        y1=y1+1;
    }
    else{
        m2=m2;
        y1=y1;
    }

    d3=(d2-d1)+1;
    m3=m2-m1;
    y3=y2-y1;

    return 0;
}


int result()
{
    if(y2<y1)
    {
        printf("\n\nInvalid input\n\n");
    }
    else{
        printf("\n\nMy age is %d years %d months %d days\n\n",y3,m3,d3);
    }

    return 0;
}





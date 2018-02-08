#include <stdio.h>
#include <conio.h>

int a_avg();

int main()
{
    a_avg();

    getch();
}

int a_avg()
{
    int a[1000],n,i,sum=0,avg;

    printf("How many number:\n");
    scanf("%d",&n);
    printf("\n\n\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    avg=sum/n;

    printf("The average of %d number is %d",n,avg);

    return 0;
}

#include <stdio.h>
#include <conio.h>

int a_sum();

int main()
{
    a_sum();
    getch();
}

int a_sum()
{
    int a[1000],n,p,i;

    printf("How many number:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
}

    printf("enter the possition u want to insert\n");
    scanf("%d",&p);
    if(p<0||p>n)
        printf("insert is impossible\n");

    else
        {
        for(i=n-1;i>=p;i--)
            a[i+1]=a[i];
            printf("enter the number u want to insert\n");
            scanf("%d",&a[p]);
            n++;
     }
    printf("after insert the new array value is:");

        for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
    return 0;
}

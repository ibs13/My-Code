#include <stdio.h>
#include <conio.h>

int a[100],p,n,i;
int insert();
int a_insert();

int main()
{
    insert();
    a_insert();
    getch();
}

int insert()
{

    printf("How many number:\n");
    scanf("%d",&n);
    printf("\n\n\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    return 0;
}

int a_insert()
{

    printf("Enter the position of insert number: ");
    scanf("%d",&p);

    if(p<0 || p>n)
    {
        printf("Insert is impossible");
    }
    else{
        for(i=n-1;i>=p;i--)

            a[i+1]=a[i];
            printf("Enter any number to insert:");
            scanf("%d",&a[p]);
            n++;

    }

    printf("\nAfter insert array contain:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
        }
        return 0;
}



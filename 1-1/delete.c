#include <stdio.h>
#include <conio.h>

int delete();

int main()
{
    delete();
    getch();
}

int delete()
{
    int a[1000],n,p,i;

    printf("How many number:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the position of deleting:");
    scanf("%d",&p);

    if(p<0 || p>n)
    {
        printf("Delete is impossible");
    }
    else{
            for(i=p+1;i<n;i++)

                 a[i-1]=a[i];
                 n--;


    }

    printf("\nAfter deleting the array contain:");
    for(i=0;i<n;i++)
{


        printf(" %d ",a[i]);
}
    return 0;
}

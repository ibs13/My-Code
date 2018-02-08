#include <stdio.h>

int main()
{
   int a[1000],n,i,j,temp;

    printf("How many elements in the array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The list of the elements are:");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(a[i]>a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
        }
    }

    printf("\nAfter bubble sorting the new list of ascending order are:");

    for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }

    printf("\nAfter bubble sorting the new list of descending order are:");

    for(i=n-1;i>=0;i--)
        {
            printf("%d ",a[i]);
        }
    printf("\n");

    return 0;
}

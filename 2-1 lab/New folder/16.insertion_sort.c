#include <stdio.h>

int main()
{
    int a[1000],n,i,j,temp;

    printf("How many data:");
    scanf("%d",&n);

    printf("Enter the data:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The list of array are:");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=1;i<n;i++)
    {
        temp = a[i];

        for(j=i-1;j<=i;j--)
        {
            if(a[j] < temp)
            {
               break;
            }
            a[j+1] = a[j];
        }
        a[j+1] = temp;
    }

    printf("\nAfter inserting sort the list of data are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

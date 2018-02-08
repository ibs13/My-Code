#include <stdio.h>

int main()
{
    int a[1000],n,p,i;

    printf("How many element in the array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nThe list of array are:");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n\nWhat position to you want to delete:");
    scanf("%d",&p);

    if(p>n || p<=0)
    {
        printf("\nInvalid position\n");
    }

    else{
            for(i=0;i<n;i++)
            {
                if(p<=i)
                {
                    a[i-1] = a[i];
                }
            }

        printf("\nAfter deleting the new list of array are:");

        for(i=0;i<n-1;i++)
        {
            printf("%d ",a[i]);
        }

        printf("\n");

        }


    return 0;
}

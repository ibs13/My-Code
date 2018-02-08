#include <stdio.h>

int main()
{
    int a[100],n,i,p,s;

    printf("How many elements in the list of the array:");
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

    printf("\n\nWhat position do you want to insert:");
    scanf("%d",&p);

    if(p>n || p<=0)
    {
        printf("\nInvalid position\n");
    }

    else{
        printf("\nWhat element do you want to insert:");
        scanf("%d",&s);

        for(i=n-1;i>=0;i--)
        {
            if(p-1<=i)
            {
                a[i+1] = a[i];
            }
        }

         a[p-1] = s;

         printf("\nAfter inserting the new list of array are:");

         for(i=0;i<=n;i++)
         {
             printf("%d ",a[i]);
         }

         printf("\n");
    }

    return 0;
}

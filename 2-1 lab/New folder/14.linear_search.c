#include <stdio.h>

int main()
{
    int a[100],n,p,i,s;

    printf("How many element:");
    scanf("%d",&n);

    printf("Enter the elements from your keyboard:");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The list of array are:");

        for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nWhat element do you want to search:");
    scanf("%d",&p);

    for(i=0,s=0;i<n;i++)
    {
        if(a[i]==p)
        {
            s = 1;
            break;
        }
    }

    if(s==1)
    {
        printf("Data is found\n");
    }
    else{
        printf("Data is not found\n");
    }

    return 0;
}

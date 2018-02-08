#include <stdio.h>

int main()
{
    int a[1000],n,i,p;

    printf("How many elements in the list of array:");
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

    printf("\n\nwhat number do you want to search:");
    scanf("%d",&p);

    for(i=0;i<n;i++)
    {
        if(a[i]==p)
            break;
    }

    if(a[i]==p)
    {
        printf("\nFound\nThe position of the number is:%d\n",i);
    }
    else{
        printf("\nNot found\n");
    }

    return 0;

}

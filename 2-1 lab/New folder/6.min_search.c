#include <stdio.h>

int main()
{
    int a[1000],n,i,min;

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

    min = a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }

    printf("\nThe largest value of the array is:%d\n",min);

    return 0;
}



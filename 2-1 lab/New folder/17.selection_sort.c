#include <stdio.h>

int main()
{
    int a[1000],n,i,j,min,pos;

    printf("How many data:");
    scanf("%d",&n);
    printf("Enter the data:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nThe list of data are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1,min=a[i],pos=i;j<n;j++)
        {
            if(a[j]<min)
            {
                min = a[j];
                pos = j;
            }
        }
            a[pos] = a[i];
            a[i] = min;
    }

    printf("\nAfter selection sorting the list of array are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}

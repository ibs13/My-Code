#include <stdio.h>

int main()
{
    int a[10000],n,low,high,mid,temp,i,j,p;

    printf("How many elements:");
    scanf("%d",&n);

    printf("Enter the elements:");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The list of elements are:");

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
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    printf("\nAfter sorting the array are:");
        for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nWhat elements do you want to search:");
    scanf("%d",&p);

    low = 0;
    high = n-1;
    mid = high + (high-low)/2;

    while(low<=high && p!=a[mid])
    {
        if(p<a[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = high + (high-low)/2;
    }

    if(p==a[mid])
    {
        printf("\nData is found.\n");
    }
    else{
        printf("\nData is not found.\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int a[1000],n,i,j,key_val;

    printf("How many elements in the list:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++)
    {
        key_val = a[i];

        for(j=i-1;j>=0 && key_val<a[j];j--)
        {
            a[j+1] = a[j];
        }

        a[j+1] = key_val;
    }

    printf("After sorting the list is:");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    return 0;
}

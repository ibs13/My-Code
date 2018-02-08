#include <stdio.h>

int main()
{
    int a[1000],i,j,n,temp;

    printf("How many element in the list:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]<a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    printf("After sorting the list is:");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    return 0;
}



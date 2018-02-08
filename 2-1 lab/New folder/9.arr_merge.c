#include <stdio.h>

int main()
{
    int a[1000],b[1000],c[2000],n,m,i,j;

    printf("How many elements in the list first and second array:");
    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("\nThe list of first array are:");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nThe list of second array are:");

    for(i=0;i<m;i++)
    {
        printf("%d ",b[i]);
    }


    for(i=0,j=0;i<n;i++,j++)
    {
        c[j] = a[i];
    }

    for(i=0,j=n;j<m+n;i++,j++)
    {
        c[j] = b[i];
    }

    printf("\n\nAfter merging the list of new array are:");

    for(i=0;i<n+m;i++)
    {
        printf("%d ",c[i]);
    }

    printf("\n");

    return 0;
}






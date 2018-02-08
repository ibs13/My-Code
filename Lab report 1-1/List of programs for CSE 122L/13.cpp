#include<stdio.h>
int main()
{
    int a[1000],p,n,i,f;

    printf("How many number in the list:");
    scanf("%d",&n);

    printf("\nTake the number from the keyboard:");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nThe list of numbers are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n\nThe position to be inserted:");
    scanf("%d",&p);

    if(p<0 || p>n)
    {
        printf("\n\nInsert is impossible\n\n");
    }
    else{
    for(i=n;i>=p-1;i--)
    {
        a[i+1]=a[i];
    }

    printf("\n\nThe element to be inserted:");
    scanf("%d",&f);

    a[p-1]=f;

    printf("After inserting the elements the new list are:");

    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int a[1000],n,i,sum=0;

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



    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum = sum + a[i];
        }
    }

    printf("\nThe summation of the even numbers are:%d\n",sum);

    return 0;
}





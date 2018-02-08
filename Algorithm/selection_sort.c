#include <stdio.h>

int main()
{
    int a[1000],n,i,j,temp,sml_ind;

    printf("How many number in the list:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        sml_ind = i;

        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[sml_ind]){
                sml_ind = j;
            }
        }

        temp = a[i];
        a[i] = a[sml_ind];
        a[sml_ind] = temp;
    }

    printf("\nAfter sorting the new list is:");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    return 0;
}

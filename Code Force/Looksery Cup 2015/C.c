#include <stdio.h>

int main()
{
    long int a[200001],n,k,i,j,s=0;

    scanf("%I32d %I32d",&n,&k);

    for(i=0;i<n;i++)
    {
        scanf("%I32d",&a[i]);
    }

    for(j=k-1;j>=0;j--)
    {
        s = s + a[j];
    }

    if(s%2==1){
        printf("Stannis\n");
    }

    else{
        printf("Daenerys\n");
    }

    return 0;
}

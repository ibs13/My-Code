#include <stdio.h>

int main()
{
    long long int n,a[20],i=0,j,k,p;

    scanf("%I64d",&n);

    while(n!=0)
    {
        a[i] = n % 10;

        n = n / 10;

        i++;
    }

    p = a[0];

    for(j=i-1;j>=0;j--)
    {
        k = 0;
        if(a[i-1]==9 && j==i-1){
            a[0] = 9;
            k = 1;
            j--;
        }

        if(a[j]>4 && (k==0 || j!=i-1)){
            a[j] = 9 - a[j];
        }
    }

    /*if(a[i-1]==9 && i!=1){
        if(p>4){
            a[0] = 9 - p;
        }
        else{
            a[0] = p;
        }
    }
    */
    for(j=i-1;j>=0;j--)
    {
        printf("%I64d",a[j]);
    }

    printf("\n");

    return 0;
}

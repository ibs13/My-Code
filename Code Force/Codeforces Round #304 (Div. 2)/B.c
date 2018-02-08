#include <stdio.h>

int main()
{
    int n,a[100000],i,j,s=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(i==j){
                continue;
            }
            else{
                if(a[i]==a[j]){
                a[i] = a[i] + 1;
                s++;
                i--;
                break;
            }
            else{
                continue;
            }
            }
        }
    }

    printf("%d\n",s);

    return 0;
}

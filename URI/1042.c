#include <stdio.h>

int main()
{
    int a[3],temp,i,j,m,n,o;

    scanf("%d %d %d",&n,&m,&o);

    a[0] = n;
    a[1] = m;
    a[2] = o;

    for(i=0;i<3;i++)
    {
        for(j=2;j>i;j--)
        {
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a[0],a[1],a[2],n,m,o);

    return 0;
}

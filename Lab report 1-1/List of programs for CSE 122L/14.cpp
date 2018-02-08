#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000],b[1000];
    int n,i,m;

    printf("Enter two string :");
    scanf("%s %s",&a,&b);

    n = strlen(a);
    m = strlen(b);

    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i] || m!=n)
        {
            break;
        }
    }

    if(a[i]!=b[i] || m!=n)
        {
            printf("The strings are not equal.\n");
        }
    else{
            printf("The strings are equal.\n");
        }

    return 0;
}







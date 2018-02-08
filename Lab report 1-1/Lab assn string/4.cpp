#include <stdio.h>
#include <string.h>

int main()
{
    char x[100],y[100],z[100];
    int a,b,c;

    printf("Enter the three input:");
    scanf("%s %s %s",&x,&y,&z);

    a = strlen(x);
    b = strlen(y);
    c = strlen(z);

     if(a>b && a>c && b>c)
    {
        printf("%s %s %s\n",x,y,z);
    }
    else if(b>a && b>c && a>c)
    {
        printf("%s %s %s\n",y,x,z);
    }
    else if(a>c && a>b && c>b)
    {
        printf("%s %s %s\n",x,z,y);
    }
    else if(c>b && c>a && a>b)
    {
         printf("%s %s %s\n",z,x,y);
    }
    else if(c>a && c>b && b>a)
    {
         printf("%s %s %s\n",z,y,x);
    }
    else if(b>a && b>c && c>a)
    {
         printf("%s %s %s\n",y,z,x);
    }

    return 0;
}

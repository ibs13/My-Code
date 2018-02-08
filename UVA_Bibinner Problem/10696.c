#include<stdio.h>

int main()
{
    int n,p;
    while(scanf("%d",&n)==1 && n!=0)
{

        if(n>100)
            p = n-10;
        else
            p = n;

        printf("f91(%d) = %d\n",n,p);

}
return 0;
}

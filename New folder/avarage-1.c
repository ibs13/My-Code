#include<stdio.h>
int main()
{
    int i,s,t,n;
    scanf("%d",&t);
    while(t--)
    {
        for(i = 1, s=0;i <= 5;i++)
        {
            scanf("%d",&n);
            s = s + n;

        }
         s = s/5;

        printf("%d\n",s);
    }
    return 0;
}

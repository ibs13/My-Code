#include<stdio.h>
int main()
{
    int i,j,ara[ ]={10,20,30,40,50,60,70,80,90,100},ary[10];
    for(i=0,j=9;i<10;i++,j--)
    {
        ary[j]=ara[i];
    }
    for(i=0;i<10;i++)
    {
        ara[i]=ary[i];
    }

    for(i=0;i<10;i++)
    {
        printf("%d\n",ara[i]);
    }

    return 0;
}

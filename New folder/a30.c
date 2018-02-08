#include<stdio.h>
int main()
{
    int i,ara[10]={10,20,30,40,50,60,70,80,90,100};

    for(i=10;i>0;i--)
    {
        printf("%dth element is:%d\n",i,ara[i-1]);
    }

    return 0;
}

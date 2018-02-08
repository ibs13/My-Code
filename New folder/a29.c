#include<stdio.h>
int main()
{
    int i, ara[10]={10,20,30,40,50,60,70,80,90,100};

    for(i=0;i<10;i++)
    {
        printf("%dth element is:%d\n",i+1,ara[i]);
    }

    return 0;
}

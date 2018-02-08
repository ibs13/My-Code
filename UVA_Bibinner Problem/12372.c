#include <stdio.h>

int main()
{
    int l,w,h,ca=1,t;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d",&l,&w,&h);

        if(l<=20 && w<=20 && h<=20){
            printf("Case %d: good\n",ca++);
        }
        else{
            printf("Case %d: bad\n",ca++);
        }
    }
    return 0;
}

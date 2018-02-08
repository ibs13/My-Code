#include <stdio.h>
#include <string.h>

int main()
{
    int a[15],t,ca=1,i,max;
    char a1[25],a2[25],a3[25],a4[25],a5[25],a6[25],a7[25],a8[25],a9[25],a10[25];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d",a1,&a[1],a2,&a[2],a3,&a[3],a4,&a[4],a5,&a[5],a6,&a[6],a7,&a[7],a8,&a[8],a9,&a[9],a10,&a[10]);

        max = a[1];
        for(i=2;i<=10;i++){
            if(max<a[i]){
                max = a[i];
            }
        }

        printf("Case #%d:\n",ca++);

        if(max==a[1]){
            printf("%s\n",a1);
        }
        if(max==a[2]){
            printf("%s\n",a2);
        }
        if(max==a[3]){
            printf("%s\n",a3);
        }
        if(max==a[4]){
            printf("%s\n",a4);
        }
        if(max==a[5]){
            printf("%s\n",a5);
        }
        if(max==a[6]){
            printf("%s\n",a6);
        }
        if(max==a[7]){
            printf("%s\n",a7);
        }
        if(max==a[8]){
            printf("%s\n",a8);
        }
        if(max==a[9]){
            printf("%s\n",a9);
        }
        if(max==a[10]){
            printf("%s\n",a10);
        }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int a[10],i,p,min,b1,b2,b3,g1,g2,g3,c1,c2,c3;

    while(scanf("%d %d %d %d %d %d %d %d %d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9)
    {
        a[0]=b2+b3+c1+c3+g1+g2;
        a[1]=b2+b3+c1+c2+g1+g3;
        a[2]=b1+b3+c2+c3+g1+g2;
        a[3]=b2+b1+c2+c3+g1+g3;
        a[4]=b1+b3+c1+c2+g3+g2;
        a[5]=b2+b1+c1+c3+g3+g2;

        min = a[0];
        p = 0;
        for(i=0;i<6;i++)
        {
            if(min>a[i]){
                min = a[i];
                p = i;
            }
        }
        if(p==0){
            printf("BCG");
        }
        else if(p==1){
            printf("BGC");
        }
        else if(p==2){
            printf("CBG");
        }
        else if(p==3){
            printf("CGB");
        }
        else if(p==4){
            printf("GBC");
        }
        else if(p==5){
            printf("GCB");
        }

        printf(" %d\n",min);
    }

    return 0;
}

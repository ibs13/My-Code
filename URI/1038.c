#include <stdio.h>

int main()
{
    int n,m;
    float p;

    scanf("%d %d",&n,&m);

    if(n==1){
        p = (int)m*4.00;
    }
    else if(n==2){
        p = (int)m*4.50;
    }
    else if(n==3){
        p = (int)m*5.00;
    }
    else if(n==4){
        p = (int)m*2.00;
    }
    else{
        p = (int)m*1.50;
    }

    printf("Total: R$ %.2f\n",p);

    return 0;
}

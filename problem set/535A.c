#include <stdio.h>

int s,p,q,k;

int prom()
{
    if(p==1){
        printf("-one\n");
    }
    else if(p==2){
        printf("-two\n");
    }
    else if(p==3){
        printf("-three\n");
    }
    else if(p==4){
        printf("-four\n");
    }
    else if(p==5){
        printf("-five\n");
    }
    else if(p==6){
        printf("-six\n");
    }
    else if(p==7){
        printf("-seven\n");
    }
    else if(p==8){
        printf("-eight\n");
    }
    else if(p==9){
        printf("-nine\n");
    }

    return 0;
}

int main()
{
    scanf("%d",&s);

    if(s<10){
        p = s;

    if(p==0){
        printf("zero\n");
    }
    else if(p==1){
        printf("one\n");
    }
    else if(p==2){
        printf("two\n");
    }
    else if(p==3){
        printf("three\n");
    }
    else if(p==4){
        printf("four\n");
    }
    else if(p==5){
        printf("five\n");
    }
    else if(p==6){
        printf("six\n");
    }
    else if(p==7){
        printf("seven\n");
    }
    else if(p==8){
        printf("eight\n");
    }
    else if(p==9){
        printf("nine\n");
    }
    }
    else{
        p = s % 10;
        q = s / 10;

        if(p==0){
            if(q==1)
            printf("ten\n");
            else if(q==2)
            printf("twenty\n");
            else if(q==3)
            printf("thirty\n");
            else if(q==4)
            printf("forty\n");
            else if(q==5)
            printf("fifty\n");
            else if(q==6)
            printf("sixty\n");
            else if(q==7)
            printf("seventy\n");
            else if(q==8)
            printf("eighty\n");
            else if(q==9)
            printf("ninety\n");
        }
        else if(p!=0 && q==1){
            if(p==1)
                printf("eleven\n");
            else if(p==2)
                printf("twelve\n");
            else if(p==3)
                printf("thirteen\n");
            else if(p==4)
                printf("fourteen\n");
            else if(p==5)
                printf("fifteen\n");
            else if(p==6)
                printf("sixteen\n");
            else if(p==7)
                printf("seventeen\n");
            else if(p==8)
                printf("eighteen\n");
            else if(p==9)
                printf("nineteen\n");
        }
        else{
            if(q==2)
            printf("twenty");
            else if(q==3)
            printf("thirty");
            else if(q==4)
            printf("forty");
            else if(q==5)
            printf("fifty");
            else if(q==6)
            printf("sixty");
            else if(q==7)
            printf("seventy");
            else if(q==8)
            printf("eighty");
            else if(q==9)
            printf("ninety");

            return prom();
        }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    long long int n,s;

    scanf("%I64d",&n);

    if(n<10){
        s = n;
    }
    else if(n<100){
        s = ((n-9)*2)+9;
    }
    else if(n<1000){
        s = ((n-99)*3)+189;
    }
    else if(n<10000){
        s = ((n-999)*4)+(900*3)+189;
    }
    else if(n<100000){
        s = ((n-9999)*5)+(9000*4)+(900*3)+189;
    }
    else if(n<1000000){
        s = ((n-99999)*6)+(90000*5)+(9000*4)+(900*3)+189;
    }
    else if(n<10000000){
        s = ((n-999999)*7)+(900000*6)+(90000*5)+(9000*4)+(900*3)+189;
    }
    else if(n<100000000){
        s = ((n-9999999)*8)+(9000000*7)+(900000*6)+(90000*5)+(9000*4)+(900*3)+189;
    }
    else if(n<1000000000){
        s = ((n-99999999)*9)+(90000000*8)+(9000000*7)+(900000*6)+(90000*5)+(9000*4)+(900*3)+189;
    }
    else{
        s = (((n-1)-99999999)*9)+(90000000*8)+(9000000*7)+(900000*6)+(90000*5)+(9000*4)+(900*3)+189+10;
    }

    printf("%I64d\n",s);

    return 0;
}

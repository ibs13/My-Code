#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int n,m,o,a,b,c,d,e,f,p,sum1,sum2,sum3,sum4,i,j=0,ly,by,hy;
    char s[100000];

    while(scanf("%s",s)==1){

        if(j!=0){
            printf("\n\n");
        }
        j++;

        n = strlen(s);

        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
        f=0;
        p=0,
        sum1=0;
        sum2=0;
        sum3=0;
        sum4=0;


        for(i=0;i<n;i++){
            sum1 = sum1 + (int)(s[i]-48);
            if(i%2==0){
                sum2 = sum2 + (int)(s[i]-48);
            }
            else{
                sum2 = sum2 - (int)(s[i]-48);
            }
        }

        if(sum1%3==0){
            a = 1;
        }
        if(sum2%11==0){
            d = 1;
        }

        if(s[n-1]=='0' || s[n-1]=='5'){
            c = 1;
        }

        m = (int)(s[n-2]-48);
        o = (int)(s[n-1]-48);
        sum3 = (m*10)+o;

        if(sum3%4==0){
            b = 1;
        }

        if(s[n-1]=='0' && s[n-2]=='0'){
            e = 1;

            sum4 = (((int)(s[n-4]-48))*10) + (int)(s[n-3]-48);

            if(sum4%4==0){
                f = 1;
            }
        }

        if(e==1 && f==1){
            printf("This is leap year.");
            p = 1;
            ly = 1;
        }
        else{
            if(b==1 &&(s[n-1]!='0' && s[i-2]!='0')){
                printf("This is leap year.");
                p = 1;
                ly=1;
            }
            else
                ly=0;
        }

        if(a==1 && c==1){
                if(ly)
                printf("\n");
            printf("This is huluculu festival year.");
            p = 1;
            hy = 1;
        }
        else
            hy = 0;

        if(c==1 && d==1){
            if(ly || hy)
                printf("\n");
            printf("This is bulukulu festival year.");
            p = 1;
        }

        if(p==0){
            printf("This is an ordinary year.");
        }
    }

    return 0;
}

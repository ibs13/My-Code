#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i=0,j,k;
    char s[100000],ch;

    do{
        ch = getchar();
        s[i] =  ch;
        i++;
    }
    while(ch!=EOF);
        i--;
    s[i] = '/0';

    n = strlen(s);

    for(i=0,j=0;i<n;i++){
        if(s[i]=='"'){
            j++;
            if(j%2==1){
                for(k=n;k>i;k--){
                    s[k+1] = s[k];
                }
                n++;
                s[i]='`';
                s[i+1]='`';
            }
            else{
                for(k=n;k>i;k--){
                    s[k+1] = s[k];
                }
                n++;
                s[i]=39;
                s[i+1]=39;
            }
        }
    }

    for(i=0;i<n-1;i++){
        putchar(s[i]);
    }

    return 0;
}

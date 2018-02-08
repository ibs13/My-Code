#include <stdio.h>
#include <string.h>

int main()
{
    int n,i=0,j,g,m;
    char s[10001],p[1000],t[1000],ch;

    do{
        ch = getchar();
        s[i++] = ch;
    }
    while(s[i]!='D' && s[i-1]!='-' && s[i-2]!='N' && s[i-3]!='-' && s[i-4]!='E');

    s[i-5] = '/0';

    n = strlen(s);

    g = 0;

    for(i=0;i<n;i++){
            j = 0;
    while(s[i]!=' '){
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) || s[i]=='-'){
            t[j] = s[i];
            j++;
        }
        i++;
    }
        t[j] = '\0';
        m = j;

        if(g>m){
            g = m;
            strcpy(p,t);
        }
    }

    for(i=0;i<g;i++){
        if(p[i]>=65 && p[i]<=90){
            p[i] = p[i]-32;
        }

        scanf("%c",p[i]);
    }

    printf("\n");

    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int n,i,j,p,k;
    char s[1000],t[1000],r[1000];

    while(gets(s)){
            p = 0;
        if(strcmp(s,"DONE")==0){
            break;
        }
        else{
            n = strlen(s);

        for(i=0,j=0;i<n;i++){
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
                    if(s[i]>=65 && s[i]<=90){
                        t[j] = s[i]+32;
                        r[j] = s[i]+32;
                    }
                    else{
                        t[j] = s[i];
                        r[j] = s[i];
                    }
                j++;
            }
        }

        for(i=0,k=j-1;i<j;i++,k--){
            if(t[i]!=r[k]){
                p = 1;
                break;
            }
        }

        if(p==0){
            printf("You won't be eaten!\n");
        }
        else{
            printf("Uh oh..\n");
        }
        }
    }

    return 0;
}


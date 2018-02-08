#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int n,t,i,j=0,p,k;
    char s[1050];

    scanf("%d",&t);

    getchar();

    while(t--){

        scanf("%s",s);

        n = strlen(s);

        if(n==1 || n==2){
            j+=n;
        }
        else{
            for(i=1;i<n-1;i++){
                if(s[i-1]==s[i+1] && (s[i]!=s[i+1] || s[i]!=s[i-1])){
                    p = 1;
                    break;
                }
                else{
                    p = 0;
                }
            }

            for(i=0;i<n-3;i++){
                for(k=i+2;k<n-1;k++){
                    if(s[i]==s[k] && s[i+1]==s[k+1]){
                        p=1;
                        break;
                    }
                }
            }

            if(p==0){
                j+=n;
            }
        }
    }

    printf("%d\n",j);

    return 0;
}

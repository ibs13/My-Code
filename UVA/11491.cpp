#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
     char s[1000000],st[1000000];
int main()
{
    int n,d,i,m,j,k;

    while(scanf("%d %d",&n,&d)==2){
        if(n==0 && d==0){
            break;
        }
        else{
            getchar();

            scanf("%s",s);

            strcpy(st,s);

            sort(st,st+n);

            k = 0;

            for(i=0;d>k;i++){
                for(j=0;;j++){
                    if(s[j]==st[i]){
                        s[j] = 'f';
                        k++;
                        break;
                    }
                }
            }

            for(i=0;i<n;i++){
                if(s[i]!='f'){
                    printf("%c",s[i]);
                }
            }

            printf("\n");
        }
    }

    return 0;
}

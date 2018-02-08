#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int n,m,i,j,k,ca=1;
    char s[110][110];

    while(scanf("%d %d",&n,&m)==2){
        if(n==0 && m==0){
            break;
        }

        else{
            for(i=0;i<=m+1;i++){
                s[0][i] = '.';
                s[n+1][i] = '.';
            }
            for(i=0;i<=n+1;i++){
                s[i][0] = '.';
                s[i][m+1] = '.';
            }

            getchar();

            for(i=1;i<=n;i++){
                for(j=1;j<=m;j++){
                    scanf("%c",&s[i][j]);
                }
                getchar();
            }

           for(i=1;i<=n;i++){
                for(j=1;j<=m;j++){
                    k = 0;

                    if(s[i][j]=='.'){
                        if(s[i-1][j]=='*')
                            k++;
                        if(s[i+1][j]=='*')
                            k++;
                        if(s[i][j-1]=='*')
                            k++;
                        if(s[i][j+1]=='*')
                            k++;
                        if(s[i+1][j+1]=='*')
                            k++;
                        if(s[i-1][j-1]=='*')
                            k++;
                        if(s[i+1][j-1]=='*')
                            k++;
                        if(s[i-1][j+1]=='*')
                            k++;

                        s[i][j] = k + '0';
                    }
                }
            }
            if(ca!=1){
                printf("\n");
            }

            printf("Field #%d:\n",ca++);
            for(i=1;i<=n;i++){
                for(j=1;j<=m;j++){
                    printf("%c",s[i][j]);
                }
                printf("\n");
            }
        }

    }

    return 0;
}

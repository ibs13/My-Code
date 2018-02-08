#include <iostream>
#include <cstdio>
#include <cstring>

    int n,m,i,j,ca=1;
    char s[1000000];

using namespace std;

int main()
{
    while(scanf("%s",s)==1){
        scanf("%d",&n);

        m = strlen(s);
        printf("Case %d:\n",ca++);
        while(n--){
            scanf("%d %d",&i,&j);

            if(s[i]==s[j] && m>i && m>j){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }
    return 0;
}

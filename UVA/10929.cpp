#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int n,sum,i;
    char s[1010];

    while(scanf("%s",s)==1){
            n = strlen(s);
        if(s[0]=='0' && n<2){
            break ;
        }
        else{
            n = strlen(s);

            sum = 0;

            for(i=0;i<n;i++){
                if(i%2==0){
                    sum = sum + (int)(s[i]-48);
                }
                else{
                    sum = sum - (int)(s[i]-48);
                }
            }

            if(sum%11==0){
                printf("%s is a multiple of 11.\n",s);
            }
            else{
                printf("%s is not a multiple of 11.\n",s);
            }
        }
    }

    return 0;
}

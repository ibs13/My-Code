#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int b[120],i,j,n,m,p,k=0,c[110];
    char s[200],a[100];

    for(i=0;i<110;i++){
        b[i] = 0;
    }

    while(scanf("%s",s)==1){
        if(s[0]=='0'){
            break;
        }
        else{
            n = strlen(s);

            c[k] = n;

            reverse(s,s+n);

            for(i=0;i<n;i++){

                m = (int)(s[i]-48);

                p = m + b[i];

                if(p>9){
                    b[i] = p % 10;
                    b[i+1] = b[i+1] + (p / 10);
                }
                else{
                    b[i] = p;
                }
                if(i==n-1){
                    if(p>9){
                        c[k] = n+1;
                    }
                }

            }
            k++;
        }
    }
    sort(c,c+k);
    reverse(b,b+c[k-1]);

    for(i=0;i<c[k-1];i++){
        printf("%d",b[i]);
    }

    printf("\n");

    return 0;
}

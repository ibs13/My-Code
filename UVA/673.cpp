#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
    int t,n,i,j,k,p;
    char s[150],st[150];
    stack <char> a;

    scanf("%d",&t);

    getchar();

    while(t--){
            p = 1;
            j = 0;
            k = 0;
        gets(s);

        n = strlen(s);

        for(i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='['){
                    a.push(s[i]);
                    st[j] = s[i];
                    j++;
               }
            else if(s[i]==')'){
                if(j>0 && st[j-1]=='('){
                        a.pop();
                        j--;
                        p = 1;
                   }
                else{
                    p = 0;
                    break;
                }
            }
            else if(s[i]==']'){
                if(j>0 && st[j-1]=='[' && n!=0){
                    a.pop();
                    j--;
                    p = 1;
                }
                else{
                    p = 0;
                    break;
                }
            }
        }
        if(p==1 && j==0){
                printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}

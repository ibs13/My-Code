#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s,a;
    int n,m,i,k,p,t=0;


    cin >> n;
    cin >> s;

    m = (2*n)-2;

    n = 0;

    for(i=0;i<m;i+=2){
            if(n==0){
                a[0] = s[i];
                n = 1;
            }
        for(k=0;k<n;k++){
            if(s[i]==a[k]){
                p = 1;
                break;
            }
            else{
                p = 0;
            }
        }

        if(p==0){
            a[k] = s[i];
            n++;
        }


        for(k=0;k<n;k++){
            if(s[i+1]==a[k]-32){
                p = 1;
                n--;
                break;
            }
            else{
                p = 0;
            }
        }

        if(p==0)
            t++;
    }

    cout << t << endl;

    return 0;
}

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    long long a[3],i,t,ca=1,b,c;

    scanf("%lld",&t);

    while(t--){
        scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);

        sort(a,a+3);

        b = a[2] * a[2];

        c = (a[0] * a[0]) + (a[1] * a[1]);

        if(b==c){
            printf("Case %lld: yes\n",ca++);
        }
        else{
            printf("Case %lld: no\n",ca++);
        }
    }

    return 0;
}

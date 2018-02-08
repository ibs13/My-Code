#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a,b,n,m;

    scanf("%d %d",&a,&b);

    if(a==b){
        n = a;
        m = 0;
    }

    else if(a>b){
        n = b;
        m= (a-b)/2;
    }

    else if(a<b){
        n = a;
        m = (b - a)/2;
    }

    printf("%d %d\n",n,m);

    return 0;
}

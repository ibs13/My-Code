#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long int n,x,i,j=0;

    scanf("%I64d %I64d",&n,&x);

    for(i=1;i<=n;i++){
        if(i*n>=x && x%i==0)
            j++;
    }

    printf("%I64d\n",j);
    return 0;
}

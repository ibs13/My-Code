#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n,m,i,g;

    while(scanf("%d",&n)==1)
    {
        m = 1;
        i = 1;
        while(m%n!=0){
            i++;
            m = ((m*10)+1)%n;
        }

        printf("%d\n",i);
    }

    return 0;
}

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    char a[150],ch;
    int b[150],n,i,j=0,s,k=0;

    scanf("%d",&n);

    getchar();

    for(i=0;i<n;i++)
    {
        scanf("%c",&ch);

        a[i] = ch;

        scanf("%d",&b[i]);

        getchar();
    }

    for(i=0;i<n;i++)
    {
        if(a[i]=='+'){
            j++;
        }
        else{
            k++;
        }
    }

    if(j>k)
        s = j;
    else
        s = k;

    printf("%d\n",s);

    return 0;
}

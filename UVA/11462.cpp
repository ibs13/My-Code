#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector <int> a;
    int n,i,m;

    while(scanf("%d",&n)==1){
        a.clear();
        if(n==0){
            break;
        }
        else{
        for(i=0;i<n;i++){
        scanf("%d",&m);
        a.push_back(m);
    }

    sort(a.begin(),a.end());

    for(i=0;i<n;i++){
        printf("%d",a[i]);
        if(i!=n-1){
            printf(" ");
        }
    }

    printf("\n");
    }

        }

    return 0;
}

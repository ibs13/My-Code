#include <iostream>
#include <cstdio>
#include <cmath>
#define pi (2*acos(0.0))

using namespace std;

int main()
{
    double t,r,l,a1,a2,ans,ca=1;

    scanf("%lf",&t);

    while(t--){

    scanf("%lf",&r);

    l = 2 * r;

    a1 = pi * (r*r);

    a2 = l*l;

    ans = a2 - a1;

    printf("Case %.0lf: %.2lf\n",ca++,ans);

    }

    return 0;
}

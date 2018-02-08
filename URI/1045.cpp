#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    double a[5],m,n,p;

    scanf("%lf %lf %lf",&a[0],&a[1],&a[2]);

    sort(a,a+3);
    reverse(a,a+3);

    m = a[1] + a[2];
    n = (a[1]*a[1])+(a[2]*a[2]);
    p = (a[0]*a[0]);

    if(a[0]>=m){
        printf("NAO FORMA TRIANGULO\n");
    }

      else if(p==n){
            printf("TRIANGULO RETANGULO\n");
        }
      else if(p>n){
            printf("TRIANGULO OBTUSANGULO\n");
        }
       else if(p<n){
            printf("TRIANGULO ACUTANGULO\n");
        }

    if(a[0]==a[1] && a[2]==a[1]){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a[0]==a[1]) || (a[0]==a[2]) || (a[1]==a[2])){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;

}

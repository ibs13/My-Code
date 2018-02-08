#include <stdio.h>

int main()
{
    float a,b,c,p,s,g,m,n,o;

    scanf("%f %f %f",&a,&b,&c);

    m = a;
    n = b;
    o = c;

    if(a>b){
        g = b;
        b = a;
        a = g;
    }
    else{
        a = a;
        b = b;
    }

    if(b>c){
        g = c;
        c = b;
        b = g;
    }
    else{
        b = b;
        c = c;
    }

    if(a+b>c){
        printf("Perimetro = %.1f\n",a+b+c);
    }
    else{
        printf("Area = %.1f\n",((m+n)/2)*o);
    }

    return 0;
}

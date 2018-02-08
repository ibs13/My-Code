#include <stdio.h>

int main()
{
    long int a,b,c,d,e,f,n;

    scanf("%I32d",&n);

    scanf("%I32d %I32d",&a,&b);
    scanf("%I32d %I32d",&c,&d);
    scanf("%I32d %I32d",&e,&f);

    for(a=a;a<b;a++)
    {
        if((a+c+e)==n){
            break;
        }
    }

    if(a+c+e<n){
            if(c!=d)
            c++;
    for(c=c;c<d;c++)
    {
        if((a+c+e)==n){
            break;
        }
    }
    }

    if(a+c+e<n){
            if(e!=f)
            e++;
        for(e=e;e<f;e++)
    {
        if((a+c+e)==n){
            break;
        }
    }
    }

    printf("%I32d %I32d %I32d\n",a,c,e);

    return 0;
}

#include <stdio.h>

int main()
{
    int k,i,p,s=0,m,n;
    char a[1010],b[1010];

    scanf("%d",&k);

    getchar();

    gets(a);
    gets(b);

    for(i=0;i<k;i++)
    {
        m = (int)a[i] - 48;
        n = (int)b[i] - 48;

        if(m==0){
        m = 10;
        }

        if(n==0){
            n = 10;
        }

        if(m>n)
        {
            p = m - n;
        }
        else{
            p = n - m;
        }

        if(p>5){
            p = 10 - p;
        }
        else{
            p = p;
        }

        s = s + p;
    }

    printf("%d\n",s);

    return 0;
}

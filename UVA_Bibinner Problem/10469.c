#include <stdio.h>

int main()
{
    int a[50],b[50],c[50],i,j,k,n,m,s,p,t;

    while(scanf("%d %d",&m,&n)==2)
    {
        i=0;
        j=0;
        s=0;
        t=1;

        while(m!=0){
            a[i] = m % 2;
            m = m / 2;
            i++;
        }
        while(n!=0){
            b[j] = n % 2;
            n = n / 2;
            j++;
        }
        if(i<j){
            p = j;
            for(k=i;k<p;k++){
                a[k]=0;
            }
        }
        else{
            p = i;
            for(k=j;k<p;k++){
                b[k]=0;
            }
        }

        for(j=0;j<p;j++){
            if(a[j]==b[j]){
                c[j] = 0;
            }

            else{
                c[j] = 1;
            }
        }

        for(j=0;j<p;j++){
            if(j==0){
                t = 1;
            }
            else{
                t = t * 2;
            }
             s = (s + (t*c[j]));
        }

        printf("%d\n",s);
    }

    return 0;
}

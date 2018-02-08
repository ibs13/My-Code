#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,m,i,j,p,q,ca=1,t,t1,t2;
    char a[1500],b[1500];

    while(scanf("%s %s",a,b)==2){
        p = 0;

        n = strlen(a);
        m = strlen(b);

        for(i=0;i<n;i++){
            if(a[i]=='.'){
                t1 = i;
                break;
            }
        }

        for(i=0;i<n;i++){
            if(b[i]=='.'){
                t2 = i;
                break;
            }
        }

        if(t1>t2){
            t = t1 - t2;

            for(i=0;i<t;i++)
                b[i] = '0';

            for(i=0,j=t;i<n;i++,j++){
                b[j] = b[i];
            }
            m = m + t;
        }

        else if(t1<t2){
            t = t2 - t1;

            for(i=0;i<t;i++)
                a[i] = '0';

            for(i=0,j=t;i<n;i++,j++){
                a[j] = a[i];
            }
            n = n + t;
        }

        if(n>m){
            q = n;

            for(i=m;i<n;i++){
                b[i] = '0';
            }
        }

        else if(n<m){
            q = m;

            for(i=n;i<m;i++){
                a[i] = '0';
            }
        }

        else{
            q = n;
        }

        for(i=0;i<q;i++){
                if(a[i])
            if(a[i]>b[i]){
                p = 1;
                break;
            }
            else if(a[i]<b[i]){
                p = 2;
                break;
            }
        }

        if(p==2){
            printf("Case %d: Smaller\n",ca++);
        }
        else if(p==1){
            printf("Case %d: Bigger\n",ca++);
        }
        else{
            printf("Case %d: Same\n",ca++);
        }
    }

    return 0;
}

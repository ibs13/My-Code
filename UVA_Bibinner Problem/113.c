#include <stdio.h>
#include <string.h>

int main()
{
    double p;
    int b[101],i,j,k,t,n,m,sum;
    char ch,a[101];

    scanf("%d",&t);

    while(t--){
        scanf("%d",&k);

        for(i=0;i<k;i++)
        {
            getchar();
            scanf("%c %d",&a[i],&b[i]);
        }

        scanf("%d",&m);
        sum = 0;
        j = 0;

        do{
            ch = getchar();

            for(i=0;i<k;i++){
                if(ch==a[i]){
                    sum = sum +b[i];
                    break;
                }
            }

            if(ch=='\n'){
                j++;
            }
        }
        while(j<=m);

        p = (double)sum / 100;

        printf("%.2lf$\n",p);
    }

    return 0;
}

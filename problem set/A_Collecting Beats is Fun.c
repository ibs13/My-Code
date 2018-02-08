#include <stdio.h>

int main()
{
    int b[10],i,j,k;
    char a[10],s1[5],s2[5],s3[5],s4[5];

    for(i=1;i<10;i++)
    {
        a[i] = 48 + i;
        b[i] = 0;
    }

    scanf("%d",&k);
    scanf("%s %s %s %s",s1,s2,s3,s4);

    for(j=0;j<4;j++)
    {
        for(i=1;i<10;i++)
        {
            if(s1[j]==a[i])
                b[i]++;
            if(s2[j]==a[i])
                b[i]++;
            if(s3[j]==a[i])
                b[i]++;
            if(s4[j]==a[i])
                b[i]++;
        }
    }

    k = k * 2;

    for(i=1;i<10;i++)
    {
        if(b[i]>k){
            printf("NO\n");
            break;
        }
    }

    if(b[i-1]<=k && i==10)
        printf("YES\n");

    return 0;
}

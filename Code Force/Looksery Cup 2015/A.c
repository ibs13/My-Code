#include <stdio.h>

int main()
{
    int i,j,n,m,s=0;
    char a[51][51];

    scanf("%d %d",&n,&m);

    getchar();

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%c",&a[i][j]);
        }
        if(i<n-1)
        scanf("\n");
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if((a[i][j]=='f' || a[i+1][j]=='f' || a[i][j+1]=='f' || a[i+1][j+1]=='f') && (a[i][j]=='e' || a[i+1][j]=='e' || a[i][j+1]=='e' || a[i+1][j+1]=='e') && (a[i][j]=='a' || a[i+1][j]=='a' || a[i][j+1]=='a' || a[i+1][j+1]=='a') && (a[i][j]=='c' || a[i+1][j]=='c' || a[i][j+1]=='c' || a[i+1][j+1]=='c')){
                s++;
            }
        }
    }

    printf("%d\n",s);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,n,p=0,k=0;
    char a[100009];

    gets(a);

    n = strlen(a);

    for(i=0;i<n;i++)
    {
        if((a[i]=='A' && a[i+1]=='B') || (a[i]=='B' && a[i+1]=='A')){

                if(a[i+2]==a[i] && n>4){
                    k = 1;
                }

                   break;
                }
            }

        if(k==1){
        for(j=i+3;j<n;j++)
        {
            if((a[i+1]==a[j]) && (a[i]==a[j+1]) || (a[i]==a[j]) && (a[i+1]==a[j+1])){

                    p = 1;
                    break;
                    }
                }

        }

        else{
            for(j=i+2;j<n;j++)
            {
            if((a[i+1]==a[j]) && (a[i]==a[j+1])){

                    p = 1;

                    break;
                    }
                }
        }


    if(p==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}


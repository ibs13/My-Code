#include <stdio.h>
#include <string.h>

int main()
{
    int i,j=0,k=0,n,m,p;
    char a[150],b[10]="CODEFORCES";

    scanf("%s",&a);

    n = strlen(a);

    for(i=0;i<n;i++)
    {
        if(a[i]==b[j]){
            while((a[i]==b[j]) && (j<10))
            {
                i++;
                j++;
            }
            k++;
            if(k==1){
                p = j;
                m = 9 - p;
            }

            if(k==2 && j!=10){
                k--;
            }
        }

        if(j>=10){
            break;
        }
    }

    if((k==1 || k==2) && (j==10)){
        printf("YES %d %d\n",j,k);
    }
    else{
        printf("NO\n");
    }

    return 0;
}

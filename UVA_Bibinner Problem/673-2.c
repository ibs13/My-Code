#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n,r,i,p,l, ar[130];
    char a[130];

    scanf("%d",&n);
    a[100] = getchar();

    while(n--)
    {
        p=0;

        gets(a);

        r=strlen(a);
        l=1;
        for(i=0;i<r;i++)
        {
            if(a[i] == '(')
            ar[l++] = 1;
            else if(a[i] == '[')
            ar[l++] = 2;
            else if(a[i] == ')'){
                if (l==0 || ar[l-1] != 1){
                    p=1;
                    break;
                }
                l--;

            }
            else if(a[i] == ']' ){
                if (l==0 || ar[l-1] != 2){
                    p=1;
                    break;
                }
                l--;
            }

            else {
                p=1;
                break;
            }

        }

        if(p==0 || r == 0)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }

    }

    return 0;
}


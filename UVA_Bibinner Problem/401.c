#include <stdio.h>
#include <string.h>

int main()
{
    char a[50],b[50],ch;
    int i,j,m,n,p;

    while(scanf("%s",a)!=EOF)
    {
        n = 1;
        p = 0;

        m = strlen(a);

        for(i=m-1,j=0;j<m;i--,j++)
        {
            b[j] = a[i];
        }

        for(i=0;i<m;i++)
        {
            if(a[i]!=b[i])
            {
                n = 0;
                break;
            }
        }

        for(i=0;i<m;i++)
        {
            if(a[i]=='A' || a[i]=='E' || a[i]=='H' || a[i]=='I' || a[i]=='J' || a[i]=='L' || a[i]=='M' || a[i]=='O' || a[i]=='S' || a[i]=='T' || a[i]=='U' || a[i]=='V' || a[i]=='W' || a[i]=='X' || a[i]=='Y' || a[i]=='Z' || a[i]=='1' || a[i]=='2' || a[i]=='3' || a[i]=='5' || a[i]=='8' || a[i]=='0')
            {
                if((a[i]=='A' && b[i]=='A') || (a[i]=='M' && b[i]=='M') || (a[i]=='I' && b[i]=='I') || (a[i]=='H' && b[i]=='H') || (a[i]=='T' && b[i]=='T') || (a[i]=='U' && b[i]=='U') || (a[i]=='V' && b[i]=='V') || (a[i]=='W' && b[i]=='W') || (a[i]=='X' && b[i]=='X') || (a[i]=='Y' && b[i]=='Y') || (a[i]=='1' && b[i]=='1') || (a[i]=='8' && b[i]=='8'))
            {
                p = 1;
            }

            else if((a[i]=='E' && b[i]=='3') || (b[i]=='E' && a[i]=='3'))
            {
                p =1;
            }

            else if((a[i]=='J' && b[i]=='L') || (b[i]=='J' && a[i]=='L'))
            {
                p =1;
            }

            else if((a[i]=='O' && b[i]=='O') || (b[i]=='0' && a[i]=='0') || (a[i]=='O' && b[i]=='0') || (b[i]=='0' && a[i]=='O'))
            {
                p =1;
            }
            else if((a[i]=='S' && b[i]=='2') || (b[i]=='S' && a[i]=='2'))
            {
                p =1;
            }
            else if((a[i]=='Z' && b[i]=='5') || (b[i]=='Z' && a[i]=='Z'))
            {
                p =1;
            }
            else{
                p = 0;
                break;
            }
            }
            else{
                p = 0;
                break;
            }
        }

        if(n==0 && p==0)
        {
            printf("%s -- is not a palindrome.\n\n",a);
        }
        else if(n==1 && p==0)
        {
            printf("%s -- is a regular palindrome.\n\n",a);
        }
        else if(n==0 && p==1)
        {
            printf("%s -- is a mirrored string.\n\n",a);
        }
        else if(n==1 && p==1)
        {
            printf("%s -- is a mirrored palindrome.\n\n",a);
        }
    }

    return 0;
}

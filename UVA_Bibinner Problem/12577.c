#include <stdio.h>
#include <string.h>

int main()
{
    int ca = 1;
    char a[10];

    while(gets(a))
    {
        if(a[0]=='*')
        {
            break;
        }
        else{
            if(a[0]=='H' && a[1]=='a' && a[2]=='j' && a[3]=='j')
            {
                printf("Case %d: Hajj-e-Akbar\n",ca++);
            }
            else if(a[0]=='U' && a[1]=='m' && a[2]=='r' && a[3]=='a' && a[4]=='h')
            {
                printf("Case %d: Hajj-e-Asghar\n",ca++);
            }
        }
    }

    return 0;
}

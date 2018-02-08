#include <stdio.h>
#include <string.h>

int main()
{
    char st[50];
    int n,i;

    while(scanf("%s",st)!=EOF)
    {
        n = strlen(st);

        for(i=0;i<n;i++)
        {
            if(st[i]=='A' || st[i]=='B' || st[i]=='C'){
                printf("2");
            }
            else if(st[i]=='D' || st[i]=='E' || st[i]=='F'){
                printf("3");
            }
            else if(st[i]=='G' || st[i]=='H' || st[i]=='I'){
                printf("4");
            }
            else if(st[i]=='J' || st[i]=='K' || st[i]=='L'){
                printf("5");
            }
            else if(st[i]=='M' || st[i]=='N' || st[i]=='O'){
                printf("6");
            }
            else if(st[i]=='P' || st[i]=='Q' || st[i]=='R'|| st[i]=='S'){
                printf("7");
            }
            else if(st[i]=='T' || st[i]=='U' || st[i]=='V'){
                printf("8");
            }
            else if(st[i]=='W' || st[i]=='X' || st[i]=='Y'|| st[i]=='Z'){
                printf("9");
            }
            else{
                printf("%c",st[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

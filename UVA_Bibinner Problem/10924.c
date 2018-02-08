#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char st[100],s1[30],s2[30];
    int l,i,j,s,n;

    for(i=1;i<=26;i++)
    {
        s1[i] = 64 + i;
        s2[i] = 96 + i;
    }

    while(scanf("%s",st)!=EOF)
    {
        s = 0;
        l = strlen(st);

        for(i=0;i<l;i++)
        {
            if(st[i]>=97 && st[i]<=122){
                for(j=1;j<=26;j++)
                {
                    if(st[i]==s2[j]){
                        s = s + j;
                        break;
                    }
                }
            }
            else{
                for(j=1;j<=26;j++)
                {
                    if(st[i]==s1[j]){
                        s = s + j + 26;
                        break;
                    }
                }
            }
        }


        if(s==2 || s==3){
            printf("It is a prime word.\n");
        }
        else if(s%2==0){
            printf("It is not a prime word.\n");
        }
        else{
            for(i=3;i<s/2;i++)
            {
                if(s%i==0){
                    printf("It is not a prime word.\n");
                    break;
                }
            }
            if(s%i!=0){
                printf("It is a prime word.\n");
            }
        }
    }

    return 0;
}

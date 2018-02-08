#include <stdio.h>
#include <string.h>

int main()
{
    char st[10000],s1[10000],s2[10000];
    int i,l,j;

    while(gets(st))
    {
        if(strcmp(st,"DONE")==0 || strcmp(st,"done")==0){
            break;
        }
        else{
            l = strlen(st);

            for(i=0,j=0;i<l;i++)
            {
                if(st[i]!='.' && st[i]!=',' && st[i]!='!' && st[i]!='?' && st[i]!=' '){
                    if(st[i]>=65 && st[i]<=90){
                        s1[j] =st[i]+32;
                    }
                    else{
                        s1[j] = st[i];
                    }
                    j++;
                }
            }

            l = strlen(s1);

            for(i=l-1,j=0;i>=0;i--,j++)
            {
                s2[i] = s1[j];
            }

            if(strcmp(s1,s2)!=0){
                printf("Uh oh..\n");
            }
            else{
                printf("You won’t be eaten!\n");
            }
        }
    }

    return 0;
}

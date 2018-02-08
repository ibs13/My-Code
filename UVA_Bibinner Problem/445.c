#include <stdio.h>
#include <string.h>

int main()
{
    int n,a,i=0,j,k,t,v;
    char s[100000],r[30],ch;

    for(i=0;i<26;i++)
    {
        r[i] = 65 + i;
    }

    i = 0;

        do
        {
            ch = getchar();
            s[i] = ch;
            i++;
        }
        while(ch!=EOF);
            i = i - 1;

            s[i] = '\0';

        n = strlen(s);

        for(i=0;i<n;i++)
        {
            t = 0;

            if(s[i]>=48 && s[i]<=57){
                while(s[i]>=48 && s[i]<=57)
            {
                a = (int)(s[i])-48;

                t = t + a;
                i++;
                v = t;
            }
            i--;
            }

            else if(s[i]>=65 && s[i]<=90){
                for(j=0;j<26;j++){
                    if(s[i]==r[j])
                        break;
                }
                for(k=0;k<v;k++)
                {
                    printf("%c",s[i]);
                }
            }
            else if(s[i]=='b'){
                for(k=0;k<v;k++)
                {
                    printf(" ");
                }
            }
            else if(s[i]=='*'){
                for(k=0;k<v;k++)
                {
                    printf("*");
                }
            }
            else if(s[i]=='!' || s[i]=='\n'){
                    printf("\n");
            }
        }



    return 0;
}


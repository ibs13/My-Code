#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int num1,num2,i=0,j,k=0;
    char ch1,ch2,s[100];

    scanf("%c %d %c %d",&ch1,&num1,&ch2,&num2);

    while(ch1!=ch2 || num1!=num2){
        if(ch1>ch2 && num1<num2){
            s[i++] = 'L';
            s[i++] = 'U';
            ch1--;
            num1++;
        }

        else  if(ch1<ch2 && num1<num2){
            s[i++] = 'R';
            s[i++] = 'U';
            ch1++;
            num1++;
        }

        else  if(ch1>ch2 && num1>num2){
            s[i++] = 'L';
            s[i++] = 'D';
            ch1--;
            num1--;
        }

        else  if(ch1<ch2 && num1>num2){
            s[i++] = 'R';
            s[i++] = 'D';
            ch1++;
            num1--;
        }

        else  if(ch1==ch2){
                if(num1<num2){
                    s[i++] = 'U';
                    num1++;
                }
                else{
                    s[i++] = 'D';
                    num1--;
                }
        }

        else  if(num1==num2){
                if(ch1>ch2){
                    s[i++] = 'L';
                    ch1--;
                }
                else{
                    s[i++] = 'R';
                    ch1++;
                }
        }

        k++;
        s[i++] = '\n';
    }

    printf("%d\n",k);

    for(j=0;j<i;j++){
        printf("%c",s[j]);
    }


    return 0;
}

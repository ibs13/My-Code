#include <stdio.h>

int main()
{
    int n,i,j=2,p,r;

    printf("Enter the range of number:\n");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("Invalid input");
    }

    else if(n>2)
    {


        for(i=3;i>n;i++)
        {
            while(i>j){
                r=i%j;
                j++;
                if(r==0)
                {
                    break;
                }
            }
            if(r==0)
            {
                p=p+0;
            }
            else
            {
                p=p+1;
                printf("%d",i);
            }
        }
        printf("There is %d prime number in %d",p,n);
    }

    return 0;
}

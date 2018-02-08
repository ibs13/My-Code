#include <stdio.h>
#include <conio.h>
#define size 5

int top = 0;
char st[6];
void push(char ch);
void pop();

int main()
{
    int p,i;
    char ch;

    for( ; ;)
    {
        system("CLS");
        printf("The stack (MAX = 5):");
            for(i=0;i<top;i++)
            {
                printf("%c ",st[i]);
            }
        printf("\nWhat operation do you want to operate:\n");

            printf("\tPress 1 to Push.\n");
            printf("\tPress 2 to Pop.\n");
            printf("\tPress 3 to Exit.\n");

            scanf("\n%d",&p);

        if(p==1)
        {
            printf("Enter the element:");
            scanf("\n%c",&ch);
            push(
                 ch);
        }
        else if(p==2)
        {
            pop();
        }
        else if(p==3)
        {
            break;
        }
        else{
            printf("Wrong input . Press any key to try again .\n");
            getch();
        }
    }
    return 0;
}

void push(char ch)
{
    if(top<size)
    {
        st[top] = ch;
        top++;
    }
    else{
        printf("Data overflow . Press any key to continue.\n");
        getch();
    }
}

void pop()
{
    if(top>0)
    {
        top--;
    }
    else{
        printf("Data underflow . Press any key to continue.\n");
        getch();
    }
}

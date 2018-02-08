#include <stdio.h>
#include <conio.h>
#define size 5

int last = 0,i;
char que[size];

void enqueue(char ch);
void dequeue();

int main()
{
    int p,i;
    char ch;

    for( ; ; )
    {
        system("CLS");
        printf("The queue(Max = 5):");
        for(i=0;i<last;i++)
        {
            printf("%c ",que[i]);
        }
        printf("\nWhat operation do you want to operate:\n");
            printf("\tPress 1 to Enqueue.\n");
            printf("\tPress 2 to Dequeue.\n");
            printf("\tPress 3 to Exit.\n");

        scanf("%d",&p);

            if(p==1)
            {
                printf("Enter the element: ");
                scanf("\n%c",&ch);
                enqueue(ch);
            }
            else if(p==2)
            {
                dequeue();
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

void enqueue(char ch)
{
        if(last<size)
        {
            que[last] = ch;
            last++;
        }
        else{
            printf("Data overflow . Press any key to continue .\n");
            getch();
        }
}

void dequeue()
{
    if(last>0)
    {
        for(i=1;i<last;i++)
        {
            que[i-1] = que[i];
        }
        last--;
    }
    else{
        printf("Data underflow . Press any key to continue .\n");
        getch();
    }
}


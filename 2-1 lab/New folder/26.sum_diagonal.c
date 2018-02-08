#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

 int a[100][100],n,m,i,j,sum,p,s;

 int pri();
 int sec();
 int both();
 int opr();

 int pri()
 {
     sum = 0;
     p = m - 1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if((i-j==p) || (j-i==p))
            {
                sum = sum +a[i][j];
            }
        }
        p = p - 2;
    }

    printf("summation of primary diagonal elements of the the matrix are: %d\n",sum);

    return opr();
 }

 int sec()
 {
     sum = 0;

      for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i-j==0)
            {
                sum = sum +a[i][j];
            }
        }
    }

    printf("summation of secondary diagonal elements of the the matrix are: %d\n",sum);

    return opr();
 }

int both()
{
    sum = 0;

     p = m-1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if((i-j==0) || ((i-j)==p) || (j-i)==p)
            {
                sum = sum +a[i][j];
            }
        }
        p = p - 2;
    }

    printf("summation of secondary diagonal elements of the the matrix are: %d\n",sum);

    return opr();
}

int main()
{
    printf("How many column and row:");
    scanf("%d %d",&n,&m);

    if(n!=m)
    {
        printf("This is not square matrix . So there is no diagonal elements.\n");
    }

    else{
        printf("Enter the elements of the matrix:");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The matrix are:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return opr();
}
    return 0;
}

int opr()
{
    printf("\nWhat operations do you want to process:\n");

    printf("\nPress 1 to summation of primary diagonal elements.\nPress 2 to summation of secondary diagonal elements.\nPress 3 to summation of both diagonal elements.\nPress 4 to exit.\n");


    while(scanf("%d",&s))
    {
        if(s==1)
    {
        return pri();
    }
        else if(s==2)
    {
        return sec();
    }
        else if(s==3)
    {
        return both();
    }
        else
    {
        break;
    }
    }
}

#include<stdio.h>
int  main()
{
   int t,n,a[100],nm=1,i=0,sum=0;
   float ans,avg;
   char ch = '%';

   scanf("%d",&t);

    while(t--)
    {
        nm = 0;
        sum = 0;
        scanf("%d",&n);

        {


        for(i=0; i<n; i++)
        {
             scanf("%d",&a[i]);
             sum = sum + a[i];
         }
         avg = sum / n;

       for(i=0; i<n; i++)

        {
            if( a[i] > avg)
             nm++;
        }

        ans =(( (float)nm * 100 ) / (float)n) ;

        printf("%.3f%c\n",100-ans,ch);
         }

    }
    return 0;
}

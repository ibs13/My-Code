#include<stdio.h>
int main()
{
	unsigned long long int a,b,temp,total=0;
	scanf("%lld %lld",&a,&b);
	while(1)
	{
		unsigned long long int temp=a/b;
		unsigned long long int remainder=a%b;
		if(remainder==0)
		{
			total+=temp;
			break;
		}
		else if(remainder==1)
		{
			total=total+temp+b;
			break;
		}
		else
		{
			a=b;
			b=remainder;
			total+=temp;
		}
	}
	printf("%lld",total);
	return 0;
}

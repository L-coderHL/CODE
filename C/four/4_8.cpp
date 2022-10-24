#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,y,i,sum;
	scanf("%d",&a);
	for(b=10,c=1,i=0;b>=10;i++)
	{
		c=pow(10,i);
		b=a/c;
	}
	printf("count=%d\n",i);
	

	for(y=0,i=i-1,sum=0;i>=0;i--)
	{
		c=pow(10,i);
		y=a/c;
		sum=sum+y;
		a=a-c*y;
	}
	printf("sum=%d",sum);
	return 0;
}

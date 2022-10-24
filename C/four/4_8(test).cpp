#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,i;
	scanf("%d",a);
	b=1;
	for(c=1,i=1;b>=0;i++)
	{
		b=a/c;
		c=pow(10,i);
	}
	printf("%d",i);

	return 0;
}
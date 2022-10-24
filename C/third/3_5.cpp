#include <stdio.h>
int main()
{
	int x,a,b;
	scanf("%d%d",&a,&b);
	x=a*a+b*b;
	if(x>100)
	{
		printf("%d",x/100);
	}
	else
	{
		printf("%d",a+b);
	}
	return 0;
}

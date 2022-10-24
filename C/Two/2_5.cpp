#include <stdio.h>
#include <math.h>
int main()
{
	printf("number\tsquare\tcube\n");
	int a,b,c,x;
	for(a=0,x=0;a<=5;++x)
	{
		b=pow(a,2),c=pow(a,3);
		printf("\n%d\t%d\t%d\n",a,b,c);
		a=1+x;
	}
	return 0;
}

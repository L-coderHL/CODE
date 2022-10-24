#include <stdio.h>
#include <math.h>
int main()
{
	int i,a,b,c,d;
	for(i=100;i<=999;i++)
	{
		a=i/100;
		b=(i-100*a)/10;
		c=i-100*a-10*b;
		d=pow(a,3)+pow(b,3)+pow(c,3);
		if(i==d)
		{
			printf("%d\n",i);
		}
	}
	return 0;
 } 

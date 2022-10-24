#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,d,t;
	scanf("%lf%lf",&d,&t);
	d=ceil(d);
	if(d<=3) 
	{
		a=10;
	}
	else
	{
		if(d>3&&d<13)
		{
			a=10+2*(d-3);
		}
		else
		{
			a=30+3*(d-13);
		}
	
	}
	if(t<=5) 
	{
		b=0;
	}
	else
	{
		c=ceil(t/5);
		b=c*2.0;
	}
	printf("%.0lf",a+b);
	return 0;
}

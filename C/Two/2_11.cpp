#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,p,x1,x2;
	scanf("%lf%lf%lf",&a,&b,&c);
	p=sqrt(pow(b,2)-4*a*c);
	x1=(-b+p)/(2*a);
	x2=(-b-p)/(2*a);
	printf("%.2lf %.2lf",x1,x2);
	return 0;
 } 


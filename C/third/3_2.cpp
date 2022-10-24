#include <stdio.h>
int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a>b)
	{
	if(a>c)printf("%.2lf",a);
	}
	if(b>a)
	{
	if(b>c)printf("%.2lf",b);
	}
	if(c>a)
	{
	if(c>b)printf("%.2lf",c);
	}
	return 0;
}
 

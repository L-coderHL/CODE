#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,p,q,x1,x2,x,m,n,F;
	scanf("%lf%lf%lf",&a,&b,&c);
	
	if (a==0&&b==0)
	{
		printf("Not an equation");
		return 0;	
	}		
	if(a==0&&b!=0)
	{
		printf("%.2lf",-c/b);
		return 0;
	}
	
	q=pow(b,2)-4*a*c;
	if(q<0)
	{
		q=-q,F=1;
	}
	else
	{
		F=0;
	}
	p=sqrt(q);
	m=-b/(2.0*a);
	n=p/(2.0*a);
	x1=m+n,x2=m-n;
	
	if(F==1)
		{	if(n<0)
			{
				printf("%0.2lf+%0.2lfi %0.2lf-%0.2lfi",m,-n,m,-n);
			}
			else
			{
				printf("%0.2lf+%0.2lfi %0.2lf-%0.2lfi",m,n,m,n);
			}
			
		}
	else{
			if (x1>x2)
			{
				printf("%.2lf %.2lf",x1,x2);
			}
			else
			{
				printf("%.2lf %.2lf",x2,x1);
			}
		}
	return 0;
}
	



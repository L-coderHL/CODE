#include <stdio.h>
int main()
{
	double a,b,c;
	int i;
	scanf("%lf%lf",&a,&b);
	if(b==0)
	{
		a=1;
	}
	
	for(i=1,c=1;i<=b;i++)
	{
		c=c*a; 
		printf("%12.0lf",c);
		if(i%4==0)
		{
			printf("\n");
		}
	 } 
	
	return 0;
 } 

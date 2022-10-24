#include <stdio.h>
#include <math.h>
int main()
{
	int x,b,c;
	scanf("%d",&c);
	x=0;
	do
	{
		b=x*x%391;
		if(b==13)
		{
			printf("%d ",x);
		}
		x++;
	}
	while(x<c);
	return 0;
 } 

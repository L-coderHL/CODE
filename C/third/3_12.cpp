#include <stdio.h>
int main()
{
	char x;
	double y;
	scanf("%c%lf",&x,&y);
	if (x=='P')
	{
		if(y>=100)
		{
			y=0.9*y;
		 } 
	}
	else 
	{
		if(y<1000)
		{
			y=0.8*y;
		}
		else
		{
			y=0.7*y;
		} 	
	}
	printf("%.2lf",y);
	return 0;
}

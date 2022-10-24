#include <stdio.h>
int main ()
{
	int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int y, d, i, c=0, t, month;

	scanf("%d,%d,%d", &y, &month, &d);
	t = month - 2;
	
	for(i = 0; i <= t; i++)
	{
		c = c + m[i];
	}
	c = c + d;
		
	if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0) 
	{
		if(month > 2)
		{
			c = c + 1;
		}
		
	}
	
	printf("It is the %dth day.", c);
	return 0;

}

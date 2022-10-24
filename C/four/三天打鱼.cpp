#include <stdio.h>
int main ()
{
	int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int y, j, t, d, c = 0;
	int Y, M , D;
	int i, leap = 0;
	
	scanf("%d%d%d", &y, &j, &d);
	t = j - 2;
	
	//years
	for (i = 1990; i < y; i++)
	{
		if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			c = c + 366;
		} 
		else
		{
			c = c + 365;
		}		
	}
	if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		leap = 1;
	}
	
	//months
	for (i = 0; i <= t; i++)
	{
		c = c + m[i];	
	}
	
	//Day
	if (j > 2 && leap == 1)
		{
			c = c + 1;
		}
	
	c = c + d;
	
	//fish or sleep
	if (c % 5 <= 3 && c % 5 >= 0)
	{
		printf("fishing");
	} 
	else
	{
		printf("sleeping");
	}
	return 0;
}

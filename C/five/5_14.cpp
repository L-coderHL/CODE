#include <stdio.h>
#include <math.h>
int main ()
{
	int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i, j, t, c, d, e;
	
	scanf("%d%d%d", &i, &j, &t);
	
	if(t > a[j-1])
	{
		printf("data error.");
	}
	else
	{
		c = i * pow(10, 4) + j * pow(10, 2) + t;
		
		d= sqrt(c);
		for (i = 2; i < d; i++)
		{
			if (c % i == 0)
			{
				e = 0;
				break;
			}
			else
			{
				e = 1;
			}
		}
		
		if (e == 0)
		{
			printf("n");
		}
		else
		{
			printf("y");
		}	
	}
	
	return 0;
}

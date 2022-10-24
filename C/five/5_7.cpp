#include <stdio.h>
int main ()
{
	int a[10], i, j, t;
	
	for (i = 0; i<= 9; i++)
	{
		scanf("%d", &a[i]);
	}
	for(j = 0; j <= 8; j++)
	{
		for (i = 0; i <= 8; i++)
		{
			if (a[i] > a[i+1])
			{
				t = a[i+1];
				a[i+1] = a[i];
				a[i] = t; 
			}
		 
		}
	}
	
	for(i = 0; i <= 9; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

#include <stdio.h>
int main ()
{
	int a[10][10], i, j, t;
	
// primary	
	for (i = 0; i<= 9; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	
// data	
	for (i = 2; i<= 9; i++)
	{
		t = i - 1;
		for (j = 1; j <= t; j++)
		{
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}
	
// print	
	for (i = 0; i <= 9; i++)
	{	
		for (j = 0; j <= i; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}		
	return 0;
}

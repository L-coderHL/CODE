#include <stdio.h>
int main ()
{
	int gys(int, int);
	int gbs(int, int);
	int a,b;
	scanf("%d%d", &a, &b);
	printf("%d %d", gys(a, b), gbs(a, b));
	return 0;
}

int gys(int a, int b) 
{
	int max(int, int);
	int d = 0, c = 0, x[100], y[100];
	int i, j, p = 0, k = 0;
	
	for(i = 1; i <= a; i++)
	{
		c = a % i;
		if(c == 0)
		{
			x[p] = i;
			p++	;
		}
	}
	for(i = 1; i <= b; i++)
	{
		c = b % i;
		if(c == 0)
		{
			y[k] = i;
			k++	;
		}
	}
	for(i = 0; i <= p-1; i++)
	{
		for(j = 0; j <= k-1; j++)
		{
			if(x[i] == y[j])
			{
				d = max(x[i], d);
			}
		}
	}
	return (d);
}
int gbs(int a, int b)
{
	int gys(int, int);
	int c, d;
	c = a * b;
	d = c / gys(a, b);
	return d;
}
	
int max(int a, int b)
{
	int c;
	if(a > b)
	{
		c = a;
	}
	else
	{
		c = b;
	}
	return (c);
}

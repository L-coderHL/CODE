#include <stdio.h>
int main()
{
	int max(int a, int b);
	int x[8];
	int i, j;
	for(i = 0; i <=7; i++)
	{
		scanf("%d", &x[i]);
	}
	int m = x[0];
	
	for(i = 0; i <= 7; i++)
	{
		m=max(m,x[i]);
	}
	printf("%d",m);
	return 0; 
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


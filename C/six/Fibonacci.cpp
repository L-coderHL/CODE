#include <stdio.h>
int main()
{
	int n, b;
	int fib(int);
	scanf("%d", &n);
	b = fib(n);
	printf("%d", b);
	return 0; 
}

int fib(int n)
{
	int x[100];
	int c;
	if(n == 1 || n == 2)
	{
		x[n] = 1;
		
	}
	else
	{
		x[n] = fib(n-1) + fib(n-2);
	} 
	return (x[n]);
}

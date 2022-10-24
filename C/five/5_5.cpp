#include <stdio.h>
int main ()
{
	int x, y, a[8]={0, 0, 0, 0, 0, 0, 0, 0}, i;
	
	scanf ("%d", &x);
	for(i = 0; x > 0; i++)
	{
		a[i] = x % 2;
		x = x / 2;
	}
	
	for (i = 7; i >= 0; i--)
	printf("%d", a[i]);
	return 0;
}

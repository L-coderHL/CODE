#include <stdio.h>
#include <math.h>
int main() {
	int i, t, a[10];
	int min = 100;
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &a[i]);
		if(abs(a[i]) <= min) 
		{
			min = abs(a[i]);
			t = a[i];
		}
	} 
	printf("%d", t);
	return 0;
}

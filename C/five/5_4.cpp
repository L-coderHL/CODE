#include <stdio.h>
int main ()
{
	int a[20], i, j;
	
	for(i = 0; i <= 19; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i <= 19; i++)
	{
		for(j = 0; j <= 19 ; j++)
		{
			if (a[i] % a[j] == 0 && i != j)
			{
				printf("%d ", a[i]);
				break;
			}	
		}
	}
	return 0;
}

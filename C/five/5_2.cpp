#include <stdio.h>
int main()
{
	int i, j = 0, a[10], sum = 0;
	float avg;
	for(i = 0; i <= 9; i++)
	{
		scanf("%d", &a[i]);
		sum = sum + a[i];
	} 
	
	avg = sum / 10.0;
	
	for (i = 0; i <= 9; i++)
	{
		if(a[i] > avg)
		{
			j++;
		}
	}
	
	printf("%d", j);
	
	return 0;
}

#include <stdio.h>
int main ()
{
	char str[10], t;
	int i, j;
	
	for(i = 0; i <= 9; i++)
	{
		scanf("%s", &str[i]);
		if str[i]= \0 break;
	} 
	
	for(j = 0; j <= 8; j++)
	{
		for (i = 0; i <= 8; i++)
		{
			if (str[i] > str[i+1])
			{
				t = str[i+1];
				str[i+1] = str[i];
				str[i] = t; 
			}
		 
		}
	}
	
	for(i = 0; i <= 9; i++)
	{
		printf("%s ", str[i]);
	}
	return 0;
	return 0;
 } 

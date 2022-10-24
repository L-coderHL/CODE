#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = {"I was born in 1997"};
	char n[11] = {"0123456789"}; 
	int i, j, a, b, c, l;
	
	l = strlen(str);
	for(i = 0, a = 0; i < l; i++)
	{
		if(str[i] == ' ')
		{
			a = a + 1;
		}
	}
	
	for (i = 0, b = 0; i <= l; i++)
	{
		for(j = 0; j <= 9; j++)
		{
			if (str[i] == n[j])
			{
				b = b + 1;
			}
		}
	}
	
	c = l + 1 - a - b;
	
	printf("%d %d %d", a, b, c);
	return 0;
}

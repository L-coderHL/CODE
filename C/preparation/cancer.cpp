#include <stdio.h>
int main()
{
	int a[100][100], b[100][100] = {0};
	int x, i, j, s = 0, l = 0;
	int cancer_len(int (*)[100], int);
	
	scanf("%d", &x);
	for(i = 0; i < x; i++)
	{
		for(j = 0; j < x; j++)
		{
			scanf("%d", *(a+i)+j);
			if (a[i][j] <= 50)
			{
				b[i][j] = 1;
				s++;
			}
		}
	}
	l = cancer_len(b, x);
	printf("%d %d", s, l);
} 

int cancer_len(int (*b)[100], int x)
{
	int c = 0, i, j, t; 
	for(i = 0; i <= x - 1; i++)
	{		
		c = c + b[0][i] + b[x - 1][i] + b[i][0] + b[i][x - 1];
		for(j = 0; j <= x - 1; j++)
		{
			if(b[i][j] != 1 || i - 1 < 0 || i + 1 > x - 1 || j - 1 < 0 || j + 1 > x - 1 )
			continue;
					
			t = b[i-1][j] * b[i+1][j] * b[i][j+1] * b[i][j-1];
			if(t == 0)
			{
				c ++;
			}
		}			
	}
	c = c - b[0][0] - b[0][x-1] - b[x-1][0] - b[x-1][x-1];
	return c;
}

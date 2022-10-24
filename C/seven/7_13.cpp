#include <stdio.h>
int main()
{
	int a[3][4] = {65, 57,70, 60, 58, 87, 90 ,81, 90, 99, 85, 98};
	void f(int (*p)[4]);
	
	f(a);
	return 0;
} 
void f(int (*p)[4])
{
	int i, j;
	int k;
	for(i = 0; i <= 2; i++)
	{
		for(j = 0, k = 0; j <=3; j++)
		{
			if(*(*(p + i) + j) < 60)
			{
				k = 1;
				break;	
			} 
		}
		if(k == 1)
		{
			printf("No.%d:\n", i + 1);
			for(j = 0; j <= 3; j++)
			{
				printf("%.1f", (double)p[i][j]);
				if(i == 3) break;
				printf(" ");
			}
			printf("\n");	
		}
		
	}
	
}

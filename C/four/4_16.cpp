#include <stdio.h>
int main()
{
	int a,b,i,c;
	for(c=1;c<=9;c++)
	{
	
	for(i=1;i<=c;i++)
	{
		printf("%d*%d=%d",c,i,c*i);
		if(i!=c)
		{
			printf(",");
		}
	}
	printf(";\n");
	}
	return 0;
}

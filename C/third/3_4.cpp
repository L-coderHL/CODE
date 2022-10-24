#include <stdio.h>
int main()
{
	int year,leap;
	scanf("%d",&year);
	if (year%400==0||year%4==0&&year%100!=0)
	{
		leap=1;
	}
	else
	{
		leap=0;	
	}
	if(leap==1)
	{
		printf("y");
	}
	else
	{
		printf("n");
	}
	return 0;
}

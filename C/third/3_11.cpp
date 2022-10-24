#include <stdio.h>
#include <math.h>
int main()
{
	float t;
	int y;
	scanf("%f",&t);
	if(t-int(t)!=0)
	{
		t=int(t)+1;
	}
	else
	{
		t=int(t);
	}
	
	if(t<=10)
	{
		printf("%d",30);
	}
	else
	{
		if(t>10&&t<=50)
		{
			y=30+(t-10)*3;
			printf("%d",y);
		}
		else
		{
			y=30+40*3+(t-50)*2;
			printf("%d",y);
		} 
	}
	return 0;
}

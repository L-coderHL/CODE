#include <stdio.h>
int main()
{
	int a,x,i;
	scanf("%d",&x);
	
	if(x==2||x==1)
	{
		printf("y");
		return 0;
	}
	i=2;
	do
	{
		a=x%i;
		if(a==0) break;
		i++;
	}while(i<=x/2);
	
	if(a==0)
	{
		printf("n");
	}
	else
	{
		printf("y");
	}
	return 0;
}

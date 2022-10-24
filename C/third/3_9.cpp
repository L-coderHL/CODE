#include <stdio.h>
int main()
{
	int t,a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	t=a%2;
	if(t==1)
	{
		printf("%d is odd number!\n",a);
	}
	
	t=b%2;
	if(t==1)
	{
		printf("%d is odd number!\n",b);
	}
	
	t=c%2;
	if(t==1)
	{
		printf("%d is odd number!\n",c);
	}
	return 0;
}

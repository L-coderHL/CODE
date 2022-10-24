#include <stdio.h>
int main()
{
	int a,b,sum;
	a=1;
	sum=0;
	while (a<=100)
	{
	b=a%2;
	if(b!=0)
	{
		sum=sum+a;	
	}
	a=a+1;
	} 
	printf("%d",sum);
	return 0;
 } 

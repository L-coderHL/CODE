#include <stdio.h>
int main()
{
	int x,y,a,b,c;
	scanf("%d",&x);
	a=x/100;
	b=(x-a*100)/10;
	c=x-a*100-b*10;
	y=100*c+10*b+a;
	printf("%d",y);
	return 0;
}

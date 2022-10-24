#include <stdio.h>
int main()
{
	int a,b,x,y,z;
	scanf("%d",&a); 
	b=(3*a+3)*3;
	x=b/100;
	y=(b-100*x)/10;
	z=b%10;
	printf("%d",y+z);
	return 0;
}

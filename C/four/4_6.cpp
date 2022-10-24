#include <stdio.h>
int main()
{
	int a,b,x,n,i;
	scanf("%d",&n);
	if(n==1)
		x=1;
	if(n==2)
		x=1;
	if(n>=2)
		for(i=3,a=1,b=1;i<=n;i++)
		{
			x=a+b;
			a=b;
			b=x;
		}
		printf("%d",x);
	return 0;
}

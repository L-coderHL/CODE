#include <stdio.h>
int main()
{
	int a=1,b=1,c=1,d=1,i,n;
	scanf("%d",&n);
	
	for(i=4;i<=n;i++){
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		
	}
	printf("%d",d);
	
	return 0;
}

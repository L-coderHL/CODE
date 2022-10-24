#include <stdio.h>
int main()
{
	int i,n;
	double x,a=2,b=1,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+a/b;
		x=a;
		a=a+b;
		b=x;
	}
	printf("%.2f",sum);
	return 0;
}

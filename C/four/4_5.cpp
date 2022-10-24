#include <stdio.h>
int main()
{
	double sum;
	int a,i,n;
	scanf("%d",&n);
	for(i=1,sum=1,a=2;a<=n;a++){
		i=-i;
		sum=sum-1.0/a*i;
	}
	printf("%.3lf",sum);
	return 0;
}

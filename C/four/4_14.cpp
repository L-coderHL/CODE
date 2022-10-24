#include <stdio.h>
#include <math.h>
int main()
{
	int x,t,sum;
	scanf("%d",&x);
	for(sum=0;x>=1;x=x/10){
		t=x%10;
		sum=sum+t;
	}
	printf("%d",sum);
	
	return 0;
}

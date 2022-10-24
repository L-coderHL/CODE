#include <stdio.h>
int main()
{
	int x,n,i,j;
	scanf("%d",&x);
	for(n=1;n<=x;n++){
		for(j=1;j<=x+1-n;j++){
			printf("*");
		}
		printf("\n");
		}
	
	for(n=2;n<=x;n++){
		for(i=1;i<=n;i++){
			printf("*");
		}
		if(n==x) break;
		printf("\n");
	}
	return 0;
 } 
